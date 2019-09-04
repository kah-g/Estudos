#!c:\perl\64\bin\perl.exe
#testes - continuacao

#Testando o operador de intervalo e o print de array
print "Entre com um numero maior que zero\n";
chomp ($number = <STDIN>);
if ($number > 0) {
	@arrayn = (0..$number);
	print "@arrayn\n";
}
else {
	print "Erro: numero menor ou igual a zero.\n";
}
@arrayl = ('a'..'z');
print "@arrayl\n";

#Testando a funcao defined e a funcao scalar
@nomes;
$fl = "parabens";
$contador = 0;
$listan[$contador] = $fl;
$contador++;
until ($nomes eq "fim") {
	if(! defined ($listan[$contador])) {
		print "Entre com um nome ou fim para terminar.\n";
		chomp ($nomes = <STDIN>);
		unless ($nomes eq "fim") {
			$listan[$contador] = $nomes;
			$contador++;
		}
	}
}
print "@listan\n";
print "Tamanho do array: ", scalar (@listan), "\n";

#Testando a funcao $#
print "Entre com o tamanho do array, deve ser um numero maior ou igual a zero\n";
chomp ($tamanho = <STDIN>);
if ($tamanho >= 0) {
	$#array3 = $tamanho;
	for ($contador2 = 0; $contador2 < $tamanho; $contador2++) {
		print "Entre com um numero ou palavra: ";
		chomp ($info = <STDIN>);
		$array3[$contador2] = $info;
		print "\n";
	}
	print "@array3\n";
}
else {
print "Erro: informcao entrada e invalida.\n";
}

#Testando o operador criador de lista
@array2 = qw (oi oi oi tchau);
$" = ', '; #afeta todos os prints similares subsquentes que estiverem no mesmo formato
print "@array2\n";
