#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#

class ArvoreB:
    
    class Node:
        def __init__(self):
            self.filhos = []
            self.chaves = []
        
        def __repr__(self):
            return 'Node' + str(self.chaves) + str(self.filhos)

        def _limite_inferior(self, chave):
            b = 0
            e = len(self.filhos) - 1
            while b < e:
                meio = (b + e + 1) // 2
                if self.chaves[meio - 1] <= chave:
                    b = meio
                else:
                    e = meio - 1
            return b
    
    def __init__(self, m):
        self.raiz = self.Node()
        self.m = m
    
    def _split(self, node, parnode, pos):
        # caso base
        if parnode is None:
            self.raiz = self.Node()
            left = self.Node()
            right = self.Node()
            left.chaves = node.chaves[:self.m - 1]
            right.chaves = node.chaves[self.m:]
            left.filhos = node.filhos[:self.m]
            right.filhos = node.filhos[self.m:]
            self.raiz.chaves = [node.chaves[self.m - 1]]
            self.raiz.filhos = [left, right]
            return self.raiz
        else:
            left = self.Node()
            right = self.Node()
            left.chaves = node.chaves[:self.m - 1]
            right.chaves = node.chaves[self.m]
            left.filhos = node.filhos[:self.m]
            right.filhos = node.filhos[self.m:]
            parnode.chaves = parnode.chaves[:pos] + [node.chaves[self.m - 1]] + parnode.chaves[pos:]
            parnode.filhos = parnode.filhos[:pos] + [left, right] + parnode.filhos[pos + 1:]

    def _inserir(self, chave, node, parnode):
        if node is None: return None

        # node esta cheio e deve ser a raiz
        if len(node.chaves) == 2 * self.m - 1:
            assert node == self.raiz
            node = self._split(node, parnode, -1)
            assert len(node.chaves) == 1
            
            # para a direita
            if node.chaves[0] <= chave:
                self._inserir(chave, node.filhos[1], node)
            else:
                self._inserir(chave, node.filhos[0], node)
            
            return
        
        # somente possivel para a raiz no começo
        if len(node.filhos) == 0:
            assert node == self.raiz
            node.filhos.append(None)
            node.chaves.append(chave)
            node.filhos.append(None)
        
            return
        
        
        pos = node._limite_inferior(chave)

        
        # em uma folha
        if node.filhos[pos] is None:
            node.chaves = node.chaves[:pos] + [chave] + node.chaves[pos:]
            node.filhos.append(None)
        else:
            
            # filho esta cheio, fazendo split
            if node.filhos[pos] is not None and len(node.filhos[pos].chaves) == 2 * self.m - 1:
                self._split(node.filhos[pos], node, pos)
                # go to right
                if node.chaves[pos] <= chave:
                    self._inserir(chave, node.filhos[pos + 1], node)
                else:
                    self._inserir(chave, node.filhos[pos], node)
            else:
                self._inserir(chave, node.filhos[pos], node)

    def inserir(self, chave):
        self._inserir(chave, self.raiz, None)

    def _busca(self, chave, node):
        if node is None or len(node.filhos) == 0:
            return None
        
        pos = node._limite_inferior(chave)

        if pos >= 1 and node.chaves[pos - 1] == chave:
            return node.chaves[pos - 1]
        else:
            return self._busca(chave, node.filhos[pos])
    
    def busca(self, chave):
        return self._busca(chave, self.raiz)
    
def teste0():
    T = ArvoreB(6)
    rng = list(range(9000))
    shuffle(rng)
    for i in rng:
        T.inserir(i)
    
    for i in range(9):
        print(T.busca(i), '\n')

if __name__ == '__main__':
    from random import shuffle
    import sys
    teste0()
