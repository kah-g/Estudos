#pequeno programa no qual a brincadeira e solicitar uma pequena senha composta de letras e numero apenas
#e tentar adivinha essa senha verificando cada caractere

def le_senha ():
    #a funcao so aceita a senha se ela for do tamanho especificado e composta apenas por letras e numeros
    while True:
        senha = input ()
        if (senha.isalnum() == True and len(senha) == 4):
            print ('Senha valida! Podemos prosseguir')
            return senha
        else:
            print('Erro: Senha invalida. Tente novamente')
            continue

def quebra_char (senha):
    #para cada char da senha, ele verifica se e letra maiscula ou minuscula, ou numero
    #identificado o tipo ele sera passado para uma funcao especifica que descobre o que aquele char e
    guess = ''
    for character in senha:
        if (character.isalpha() == True):
            if (character.islower() == True):
                guess = guess + guess_letra(character)
            else:
                #como o char e maiscula, o truque aqui foi conveter pra minuscula antes de passar pra funcao
                #e converter para maiscula de volta quando recebe o guess
                converte_letra = guess_letra (character.lower())
                guess = guess + converte_letra.upper ()
        else:
            guess = guess + guess_numero(character)
    return guess

            
def guess_letra (digito):
    alfabeto_lower = 'abcdefghijklmnopqrstuvwxyz'
    for character in alfabeto_lower:
        if (character == digito):
            return character

def guess_numero (digito):
    numeros = '0123456789'
    for character in numeros:
        if (character == digito):
            return character

print ('Bem vindo ao jogo de quebrar senhas')
print ('Entre com uma senha de 4 caracteres que contenha apenas letras e numeros')
senha = le_senha ()
senha_quebrada = quebra_char (senha)
if senha == senha_quebrada:
    print ("Senha digitada pelo usuario '" + senha + "' e senha adivinhada '" + senha_quebrada + "'. As duas sao iguais.")
