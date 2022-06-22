#Projeto comma code proposto no livro 'Automate the boring stuff with python'

def insert_comma (lista):
    lista_str = ''
    for i in range ((len(lista))-1):
        lista_str = lista_str + str(lista[i] + ', ')
    lista_str = lista_str + 'and ' + str(lista[i])
    return lista_str

def create_lista ():
    nova_lista = []
    while True:
        print ('Entre algum item para a lista ou espaco para sair')
        item = input ()
        if str(item) == ' ':
            break
        else:
            nova_lista = nova_lista + [item]
    return nova_lista

#lista de exemplo do livro
spam = ['apple', 'bananas', 'tofu', 'cats']
spam_str = insert_comma (spam)
print ('string formada a partir de spam')
print (spam_str)
#solicitar uma nova lista para testar
print ('vamos criar uma nova lista')
lista = create_lista ()
lista_str = insert_comma (lista)
print ('nova string formada a partir de spam')
print (lista_str)
