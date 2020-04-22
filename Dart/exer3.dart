main () {
	//testando dart maps
	var a =  {
		"Fruta" : "Banana",
		"Legume" : "Pimentão",
		"Numero" : 5,
		"Elemento" : "Ar",
		};
	print ('$a');
		
	//testando string
	var b = "arroz";
	var c = "feijao";
	var d = b + " e " +  c;
	print('$d');
	
	var e = "oi " * 5;
	print('$e');
	
	String f = "onomatopeia";
	print('${f[5]}');
	
	//verficando o tipo 
	print(d is dynamic);
	print(d.runtimeType);
	
	print(a is dynamic);
	print(a.runtimeType);
	
	print(f is dynamic);
	print(f.runtimeType);
}
