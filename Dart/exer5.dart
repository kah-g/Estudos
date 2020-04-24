main () {
  //especificando tipos
  List numeros1 = [5, 6, -789];
  numeros1.add("arroz");
  print ("Numeros 1: $numeros1");

  List<int> numeros 2 = [-9, 7, 263];
  //numeros2.add("feijao"); tentar fazer isso causa um erro
  numeros2.add(-19);
  print ("Numeros2: $numeros2");

  var compras = <String, int> {
    "Banana" : 3,
    "Mamao" : 1,
    "Morango" : 12,
  };
  print ("$compras");
}
