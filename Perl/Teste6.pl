#!c:\perl\64\bin\perl.exe -w
#testes - continuacao

#Pesquisa linear em array
until ($tamanho > 0) {
	print "Entre com o ultimo elemento do array: ";
	chomp ($tamanho = <STDIN>);
}
print "\n";
@array = (-12..$tamanho);
print "Array criado: ";
print "@array\n";
print "Entre com o numero a ser pesquisado no array: ";
chomp ($number = <STDIN>);
print "\n";
$flag = 0;
$it = 0;
for ($i = 0; $i < @array && !$flag; $i++) {
	if ($array[$i] == $number) {
		$position = $i;
		$flag = 1;
	}
	$it++;
}
if ($flag) {
	print "A pesquisa linear encontrou $number na posicao $position. Numero de iteracoes: $it\n";
}
else {
	print "A pesquisa linear nao encontrou $number no array. Numero de iteracoes: $it\n";
}

#Pesquisa binaria em array
$flag2 = 0;
$inicio_indice = 0;
$fim_indice = $#array;
$it2 = 0;
while ($inicio_indice <= $fim_indice && !$flag2) {
	$meio_indice = ($inicio_indice + $fim_indice) / 2;
	if ($number == $array[$meio_indice]) {
		$position2 = $meio_indice;
		$flag2 = 1;
	}
	elsif ($number < $array[$meio_indice]) {
		$fim_indice = $meio_indice - 1;
	}
	else {
		$inicio_indice = $meio_indice + 1;
	}
	$it2++;
}
if ($flag2) {
	print "A pesquisa binaria encontrou $number na posicao $position2. Numero de iteracoes: $it2\n";
}
else {
	print "A pesquisa binaria nao encontrou $number no array. Numero de iteracoes: $it2\n";
}

#Tabelas hash e suas funcoes (keys, values, reverse, each, delete, exists, defined)
%hash = (one => 1, two => 2, three => 3); #criando e preenchendo uma tabela hash
print "$hash{one}.\n"; #procurando e printando um elemento da hash
$hash{four} = 4; #adicionando um novo elemento a hash
@chaves = keys (%hash);
print "Chaves da tabela hash: ";
print "@chaves.\n";
@valores = values (%hash);
print "Valores da tabela hash: ";
print "@valores.\n";
%hash2 = reverse (%hash);
print "\nTabela hash original:\n";
while (($chaves2, $valores2) = each (%hash)) {
	print "chave: $chaves2 - valor: $valores2\n";
}
print "\nTabela hash revertida:\n";
while (($chaves3, $valores3) = each (%hash2)) {
	print "chave: $chaves3 - valor: $valores3\n";
}
delete ($hash{'two'});
print "\nTabela hash apos exclusao de item:\n";
while (($chaves4, $valores4) = each (%hash)) {
	print "chave: $chaves4 - valor: $valores4\n";
}
if (exists ($hash{'two'})) {
	print "\ntwo existe na tabela hash\n";
}
else {
	print "\ntwo nao existe na tabela hash";
}
$hash{five};
if (defined ($hash {five})) {
	print "\nfive esta deifinido na tabela hash como $hash{five}\n";
}
else {
	print "\nfive nao esta definido na tabela hash\n";
}