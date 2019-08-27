#!c:\perl\64\bin\perl.exe
#Programa Teste

#printando na tela
print "ola putos\n";
print ("sejam bem welcomidos\n");

#Somando numeros
print "Entre com o primeiro numero\n";
$number1 = <STDIN>;
chomp $number1;

print "Entre com o segundo numero\n";
$number2 = <STDIN>;
chomp $number2;

$sum = $number1 + $number2;
print "A soma eh $sum.\n";
print 'A soma eh $sum.\n';
print "\n";

#Outras operacoes com  numeros
$sum2 = $sum / ($number1 * $number2);
print "$sum dividido pela multiplicacao de $number1 e $number2.\nO resultado e $sum2.\n";

#exponenciacao
$exp = $sum2 ** 2;
print "$sum2 elevado a 2 resulta em $exp.\n";

