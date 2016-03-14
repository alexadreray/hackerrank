<?php

/*
Developer: Alexandre Silva
Problem: https://www.hackerrank.com/challenges/funny-string/
*/

$_fp = fopen("php://stdin", "r");
$number = fgets($_fp);
//echo $number;
$count=0;
$j=0;

while($count < $number){
    $flag=0;
    $mystring = fgets($_fp);
    $arr = str_split($mystring);
    $arr = array_filter(array_map('trim', $arr));
    
    //print_r($arr);
    //print_r(array_reverse($arr));
    //echo array_reverse($arr)[0];
    
    for($i=0, $j=sizeof($arr)-1; $i<sizeof($arr)-1, $j>0; $i++, $j--){
        //echo ' original '.abs(ord($arr[$i+1])-ord($arr[$i]));
        //echo ' reversed '.abs(ord($arr[$j-1])-ord($arr[$j]));
        if (abs(ord($arr[$i+1])-ord($arr[$i])) != abs(ord($arr[$j-1])-ord($arr[$j]))){ $flag+=1; }
    }
    
    if ($flag == 0) echo "Funny\n"; else echo "Not Funny\n";

    $count+=1;
}


fclose($_fp);

?>