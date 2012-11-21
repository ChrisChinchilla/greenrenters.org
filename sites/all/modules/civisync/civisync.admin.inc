<?php 

function civisync_main_form($form_state = array(), $op, $action = NULL, $civiContact = NULL)
{
	
	switch($action)
	{
		case 'remove':
				$query = "UPDATE civicrm_contact as c SET c.api_key = '' WHERE c.id IN ( %s )";
				$result =  db_query($query,$civiContact);
				drupal_goto("civisync/$op");
			break;
		case 'add':
				$key = _charReplace(md5(uniqid(rand(), true)),'-');
				$query = "UPDATE civicrm_contact as c SET c.api_key = '$key' WHERE c.id IN ( %s )";
				$result =  db_query($query,$civiContact);
				drupal_goto("civisync/$op");
			break;
		default:
			
			break;
	}	
	
	$query = " SELECT c.id as id, CONCAT_WS(' ',c.first_name, c.middle_name, c.last_name) as fullname, e.email as email,"
				." c.first_name as fname, c.middle_name as mname, c.last_name as lname, c.api_key as apikey"
				." FROM civicrm_contact as c"
				." LEFT JOIN civicrm_email as e ON e.contact_id = c.id AND e.is_primary = 1 "
				." LEFT JOIN civicrm_uf_match as uf ON uf.contact_id = c.id "
				." WHERE c.is_deleted = '0' AND c.contact_type = 'Individual' %s %s"
				." AND uf.id IS NOT NULL";
				
	$sql_count = " SELECT count(c.id) FROM civicrm_contact as c"
				." LEFT JOIN civicrm_email as e ON e.contact_id = c.id AND e.is_primary = 1 "
				." LEFT JOIN civicrm_uf_match as uf ON uf.contact_id = c.id "
				." WHERE c.is_deleted = '0' AND c.contact_type = 'Individual' "
				." AND uf.id IS NOT NULL";
	
	$where  = "";
				
	if($op == "authorized" )
	{
		$where .= " AND (CHAR_LENGTH(c.api_key)>15 AND CHAR_LENGTH(c.api_key)<33)";
	}
	
	$search = trim(variable_get('civisync_search_keyword', ''));
	
	if(strlen($search)>0)
	{
		$where .= ' AND (LOWER( e.email ) LIKE "%'.$search.'%" )';
	}
		
	$orderby = " ORDER BY id";

	//$limitnum = variable_get("civisync_records", 5);
		
	//$result =  db_query($query, $where, $orderby , 0, $limitnum);
	
	$sql_count = db_rewrite_sql($sql_count.$where);
	
	$query .= $where.$orderby;
	
	$query1 = db_rewrite_sql($query);
	
	$result = pager_query($query1, 20, 0, $sql_count);
	
	//$result1 =  db_query($query, $where, $orderby );
				
	//$result = db_query('SELECT cid, category, recipients, selected FROM {contact} ORDER BY weight, category');
  	$rows = array();
  	$i=0;
  	while ($contacts = db_fetch_object($result))
  	{
    	$rows[$i][0] = array('data' => check_plain($contacts->fullname),'align' => 'center');
    	$rows[$i][1] = array('data' => check_plain($contacts->email),'align' => 'center');
    	//array(check_plain($contacts->fullname), check_plain($contacts->email));
    	if(strlen($contacts->apikey)>=16 && strlen($contacts->apikey)<=32)
    	{
    		$rows[$i][2] = array('data' => check_plain($contacts->apikey),'align' => 'center');
    		$rows[$i][3] = array('data' => l(t('Remove'), 'civisync/'.$op.'/remove/'. $contacts->id),'align' => 'center');
    	}
    	else
    	{
    		$rows[$i][2] = array('data' => check_plain('--'),'align' => 'center');
    		$rows[$i][3] = array('data' => l(t('Generate'), 'civisync/'.$op.'/add/'. $contacts->id),'align' => 'center');
    	}
    	$i++;
  	}
  	
  	if($i == 0)
  	{
  		$rows[]=array(array('data' => 'No Contacts found','colspan' => 4, 'align' => 'center' ));
  	}
  	
  	$header = array(array('data' => t('Name'),'style' => 'text-align:center'), array('data' => t('Email'),'style' => 'text-align:center'), array('data' => t('API Key'),'style' => 'text-align:center'), array('data' => t('Operations'),'style' => 'text-align:center') );//array('data' => t('Operations'), 'colspan' => 2));
	
  	$output = drupal_get_form('civisync_form');
  	
  	//$output = drupal_get_form('civisync_Sitekey');
  	$output .= theme('table', $header, $rows);
  	
  	$output .= theme('pager', NULL, 20, 0);
  	
  	$output .= '<div style="text-align:center;"><a href="http://www.targetintegration.com"><img height="50" border="0" align="middle" src="'.base_path().'sites/all/modules/civisync/TargetLogo250web.jpg"></a></div>';
  	
  	return $output;
}

function _charReplace($key,$replacements)
{
	$patterns = array("&", "=", "+", "$", "?", "%", ",", "/", ":", "{", "}", "#", "|", "'");
	$api_key = str_replace($patterns,$replacements,$key);
	return $api_key;
}
?>