#!c:\perl\64\bin\perl.exe -w
#testes - continuacao

#foreach
@array = (1..12);
foreach $number (@array) {
	$number *= 10;
}
print "Array: ";
print "@array\n";