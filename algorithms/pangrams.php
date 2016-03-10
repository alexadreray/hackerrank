<?php
/*
Developer: Alexandre Silva
Input string for test: We promptly judged antique ivory buckles for the next prize    
Contest: https://www.hackerrank.com/challenges/pangrams
*/

//$_fp = fopen("php://stdin", "r");
//$myString = fgets($_fp);

$myString = "We promptly judged antique ivory buckles for the next prize";
$myString = str_replace(' ','',strtolower($myString)); //all lower and without spaces
$letras = range('a','z');
$flag = 0;
$arr = str_split($myString);

for ($i=0; $i<sizeof($letras); $i++){
	if (in_array($letras[$i],$arr)){ ; }
	else { $flag+=1; }
}

if ($flag==0) echo "pangram"; else echo "not pangram";

//fclose($myfile);
?>