"""! @brief Personagem principal do jogo Fugindo da escola"""
##
# @file personagem.py
#
# @brief Arquivo com imagens do personagem principal
#
# @section Descrição
# O arquivo é responsável pela importacao das imagens utilizadas como animações do personagem TREX
#
# @author Claudio Rogerio 16.11.2022
#
# @subsection TODO
#   - Caminhar
#
# @subsection MAKED
#   - Movimentacao de pulo
#   - Movimentacao para baixo



import pygame
dir = './img/personagens/principal/'
DEBUG = 1

malha = 'mapeamento.txt'

personagem = []
personagem_left = []

for i in range(1,8):
    if DEBUG: print( f"ator_{i}.png" )
    aux_img = pygame.image.load( dir + f"ator_{i}.png" )
    personagem.append( aux_img )
    personagem_left.append( pygame.transform.flip( aux_img, True, False ) ) # reflexao horizontal 



def show_persona( screen, pos, id_pers, direcao ):
    global personagem, personagem_left
    if DEBUG: print(pos, id_pers)

    if direcao == 'esquerda':
        screen.blit( personagem_left[id_pers], pos ) # var global com ID em posicao
    else:
        screen.blit( personagem[id_pers], pos )




