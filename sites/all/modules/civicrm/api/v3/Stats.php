<?php

/*
 +--------------------------------------------------------------------+
 | CiviCRM version 4.1                                                |
 +--------------------------------------------------------------------+
 | Copyright CiviCRM LLC (c) 2004-2011                                |
 +--------------------------------------------------------------------+
 | This file is a part of CiviCRM.                                    |
 |                                                                    |
 | CiviCRM is free software; you can copy, modify, and distribute it  |
 | under the terms of the GNU Affero General Public License           |
 | Version 3, 19 November 2007 and the CiviCRM Licensing Exception.   |
 |                                                                    |
 | CiviCRM is distributed in the hope that it will be useful, but     |
 | WITHOUT ANY WARRANTY; without even the implied warranty of         |
 | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.               |
 | See the GNU Affero General Public License for more details.        |
 |                                                                    |
 | You should have received a copy of the GNU Affero General Public   |
 | License and the CiviCRM Licensing Exception along                  |
 | with this program; if not, contact CiviCRM LLC                     |
 | at info[AT]civicrm[DOT]org. If you have questions about the        |
 | GNU Affero General Public License or the licensing of CiviCRM,     |
 | see the CiviCRM license FAQ at http://civicrm.org/licensing        |
 +--------------------------------------------------------------------+
 */

/**
 * File for the CiviCRM APIv3 membership status functions
 *
 * @package CiviCRM_APIv3
 * @subpackage API_Membership
 *
 * @copyright CiviCRM LLC (c) 2004-2011
 * @version $Id: MembershipStatus.php 30171 2010-10-14 09:11:27Z mover $
 *
 */

/**
 * Files required for this package
 */

require_once 'CRM/Member/BAO/MembershipStatus.php';


/**
 * Get a membership status.
 *
 * This api is used for finding an existing membership status.
 *
 * @param  array $params  an associative array of name/value property values of civicrm_civi_stats
 *
 * @return  Array of all found membership status property values.
 * {@getfields MembershipStatus_get}
 * @access public
 */
function civicrm_api3_stats_current($params) {
	$params['is_current_member'] = 1 ; //Why does this create an error?
	//print_r($params);
    $validStatuses = _civicrm_api3_basic_get('CRM_Member_BAO_MembershipStatus', $params); // Turn this into an API call?	
    //print_r($validStatuses);
    $memberTotal = 0 ;
    foreach ($validStatuses['values'] as $validStatus)
    {
    	$results = civicrm_api("Membership","get", array (version => 3,'q' =>'civicrm/ajax/rest', 'sequential' =>'1', 'status_id' =>$validStatus['id']));
		//print_r($results) ;
		$memberTotal += $results['count'] ;
    }
    return $memberTotal ;
}

function civicrm_api3_stats_groupmembers($params) 
{
        require_once 'CRM/Utils/Pager.php';

        $groupMembers = civicrm_api("GroupContact","get", array (version => 3,'sequential' =>'1', 'group_id' => $params['group_id'], 'option_limit' => 100000));
        
        return $groupMembers ;
}

function civicrm_api3_stats_totalcontributions($params)
{
	$results = civicrm_api("Contribution","get", array (version => 3,'q' =>'civicrm/ajax/rest', 'sequential' =>'1', 'contribution_status_id' => 1));
	// Need to make allowances for currency, i.e. contributions by currency
	$total = 0 ;
	foreach($results['values'] as $result)
	{
		$total += $result['total_amount'] ;
	}
	
	return array('total' => $total, 'count' => $results['count']) ;
}

function civicrm_api3_stats_yearlycontributions($params)
{
	$today = date("Y-m-d H:i:s") ;
	$yearAgo = date("Y-m-d H:i:s",strtotime(date("Y-m-d H:i:s", strtotime($today)) . "-1 year"));
		
	$results = civicrm_api("Contribution","get", array (version => 3,'q' =>'civicrm/ajax/rest', 'sequential' =>'1', 'contribution_status_id' => 1));
	// Need to make allowances for currency, i.e. contributions by currency
	$total = 0 ;
	$count = 0 ;
	foreach($results['values'] as $result)
	{
		if ($result['receive_date'] >= $yearAgo && $result['receive_date'] <= $today)
		{
			$total += $result['total_amount'] ;
			$count ++ ; 
		}
	}
	
	return array('total' => $total, 'count' => $count) ;
}

function civicrm_api3_stats_monthlycontributions($params)
{
	$today = date("Y-m-d H:i:s") ;
	$monthAgo = date("Y-m-d H:i:s",strtotime(date("Y-m-d H:i:s", strtotime($today)) . "-1 month"));
		
	$results = civicrm_api("Contribution","get", array (version => 3,'q' =>'civicrm/ajax/rest', 'sequential' =>'1', 'contribution_status_id' => 1));
	// Need to make allowances for currency, i.e. contributions by currency
	$total = 0 ;
	$count = 0 ;
	foreach($results['values'] as $result)
	{
		if ($result['receive_date'] >= $monthAgo && $result['receive_date'] <= $today)
		{
			$total += $result['total_amount'] ;
			$count ++ ; 
		}
	}
	
	return array('total' => $total, 'count' => $count) ;
}