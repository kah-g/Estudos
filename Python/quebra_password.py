#pequeno programa no qual a brincadeira e solicitar uma pequena senha composta de letras e numero apenas
#e tentar adivinha essa senha verificando cada caractere

def le_senha ():
    while True:
        senha = input ()
        if (senha.isalnum() == True and len(senha) == 4):
            print ('Senha valida! Podemos prosseguir')
            return senha
            break
        else:
            print('Erro: Senha invalida. Tente novamente')
            continue

def quebra_char (senha):
    guess = ''
    for character in senha:
        if (character.isalpha() == True):
            if (character.islower() == True):
                guess = guess + guess_letra(character)
            else:
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
