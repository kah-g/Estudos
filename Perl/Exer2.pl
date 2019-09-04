#!c:\perl\64\bin\perl.exe
#Exercicios capitulo 2

#problema 2.3
print "Entre com um inteiro: ";
$d = <STDIN>;
chomp $d;
if ($d != 7){
	print "\nA variavel $d nao eh igual a 7\n";
}
print "Este eh um programa em Perl\n";
print "Este eh um programa\nem Perl\n";
print "Este eh um programa\nem Perl\n";
print "Este\neh\num\nprograma\nem\nPerl\n";
print "Este\teh\tum\tprograma\tem \tPerl\n";

#problema 2.4
print "Este programa vai calcular o produto de tres inteiros\n";
print "Entre com tres inteiros\n";
$x = <STDIN>;
$y = <STDIN>;
$z = <STDIN>;
chomp ($x);
chomp ($y);
chomp ($z);
$result = $x*$y*$z;
print "O produto eh $result\n";