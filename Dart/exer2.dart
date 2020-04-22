main () {
	//testando o null-safe
	var a;
	var b = 5;
	var c = a ?? b;
	print ('$c');
	
	//combinacao de '=' e o null-aware
	a ??= 9;
	b ??= 3;
	print('a: $a e b: $b');
	
	//null-aware acces operator
	var d;
	var e = 'nao esta nulo';
	d?. print('$e');
	
	//final e const tornam aquela variavel constante
	final f = 10;
	const g = 20;
	//++f; o programa considera isso um erro
	print('$f e $g');
	
	const h = const [1, 3, 5];
	print('$h');
	
	//listas
	var i = [7, 4, 11, -8];
	var j = h + i;
	print('$j');
	i += h;
	print('$i');
	var l = ['u', i, 'o', h, 'l', j];
	print('$l');
  
	var k = [9, 8, 'p', 9, 0];
	print('$k');
	k.length = 3;
	print('$k');
	var m = [5, 2, k, 31, 87];
	m.length = 3;
	print('$m');
	var n = ['p', 4, 'jk', 'l', k];
	print('$n');
	n.length = 2;
	print('$n');
}
