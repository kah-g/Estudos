main() {
	//brincando com string
	var a = 'world';
	print ('hello $a');
	
	print('hello again world');
	
	var b = "bye now";
	print ('$b');

	var c = b + ' ' + a;
	print ("$c");
	
	//brincando com operadores aritmeticos e outros
	var d = 4;
	print ('valor original: $d');
	++d;
	print ('valor agora: $d');
	var e = d++;
	print ('valor de e: $e');
	print ('valor de d: $d');
	
	var f = d == e;
	print ('$f');
	
	//brincando com type checking
	var g = d is String;
	print ('$g');
	
	var h = (a is int) && (d is int);
	print ('$h');
}