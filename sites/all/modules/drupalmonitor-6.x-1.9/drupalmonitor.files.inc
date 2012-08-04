<?php

function drupalmonitor_get_files_filescount() {
  $query = "SELECT count(*) as Anzahl FROM {files} f";
  $result = db_query($query);
  return db_result($result);
}

function drupalmonitor_get_files_filesfoldersize() {
  $query = "SELECT sum(f.filesize) as Filesize FROM {files} f";
  $result = db_query($query);
  return db_result($result);
}