<?php

function drupalmonitor_node_contenttypes() {
  $query = "SELECT count(*) as Anzahl, n.type FROM {node} n GROUP BY n.type";
  $result = db_query($query, $db);
  $data = array();
  while ($result && $array = db_fetch_array($result)) {
    if(!empty($array['type'])) {
      $data[$array['type']] = $array['Anzahl'];
    }
  }
  return $data;
}

?>