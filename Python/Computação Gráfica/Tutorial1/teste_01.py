import pygame
import sys


# Inicializacao pygame
pygame.init()

# setup da superficie
surface = pygame.display.set_mode( (600,600) )
surface.fill( [30,150,230] )    # cor de fundo

clock = pygame.time.Clock()

i = 0
j = 0

while (True):

   # eventos de saida
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit(); sys.exit();

    # cor de fundo
    color = (25,2,255)    # fazer testes aqui
    i += 1
    j+=1
    if i >= 255: i = 0;

    surface.fill( color )

    color2 = (2,5,60)    # fazer testes aqui
    pygame.draw.rect( surface, color2, pygame.Rect(j%601, j%603, 62, 62), 3 ) #testes aqui
    pygame.draw.rect( surface, color2, pygame.Rect(192, 12, j%600, j%600), 1 ) #testes aqui
    pygame.draw.rect( surface, color2, pygame.Rect(192, 192, 50, 2), 1 ) #testes aqui
    pygame.draw.circle( surface, color2, (300, 300), j%500, 2 ) #testes aqui


    pygame.display.flip()       # fazer testes aqui
    pygame.display.update()     # fazer testes aqui

    clock.tick(60)


