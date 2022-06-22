#Projeto character picture grid proposto no livro 'Automate the boring stuff with python'

def printa_grid (grid, x, y):
    #printa o grid, mas para que seja do que jeito que o livro quer x e y devem ser invertidos
    #fazendo uma virada de 90 graus para a direita com o grid
    #geralmente o primeiro for e a linha e o segundo for a coluna, nesse caso esta o contrario
    for i in range (y):
        for j in range (x):
            print (grid[j][i], end=' ')
        print ('')

grid = [['.', '.', '.', '.', '.', '.'],
        ['.', 'O', 'O', '.', '.', '.'],
        ['O', 'O', 'O', 'O', '.', '.'],
        ['O', 'O', 'O', 'O', 'O', '.'],
        ['.', 'O', 'O', 'O', 'O', 'O'],
        ['O', 'O', 'O', 'O', 'O', '.'],
        ['O', 'O', 'O', 'O', '.', '.'],
        ['.', 'O', 'O', '.', '.', '.'],
        ['.', '.', '.', '.', '.', '.']]
print ('grid 1:')
printa_grid (grid, 9, 6)
