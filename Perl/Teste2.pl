#!c:\perl\64\bin\perl.exe
#Testes - continuacao

#operadores relacionais e de igualdade
print "Entre com o primeiro numero.\n";
$number1  = <STDIN>;
chomp $number1;
print "Entre com o segundo numero.\n";
$number2 = <STDIN>;
chomp $number2;
if ($number1 != $number2) {
	print "o primeiro e o segundo numero sao diferentes.\n";
	if ($number1 > $number2) {
		print "$number1 e maior que $number2.\n";
	}
	if ($number1 < $number2) {
		print "$number2 e maior que $number1.\n";
	}
}
if($number1 == $number2) {
	print "os dois numeros sao iguais.\n";
}

#operadores sobre strings
print "Entre com o seu nome.\n";
$nome = <STDIN>;
chomp $nome;
$saud2 = "ola " . $nome;
print "Entre com outro nome.\n";
$nome2 = <STDIN>;
chomp $nome2;
if ($nome ne $nome2) {
	print "os dois nomes sao diferentes.\n";
	if($nome gt $nome2) {
		print "$nome e maior que $nome2.\n";
	}
	if($nome lt $nome2) {
		print "$nome2 e maior que $nome.\n";
	}
}
if ($nome eq $nome2) {
	print "os dois nomes sao iguais.\n";
}
$bye = "tchau " x 2;
print "$bye.\n";
