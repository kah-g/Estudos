#!c:\perl\64\bin\perl.exe -w
#testes - continuacao

#sub-rotinas
hello1(); #chama a sub-rotina
print "Entre com 3 valores:\n";
chomp ($valor1 = <STDIN>, $valor2 = <STDIN>, $valor3 = <STDIN>);
&imprime_argumentos($valor1, $valor2, $valor3);
@array = (1..3);
@array2 = eleva_dobro(@array);
print "@array2\n";

sub hello1 { #definição da sub-rotina
	print "Oi.\n";
}

sub imprime_argumentos {
	print "Argumentos recebidos: @_\n";
}

sub eleva_dobro {
	foreach (@_) {
		$_ **= $_ * 2;
	}
	return @_;
}

#funcao wantarray
@array3 = quem_sou();
print "@array3\n";
$item = quem_sou();
print "$item\n";

sub quem_sou {
	if (wantarray ()) {
		print "Eh um array.\n";
		return (-7..-2);
	}
	else {
		print "Eh um escalar.\n";
		return -1;
	}
}

#funcao rand, int e srand
print "rand puro: ";
foreach (1..3) {
	print rand(), " ";
}
print "\nrand com argumento: ";
foreach (1..3) {
	print rand(100), " ";
}
print "\nrand com argumento e int: ";
foreach (1..3) {
	print int (rand(100)), " ";
}
print "\nrand com argumento, int e semente definida: ";
srand(1);
foreach (1..3) {
	print int (rand(100)), " ";
}
print "\nrand com argumento, int e semente definida, a mesma: ";
srand(1);
foreach (1..3) {
	print int (rand(100)), " ";
}
print "\nrand com argumento, int e com semente padrão: ";
srand();
foreach (1..3) {
	print int (rand(100)), " ";
}