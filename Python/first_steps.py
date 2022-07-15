#primeiras licoes basicas
#Modulos com exercicios e testes basicos
import random

def exer1 ():
    print ('hello world!')
    name = input ('Digite seu nome:')
    print ('hello', name)

def exer2 ():
    #concatenar strings e numeros resulta em erro
    'bob' + 5

def exer3 ():
    #multiplicar uma string por um int funciona
    print ('Bob' * 3)

def exer4 ():
    #input sempre e uma string, somar ela depois resulta em Erro
    #para resolver o problema ela deve ser convertida para string
    a = input ()
    a = int (a)
    a += 3
    print (a)

def exer5 ():
    #quero verificar se idade tem seu valor alterado na funcao print ou não
    idade = input ('entre com a idade ')
    print ('voce tera ' + str(int(idade) + 1) + ' ano que vem')
    print (idade)

def exer6 ():
    #testar while com false
    #por ser false nunca executa o while
    while False:
        print ('ainda falso, me de um numero')
        num = input ()
        if num == 0:
            break
    print ('ih num deu')

def exer7 ():
    #usando break e continue em um loop
    while True:
        print ('insira nome')
        name2 = input ()
        if name2 != 'Paul':
            continue
        print ('Oi Paw, qual a senha (dica: conte ate 3)')
        senha = input ()
        if senha == '123':
            break
    print ('bem vindo')

def exer8 ():
    #testando for
    #o range faz a soma do valor
    print ('Contando ate 5')
    for i in range (5):
        print ('contando ' + str (i))

def exer9 ():
    #fazendo escadinha
    print ('la vai ela:')
    for i in range (11):
        print ((' ' * i) + str(i))

def exer10 ():
    #testando listas
    #criando a lista
    mercado = ['arroz', 'feijao']
    print (mercado)
    #verificando o tamanho da lista
    print ('O tamanho da nossa lista de compras e: ' + str(len(mercado)))
    #trocando o valor da lista
    mercado[1] = 'alface'
    print (mercado)
    #juntar listas
    mercado2 = ['batata', 'beterraba', 'tomate']
    mercado = mercado + mercado2
    print (mercado)
    #deletando itens na lista
    del mercado[2]
    print (mercado)
    print ('O tamanho da nossa lista de compras agora e: ' + str(len(mercado)))

def exer11 ():
    #criar uma lista sem tamanho predefinido
    nomes_l = []
    while True:
        print ('Digite um nome para a lista, ou pressione 0 para sair')
        nome = input()
        if nome == '0':
            break
        else:
            #pra preencher a lista a mesma esta sendo concatenada com o nome recebido
            nomes_l = nomes_l + [nome]
    print (nomes_l)

def exer12 ():
    #usando metodos
    numeros_l = []
    for i in range (10):
        numero = random.randint (1, 51)
        numeros_l = numeros_l + [numero]
    print ('A lista de 10 elementos foi preenchida com numeros de 1 a 50.')
    print ('Voce tem 3 chances para tentar adivinha um numero da lista')
    for l in range (3):
        print ('Digite um numero')
        guess = input ()
        if (int(guess) in numeros_l) == False:
            print ('EEERRRRRROOOOUUUUUUUU')
        else:
            print ('AAACCCEEEEERRRTTTOOOOOOUUUUUU')
            print ('O numero adivinhado estava na posicao ' + str((numeros_l.index(int(guess)))+ 1) + ' da lista.')
            break
    print ('Lista completa:')
    print (numeros_l)

def exer13 ():
    #tipo dicionario
    #criando o dicionario
    dados_aluno = {'nome': 'juma', 'matricula': '5550', 'idade' : '17'}
    print ('o nome da aluna e ' + dados_aluno['nome'] + ' e tem ' + dados_aluno['idade'] + ' anos')
    print ('entre o sobrenome da aluna ' + dados_aluno['nome'])
    #adicionando elementos ao dicionario
    novo_dado = str(input())
    dados_aluno['sobrenome'] = novo_dado
    print (dados_aluno)

def exer14 ():
    #testando a contagem de chars com dicionario
    message = 'It was a bright cold day in April, and the clocks were striking thirteen.'
    contador = {}
    for character in message:
        contador.setdefault(character, 0)
        contador[character] = contador[character] + 1
    print (contador)

#chamando funcoes
#changes
exer14 ()
