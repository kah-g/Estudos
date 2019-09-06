#!c:\perl\64\bin\perl.exe -w
#testes - continuacao

#estrutura foreach
@array = (1..12);
print "Array original: @array\n";
foreach $number (@array) {
	$number *= 10;
}
print "Array apos foreach: @array\n";
foreach (1..11) {
	print "*\t";
}
print "\n";
foreach ('A'..'K') {
	print "$_\t";
}
print "\n";
foreach ($number2 = 0; $number2 <= 20; $number2 += 2) {
	print "$number2\t";
}
print "\n";

#funcao grep
@array2 = grep ($_  < 50, @array);
print "grep: @array2\n";

#funcao map
@array3 = map ($_ / 10, @array);
print "map: @array3\n";

#comando next
print "next: ";
foreach (@array3) {
	if ($_%2 != 0) {
		next;
	}
	print "$_\t";
}
print "\n";

#comando last
print "last: ";
foreach (@array3) {
	if ($_ == 6) {
		last;
	}
	print "$_\t";
}
print "\n";

#comando redo
print "redo: ";
$number3 = -10;
while ($number3 < -3) {
	if ($number3 < 1) {
		print "$number3\t";
		++$number3;
		redo;
	}
}
print "\n";