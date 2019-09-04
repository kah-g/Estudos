#!c:\perl\64\bin\perl.exe -w
#Exercicios capitulo 4

#problema 4.3
@array_numbers = (1..100);
unshift (@array_numbers, 0);
print "Printando o array de numeros: ";
print "@array_numbers\n";
@excl_number = splice (@array_numbers, 0, 2, );
print "\nPrintando o array apos modificacao: ";
for ($i = 0; $i <= $#array_numbers; $i++) {
	print "$array_numbers[$i] ";
}
print "\n\n";

#problema 4.5
@numeros = (0..9);
%numeros_extenso = ( 0 => 'zero', 
					 1 => 'um', 
					 2 => 'dois', 
					 3 => 'tres', 
					 4 => 'quatro',
					 5 => 'cinco', 
					 6 => 'seis', 
					 7 => 'sete', 
					 8 => 'oito', 
					 9 => 'nove');
print "@numeros\n";
while (($chaves, $valores) = each (%numeros_extenso)) {
	print "chave: $chaves - valor: $valores\n";
}

#problema 4.6
@array_par;
$#array_par = 6;
%hash_par;
for ($i = 0; $i < 6; $i++) {
	print "Entre com um elemento para o array: ";
	chomp ($array_par[$i]= <STDIN>);
	$hash_par{$i} = $array_par[$i];
}
@chaves2 = keys (%hash_par);
@valores2 = values (%hash_par);
print "\nChaves do array: ";
print "@chaves2\n";
print "Valores do array: ";
print "@valores2\n";

#problema 4.7
@baralho = (1..52);
@baralho2 = sort (@baralho);
print "\nBaralho: ";
print "@baralho2\n";