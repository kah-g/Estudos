#!c:\perl\64\bin\perl.exe
#testando estruturas de repetição com pre e pos incrementacaoo e decrementacao

print "do-while com pre incremento\n";
$counter1 = 1;
do { 
	print "Counter: $counter1\n";
} while (++$counter1 <= 10);

print "do-while com pos incremento\n";
$counter2 = 1;
do {
	print "Counter: $counter2\n";
} while ($counter2++ <=10);

print "do-until com pre decremento\n";
$counter3 = 10;
do {
	print "Counter: $counter3\n";
} until (--$counter3 == 0);

print "do-until com pos decremento\n";
$counter4 = 10;
do {
	print "Counter: $counter4\n";
} until ($counter4-- == 0);