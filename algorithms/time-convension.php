<?php
/*
Developer: Alexandre Silva
Problem: https://www.hackerrank.com/challenges/time-conversion
*/

#$handle = fopen ("php://stdin","r");
#fscanf($handle,"%s",$time);

$time = "12:45:54PM"; //Example
$arr = explode(":",$time);

if (substr($time,-2) == "PM" and $arr[0] != 0 and $arr[0] != 12){ $arr[0] = $arr[0] + 12; }
elseif (substr($time,-2) == "PM" and $arr[0] == 0){ $arr[0] = "00"; }
elseif (substr($time,-2) == "PM" and $arr[0] == 12){ ; }
elseif (substr($time,-2) == "AM" and $arr[0] == 12) { $arr[0] = "00"; }

echo $arr[0] . ":" . $arr[1] . ":" . substr($arr[2],0,2);

?>
