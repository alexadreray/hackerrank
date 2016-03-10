<?php
/*
Desenvolvedor: Alexandre Silva
Input string for test: We promptly judged antique ivory buckles for the next prize    
This sentence is a pangram
*/

$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
$myString = fgets($_fp);
$letras = range('a','z');
$letras_maiusculas = range('A','Z');
$espaco_vazio = array(" ");
$flag = 0;
//print_r($letras);

for ($i=0; $i<strlen($myString); $i++){
    //echo $myString[$i];
	if (in_array($myString[$i],$letras) or in_array($myString[$i],$letras_maiusculas) or in_array($myString[$i],$espaco_vazio)){ ; }
	else{ $flag+=1; }
}

if ($flag==0) echo "pangram"; else echo "not pangram";

fclose($myfile);
?>