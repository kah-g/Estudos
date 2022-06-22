#exercicios do livro 'automate the boring stuff with python'

def exer9_2 ():
    #exercicio 9 do capitulo 2
    print ('digite algo')
    spam = input ()
    if spam == '1':
        print ('Hello')
    elif spam == '2':
        print ('Howdy')
    else:
        print ('Greetings!')

def exer13_2 ():
    #exercicio 13 do capitulo 2
    print ('usando for')
    for i in range (1, 11):
        print (str(i))
    print ('usando while')
    num = 1
    while num < 11:
        print (num)
        num += 1

def exer2_4 ():
    #exercicio 2 do capituo 4
    spam = [2, 4, 6, 8 ,10]
    print ('lista spam antes de adicionar o elemento:')
    print (spam)
    spam.insert (3, 'hello')
    print ('lista spam apos adicionar elemento:')
    print (spam)

#chamando funcoes
exer2_4 ()
