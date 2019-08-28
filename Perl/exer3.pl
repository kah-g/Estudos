#!c:\perl\64\bin\perl.exe
#exercicios capitulo 3

#problema 1
$counter = 0;
$media = 0;
until ($litros == -1) {
	print "Digite os litros usados ou -1 para fim: ";
	chomp ($litros = <STDIN>);
	if ($litros != -1) {
		print "Digite os quilometros dirigidos: ";
		chomp ($klm = <STDIN>);
		$tanque = $klm/$litros;
		print "Os quilometros/litro para este tanque foram $tanque\n\n";
		$counter++;
		$media += $tanque;
	}
}
if($counter > 0) {
	$media /= $counter;
	print "A media global de quilometros/litro foi $media\n";
}
else {
	print "Erro: sem informacoes suficientes.\n";
}

#problema 2
$maior = 0;
$menor = 0;
$contador = 0;
$sum = 0;
$number = 0;
print "$number\n";
until ($number == 'f') {
	print "Digite um numero ou f para fim: ";
	chomp ($number = <STDIN>);
	unless($number == 'f') {
		$sum += $number;
		$contador++;
		if($number > $maior) {
			$maior = $number;
		}
		if($number < $menor) {
		$menor = $number;
		}
	}
}
if($countador > 0) {
	$media2 = $sum/$contador;
	print "Resultado:\n-Maior numero: $maior.\n-Menor numero: $menor.\n-Media de todos os numeros: $media2.\n";
}
else {
	print "Erro: sem informacoes suficientes.\n";
}

