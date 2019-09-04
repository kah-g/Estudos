#!c:\perl\64\bin\perl.exe -w
#testes - continuacao

#Testando funcoes de array
#funcoes: pop, push, shift, unshift e splice
@array = (5, 523, -9);
print "Array 1: ";
print "@array\n";
print "Entre com um elemento para ser adicionado no fim do array.\n";
chomp ($info1 = <STDIN>);
push (@array, $info1);
print "Array 1: ";
print "@array\n";
$info2 = pop (@array);
print "Elemento retirado do fim do array: $info2.\n";
print "Array 1: ";
print "@array\n";
$info3 = shift (@array);
print "Elemento retirado do inicio do array: $info3.\n";
print "Array 1: ";
print "@array\n";
print "Entre com um elemento para ser adicionado ao inicio do array.\n";
chomp ($info4 = <STDIN>);
unshift (@array, $info4);
print "Array 1: ";
print "@array\n";
@array2 = (0..25);
@array3 = ('a'..'g');
print "Array 2: ";
print "@array2\n";
print "Array 3: ";
print "@array3\n";
@removidos = splice (@array2, 9, scalar (@array3), @array3);
#explicando o splice, removidos eh onde vao ser armazenados os elementos substituidos pelo splice
#o primeiro argumento e o array a ser modificado, o segundoa argumento e o indice do primeiro elemento a ser modificado
#o terceiro argumento e o tamanho da parte do array a ser modificada
#o quarto argumento e o array e uma lista para substituir a parte especificada do array
print "Array 2 apos modificacao: ";
print "@array2\n";
print "Elementos removidos do array 2: ";
print "@removidos\n";
splice (@array); #usando splice para remover todos os itens de um array
unless (@array) { #usando o array como condicao, que retorna false se estiver vazia
	print "Array 1 nao contem mais nenhum elemento.\n";
}

#testando funcoes de lista
print "Array 3: ";
print "@array3\n";
@array4 = reverse (@array3);
print "Array 3 invertido: ";
print "@array4\n";
@array5 = sort @array4;
print "Ordenando o array invertido: ";
print "@array5\n";
until ($tamanho > 0) {
	print "Escolha o tamanho do novo array: ";
	chomp ($tamanho = <STDIN>);
	print "\n";
}
for ($contador = 0; $contador < $tamanho; $contador++) {
	print "Entre com um elemento para preencher o array ";
	chomp ($info5 = <STDIN>);
	print "\n";
	push (@array6, $info5);
}
print "Array 6: ";
print "@array6\n";
print "Ordenando o array lexicograficamente: ";
@array7 = sort @array6;
print "@array7\n";
print "Ordenando o array com criterio: ";
@array8 = sort {$a <=> $b} @array6;
print "@array8\n";