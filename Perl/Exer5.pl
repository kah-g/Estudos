#!c:\perl\64\bin\perl.exe -w
#Exercicios capitulo 5

#problema 5.3
@array = (1..99);
@arrayimpar = grep ($_ % 2 != 0, @array);
$soma = 0;
foreach $_ (@arrayimpar) {
	$soma += $_;
}
print "$soma\n";