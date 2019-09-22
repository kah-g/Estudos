#!c:\perl\64\bin\perl.exe -w
#Exercicios capitulo 6

#problema 6.4
LER: for ($i = 0; ;$i++) {
	print "Digite um caractere ou -1 para sair: ";
	my $digito;
	chomp ($digito = <STDIN>);
	$digito != -1 or last LER;
	@array[$i] = $digito;
}
&impressora (@array);

sub impressora {
	print "Array recebido: @_\n";
}

#problema 6.5
use constant PI => 3,14159; #cria constante
print "Entre com o raio: ";
chomp ($area = <STDIN>);
if ($area > 0) {
	@array2 = &calc_circ ($area);
	$area_rec = &calc_circ ($area);
	print "Contexto de array - resultado: @array2\n";
	print "Contexto de escalar - resultado: $area_rec\n";
}
else {
	print "Entrou com uma variavel errada, sem resultados pra vc\n";
}

sub calc_circ {
	$number = shift @_;
	if (wantarray ()) {
		@circ[0] = PI * ($number ** 2); #area
		@circ[1] = $number * 2; #diametro
		@circ[2] = 2 * (PI * $number); #circunferencia
		return @circ;
	}
	else {
		$area = PI * ($number ** 2);
		return $area;
	}
}

#testar a partir daqui
#problema 6.6
print "Vamos comecar a jogar dados.\n";
$vezes = 3;
&joga_dado ($vezes);

sub joga_dado {
	for ($i = 0; $i < $vezes; $i++) {
		$dado = (int (rand(5))) ++;
		print "Jogada: ", $i ++, ", Resultado: $dado.\n";
	}
}