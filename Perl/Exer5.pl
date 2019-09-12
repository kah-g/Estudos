#!c:\perl\64\bin\perl.exe -w
#Exercicios capitulo 5

#problema 5.3
@array = (1..99);
@arrayimpar = grep ($_ % 2 != 0, @array);
$soma = 0;
foreach $_ (@arrayimpar) {
	$soma += $_;
}
print "Resultado: $soma\n";

#problema 5.4
PROMPT: foreach (1..10) {
	print "Entre com um valor ou f para sair: ";
	chomp ($asteriscos = <STDIN>);
	if ($asteriscos eq 'f') {
		last PROMPT;
	}
	IMPRIMINDO: foreach (1..10) {
		if ($_ > $asteriscos) {
		print "\n";
		next PROMPT;
		}
		else {
			print "* ";
		}
	}
	print "\n";
}

#problema 5.6
LERNUM: {
	print "Entre com um numero maior que 0: ";
	chomp ($number = <STDIN>);
	unless ($number > 0) {
		redo LERNUM;
	}
}
$total = 1;
foreach (2..$number) {
	$total *= $_;
}
print "$number! = $total\n";

#problema 5.7
$total2 = 0;
for ($lado1 = 1; $lado1 < 500; $lado1++) {
	for ($lado2 = 1; $lado2 < 500; $lado2++) {
		for ($hipotenusa = 1; $hipotenusa < 500; $hipotenusa++) {
			if ($lado1**2 + $lado2**2 == $hipotenusa**2) {
				print "$lado1, $lado2 e $hipotenusa sao triplas de pitagoras.\n";
				$total2++;
			}
		}
	}
}
print "Total de triplas de pitagoras encontradas: $total2\n";

#problema 5.8
print "\n";
$letra1 = '*';
$letra2 = ' ';
foreach (1..10) {
	$parte1 = $letra1 x $_ . $letra2 x (10 - $_);
	$parte2 = $letra1 x (11 - $_) . $letra2 x ($_ - 1);
	$parte3 = $letra2 x ($_ - 1) . $letra1 x (11 - $_);
	$parte4 = $letra2 x (10 - $_) . $letra1 x $_;
	print "$parte1 $parte2 $parte3 $parte4\n";
}

#problema 5.9
print "Vamos preencher um array de 10 elementos.\n";
@array2[10];
foreach (0..9) {
	print "Entre com o elemento ", $_ +1, " de 10: ";
	chomp ($array2[$_] = <STDIN>);
	if ($array2[$_]** 2 >= 100 && $array2[$_]** 2 <= 200) {
		print "O elemento $array2[$_] se encaixa nos requisitos.\n";
	}
}
@array3 = map ($_ ** 2, @array2);
@array4 = grep ($_>= 100 && $_<= 200, @array3);
print "@array4\n";