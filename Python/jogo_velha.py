#Projeto tic tac toe proposto no livro 'Automate the boring stuff with python'

import pprint

def gera_grid ():
    #gera a grid com espacos em branco do jogo
    #e feito usando a estrutura dicionario, os nomes dos espacos sao nomes e na definicao fica o caracter
    grid = {'top_l': ' ', 'top_m': ' ', 'top_r': ' ', 'mid_l': ' ', 'mid_m': ' ', 'mid_r': ' ', 'low_l': ' ', 'low_m': ' ', 'low_r': ' '}
    return grid

def printa_grid (grid):
    print ('     |     |     ')
    print ('  ' + grid['top_l'] + '  |  ' + grid['top_m'] + '  |  ' + grid['top_r'] + '  ')
    print ('     |     |     ')
    print ('-----+-----+-----')
    print ('     |     |     ')
    print ('  ' + grid['mid_l'] + '  |  ' + grid['mid_m'] + '  |  ' + grid['mid_r'] + '  ')
    print ('     |     |     ')
    print ('-----+-----+-----')
    print ('     |     |     ')
    print ('  ' + grid['low_l'] + '  |  ' + grid['low_m'] + '  |  ' + grid['low_r'] + '  ')
    print ('     |     |     ')

def printa_grid_exemplo ():
    print ('         |         |         ')
    print ('  top_l  |  top_m  |  top_r  ')
    print ('         |         |         ')
    print ('---------+---------+---------')
    print ('         |         |         ')
    print ('  mid_l  |  mid_m  |  mid_r  ')
    print ('         |         |         ')
    print ('---------+---------+---------')
    print ('         |         |         ')
    print ('  low_l  |  low_m  |  low_r  ')
    print ('         |         |         ')

def verifica_grid (grid):
    #vai verificar quais espacos estao vazios
    contador = 1
    #o contador e usado para ser a key do dicioanrio de espacos vazios
    espacos_vazios = {}
    for i in grid.keys ():
        if (grid[i] == ' '):
            espacos_vazios.setdefault(str(contador), i)
            contador +=1
    #o gri e percorrido e pra cada key com valor ' ', essa key e colocada em um novo dicionario
    #esse dicionario contem os espacod vazios como values, e uma numeroacao como key
    #para facilitar a escolha de onde o jogador quer preencher na grid
    return espacos_vazios

def escolhe_espaco (espacos_vazios):
    #vai printar o dicionario gerado em verifica_grid
    #e pedir ao jogador para escolher o numero correspondente ao espaco que quer preencher
    pprint.pprint (espacos_vazios)
    max = 0
    for i in espacos_vazios.keys ():
        max += 1
    print ('Digite o numero que corresponda ao espaco que vc quer preencher')
    while True:
        try:
            posicao = int (input())
        except ValueError:
            print ('Erro: Entrada Invalida. Tente de novo')
            continue
        if posicao < 1 or posicao > max:
            print ('Erro: Numero invalido. Tente novamente')
            continue
        break
    return espacos_vazios[str(posicao)]

def preenche_grid (grid, jogador):
    #preenche a grid com o simbolo do jogador na posicao que ele escolher
    espacos_vazios = verifica_grid(grid)
    posicao = escolhe_espaco(espacos_vazios)
    grid[posicao] = jogador

def verifica_win (grid, jogador):
    #vai verificar se o jogo foi vencido
    #para isso e necessario olhar cada possibilidade de vitoria, ou seja todas as linhas, colunas e diagonais
    if grid['top_l'] == jogador:
        #se o jogador que estamos verificando ja tiver ocupado essa posicao
        #vou verificar todas as possibilidades de vitoria que ele pode ter a partir dessa primera posicao
        if grid['top_l'] == grid['top_m'] and grid['top_l'] == grid['top_r']:
            return True
        elif grid['top_l'] == grid['mid_l'] and grid['top_l'] == grid['low_l']:
            return True
    elif grid['mid_m'] == jogador:
        #nesse alem de verificar uma linha e uma coluna, vou verificar as duas diagonais
        if grid['mid_m'] == grid['top_l'] and grid['mid_m'] == grid['low_r']:
            return True
        elif grid['mid_m'] == grid['top_r'] and grid['mid_m'] == grid['low_l']:
            return True
        elif grid['mid_m'] == grid['top_m'] and grid['mid_m'] == grid['low_m']:
            return True
        elif grid['mid_m'] == grid['mid_l'] and grid['mid_m'] == grid['mid_r']:
            return True
    elif grid['low_r'] == jogador:
        #duas ultimas posicoes a serem verificadas
        if grid['low_r'] == grid['mid_r'] and grid['low_r'] == grid['top_r']:
            return True
        elif grid['low_r'] == grid['low_m'] and grid['low_r'] == grid['low_l']:
            return True
    else:
        #caso nenhuma das possibilidades acima for verdadeira, retorna falso, pois ainda nao foi preenchido
        return False


print ('Bem vindo ao jogo da velha')
print ('Observe o nome das posicoes do grid, pois e a partir do nome que vai escolher onde posicionar a peca')
printa_grid_exemplo ()
grid = gera_grid()
for i in range (9):
    if (i == 0 or i == 2 or i == 4 or i == 6 or i == 8):
        print ('Vez do Jogador X. Onde quer colocar sua peca?')
        preenche_grid (grid, 'X')
        printa_grid (grid)
        win = verifica_win(grid, 'X')
        if win == True:
            print('Jogador X ganhou. Parabéns')
            break
    else:
        print ('Vez do Jogador O. Onde quer colocar sua peca?')
        preenche_grid (grid, 'O')
        printa_grid (grid)
        win = verifica_win(grid, 'O')
        if win == True:
            print('Jogador O ganhou. Parabéns')
            break
    if i == 8:
        print ('Ninguem ganhou. Deu empate')
print ('Fim de jogo. Bye')