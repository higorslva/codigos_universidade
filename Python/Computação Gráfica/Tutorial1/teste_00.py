import pygame
import sys

# Inicializacao pygame
pygame.init()

# setup da superficie
surface = pygame.display.set_mode( (600,300) )
surface.fill( [30,150,230] )    # cor de fundo

clock = pygame.time.Clock()

i = 0
while (True):

   # eventos de saida
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit(); sys.exit();



    

    # cor de fundo
    color = ( i, i, 2 )    # fazer testes aqui
    i += 1
    if i >= 255: i = 0;

    surface.fill( color )

    pygame.display.flip()       # fazer testes aqui
    pygame.display.update()     # fazer testes aqui

    clock.tick(30)


