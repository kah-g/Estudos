String sayHello () {
	return "Hello World!";
}

sayBye () => "Bye World!";

sayHello2 (String name, String addMessage) => "Hello $name. $addMessage";

sayBye2 (String name, [String addMessage]) => "Bye $name. $addMessage";

sayBye3 (String name, [String addMessage = 'Nada a dizer']) => "Bye $name. $addMessage";
 
main () {
	//testando funcoes
	var a = sayHello;
	print (a());
	print (sayBye());
	
	//testando parametros para funcoes
	print (sayHello2('Vitor', 'cara chato'));
	print (sayBye2('Lucas'));
	print (sayBye2('Bruno', 'Peidao'));
	print (sayBye3('Gustavo', 'alcoolatra'));
	print (sayBye3('Xonas'));
	
	//testando funcao anonima
	var b = [8, 9, 't', 6];
	b.forEach ((numero) => print ('numero da vez $numero'));
}