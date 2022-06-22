#Projeto do collatz sequence proposto no livro 'Automate the boring stuff with python'

def receptor ():
    #verifica se o que foi entrado e um numero
    print ('Bem vindo a Collatz Sequence. Por favor insira um numero')
    try:
        num = int (input())
    except ValueError:
        print ('Entrada invalida. Tente de novo')
        return 'Invalido'
    return num

def collatz (number):
    if number % 2 == 0:
        number = number // 2
        print (number)
        return number
    else:
        number = 3 * number + 1
        print (number)
        return number

while True:
    #so e possivel sair do loop apos fazer uma entrada valido
    entrada = receptor()
    if entrada != 'Invalido':
        break
contador = 0
while entrada != 1:
    entrada = collatz (entrada)
    contador += 1
print ('Numero de interacoes ate chegar a UM: ' + str(contador))
