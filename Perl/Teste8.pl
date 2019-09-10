#!c:\perl\64\bin\perl.exe -w
#testes - continuacao

#rotulos de blocos
OT: foreach $linha (1..10) {
	IN: foreach $coluna (1..10) {
		if ($linha < $coluna) {
			print "\n";
			next OT; #Esse comando com o rotulo OT faz com que ele saia do foreach interno e va para o externo
		}
		print "*";
	}
}

#bloco basico
print "\nEntre com um numero entre 1 e 3.\n";
chomp ($number = <STDIN>);
BLC: {
	if ($number == 1) {
		print "Quase\n";
		last BLC;
	}
	if ($number == 2) {
		print "Acertou\n";
		last BLC;
	}
	if ($number == 3) {
		print "Quase quase\n";
		last BLC;
	}
	{
		print "Errrroooouuuu. Tente de Novo: ";
		chomp ($number = <STDIN>);
		redo BLC;
	}
}

#função warn
print "\nEntre com um numero: ";
chomp ($number2 = <STDIN>);
B1: {
	$number2 <= 0 and warn "Nao pode ser menor ou igual a zero\n" and last B1;
	print "5 elevado a $number2 = ", 5 ** $number, "\n";
}

#função die
print "\nEntre com um numerador: ";
chomp ($numerador = <STDIN>);
print "\nEntre com um denominador: ";
chomp ($denominador = <STDIN>);
$denominador != 0 or die "Nao pode dividir por zero";
print "\nO resultado eh: ", $numerador/$denominador, "\n";

