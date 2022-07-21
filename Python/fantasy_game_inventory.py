#Projeto fantasy game inventoty proposto no livro 'Automate the boring stuff with python'
import random

def printa_inventario (invt):
    #printa a o inventario de uma forma bonita e no final da o total de itens que ele contém
    print ('Conteudo do Inventario:')
    total_items = 0
    for i, j in invt.items ():
        print ('-> ' + str(j) + ' ' + str(i))
        total_items += j
    print ('Numero total de itens no inventario: ' + str(total_items))
    print ('')

def add_inventario (invt, lista_itens):
    #recebe o inventario e uma lista de itens para adicionar ao inventario
    for i in range (len(lista_itens)):
        if (lista_itens[i] in invt.keys ()) == True:
            #verifico se o item da lista ja esta no inventario
            #se tiver, e somado mais 1 a key do item
            invt[lista_itens[i]] = invt[lista_itens[i]] + 1
        else:
            #se nao tiver o item, ele e adicionado no inventario com valor 1
            invt[lista_itens[i]] = 1

def gera_baus (itens_todos):
    #vou preencher 1 bau de acordo com 1 sorteio
    #se o numero sorteado for 1 o bau estara vazio, se for 2 o bau tera 1 item, se for 3 o bau tera 5 items
    #o item e pego de uma lista com todos os itens possiveis, entao sempre sera algo diferente no bau
    escolhido = random.randint(1, 4)
    bau = []
    if escolhido == 2:
        #bau com 1 item
        posicao = random.randint(0, len(itens_todos))
        bau.append(itens_todos[posicao])
        print ('Legal. O bau que voce achou tem 1 ' + str(itens_todos[posicao]))
        return bau
    elif escolhido == 3:
        #bau com 5 itens
        print ('Parabens! O bau que voce achou esta cheio. Dentro deles estão os seguitens items:')
        for i in range (5):
            posicao = random.randint(0, len(itens_todos))
            #print(len(itens_todos))
            #print (posicao)
            bau.append(itens_todos[posicao])
            print (itens_todos[posicao])
        return bau
    else:
        #bau vazio
        print ('Poxa, o bau esta vazio, que azar')
        return bau


inventario_jogador = {'corda': 1, 'pao': 2, 'tocha': 3, 'moedas de ouro': 50, 'cantil de agua': 1}
itens_todos = ['pao', 'corda', 'adaga', 'vassoura', 'espada', 'tocha', 'moedas de ouro', 'cantil de agua', 'cajado', 'pocao', 'anel', 'escudo', 'pedra', 'machado', 'madeira']
print ('Seu inventario basico')
printa_inventario (inventario_jogador)
print ('Nossa, voce achou um bau, o que sera que tem nele?')
bau = gera_baus(itens_todos)
add_inventario (inventario_jogador, bau)
print ('Agora seu inventario esta assim')
printa_inventario (inventario_jogador)
