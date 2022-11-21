"""! @brief Jogo de fundo paralaxe """

##
# @file ex_fundo_01.py
#
# @brief Arquivo principal do jogo de fundo com paralaxe
#
# @section Descrição
#   Descrição de inicialização ao pygame a partir de construção de imagens de fundo
#   repetidas infinitamente com várias imagens para dar sensação de imagem 3D
#
# @author Claudio Rogerio 16.11.2022
# TODO:
#   - add texto de pontuacao
#   - add texto de informacao
#   - add personagem
#   - add inimigos
#   - add auxiliares
#   - movimentacao conforme a posicao do personagem

# MAKED:
#   - paralaxe de fundo (funcao: terreno_00)
#   - caixa de informacoes (retangulo - funcao:fundo)

import sys
import time
import pygame
import math
from personagem import *

pygame.init()

clock = pygame.time.Clock()
FPS = 5

SCREEN_WIDTH = 1200
SCREEN_HEIGHT = 500
DIM_SCREEN = (SCREEN_WIDTH, SCREEN_HEIGHT)

#create game window
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption( "Título do jogo" )

#load image
dir = './img/cenario-01/'

#movimentacao
velocity = 20
direcao = None
position = 0

# desenhar area da imagem de fundo
draw_border = False

#game loop
run = True
debug = True

dia = ( 255, 255, 255 )
tarde = ( 155, 155, 55 )
noite = (50,50,50)
cor_piso = (52, 42, 35 )

cenario_01 = False
cenario_02 = True

pos_y = 5   # posicao da imagem do cenario

id_ator = 0
pos_ator=( position+10, 232 )


while run:

  screen.fill( tarde )

  clock.tick(FPS)
  if debug:
    print(direcao)

  # controle de cenarios do jogo
  if cenario_02 == True:
      #for index, img in enumerate( reversed( bg_images ) ):
 #     terreno_00( position, tiles, pos_y )
#      fundo( screen, cor_piso, bg_rect, DIM_SCREEN, pos_y )
      show_persona( screen, pos_ator, id_ator, direcao )
#      id_ator = 0

  #scroll background
  if direcao == 'esquerda':
    position += velocity
  if direcao == 'direita':
    position -= velocity


  keys = pygame.key.get_pressed()  # checking pressed keys
  if keys[ pygame.K_RIGHT ]:
      print('dIREITA.................')
      id_ator = id_ator + 1
#      pos_ator = ( pos_ator[0]+10, pos_ator[1] )
  if keys[ pygame.K_LEFT ]:
      print('esquErdA.................')
      id_ator = id_ator + 1
#      pos_ator = ( pos_ator[0]+10, pos_ator[1] )


  ## event handler
  for event in pygame.event.get():
    if event.type == pygame.QUIT:
      run = True
      pygame.quit(); sys.exit();

    if event.type == pygame.KEYDOWN:
        if event.key == pygame.K_ESCAPE:
            time.sleep(1);
            pygame.quit(); sys.exit();

        if event.key == pygame.K_SPACE:
            print( 'Pular' )

        if event.key == pygame.K_LEFT:
            direcao = 'esquerda'
            id_ator = id_ator + 1
            pos_ator = ( pos_ator[0]-10, pos_ator[1] )

        if event.key == pygame.K_RIGHT:
            direcao = 'direita'
            id_ator = id_ator + 1
            pos_ator = ( pos_ator[0]+10, pos_ator[1] )


    if event.type ==pygame.KEYUP:
        if event.key == pygame.K_DOWN:
            abaixar = False
            print('Levanta-se!')
        if event.key == pygame.K_RIGHT:
            direcao=None
            act_terr = False
            id_ator = 0
        if event.key == pygame.K_LEFT:
            direcao = None
            act_terr = False
            id_ator = 0
        # para cima
        # para baixo


  print( 'ID', id_ator, pos_ator )
  if id_ator > 6 : id_ator = 0
  if id_ator < 0 : id_ator = 6
#print( 'ID', id_ator )

  pygame.display.update()
#  print( bg_rect[0], bg_rect[1], bg_rect[2], bg_rect[3],'...' )
pygame.quit()
