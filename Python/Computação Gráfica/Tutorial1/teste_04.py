import pygame, sys
import time

# Inicializacao pygame
pygame.init()

# setup da superficie
display_x = 600
display_y = 400
surface = pygame.display.set_mode( (display_x, display_y ) )
surface.fill( [30,150,230] )    # cor de fundo

clock = pygame.time.Clock()

carro_velho = pygame.image.load('carro.png').convert()

def car( x, y ):
    surface.blit( carro_velho, (x,y) )

i = 0
x = 200
y = 200
x_change = 0 #mudanca horizontal
y_change = 0 #mudanca vertical

car_x = 73
car_y = 89

while (True):

   # eventos de saida
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit(); sys.exit();

    keys = pygame.key.get_pressed()


#        if event.type == pygame.KEYDOWN:
    if keys[pygame.K_LEFT]:
        x_change = -5
    elif keys[pygame.K_RIGHT]:
        x_change = 5
    elif keys[pygame.K_UP]:
        y_change = -5
    elif keys[pygame.K_DOWN]:
        y_change = 20

    # cor de fundo
    color = ( i,2,i )    # fazer testes aqui
    surface.fill( color )
    i +=1
    if i >= 255: i = 0;

    x += x_change
    y += y_change

    if x >= display_x - car_x or x <= 0 :
        x -= x_change   # desconsidera a ultima atualzacao

    if y >= display_y - car_y or y <= 0 :
        y -= y_change   # desconsidera a ultima atualzacao

    x_change = 0
    y_change = 0

    # atualiza a nova posicao
    car( x, y )
    pygame.display.flip()       # fazer testes aqui
    pygame.display.update()     # fazer testes aqui

    clock.tick(60)
