# CalCpp - A simple CLI scientific calculator in C++

<p align="center">
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/higorslva/calcpp_cli?color=04D361&labelColor=000000">
  
  <a href="https://github.com/higorsilva/">
    <img alt="Made by" src="https://img.shields.io/static/v1?label=made%20by&message=Higor%20Silva&color=04D361&labelColor=000000">
  </a>
  
  <img alt="Repository size" src="https://img.shields.io/github/repo-size/higorslva/calcpp_cli?color=04D361&labelColor=000000">
  
  <a href="https://github.com/johnggli/linktree/commits/master">
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/higorslva/calcpp_cli?color=04D361&labelColor=000000">
  </a>
</p>

###

<details>
  <summary>Work In Progress (click to expand)</summary>
  
#### Basics Operations

 - [x] Add
 - [x] Subtract
 - [x] Multiply
 - [x] Divide
 #### Algebra
 - [x] Exponentiation
 - [x] Square root
 - [x] Root calc in general
 - [x] Root equation
#### Calculus
 - [ ] Limits
 - [x] Derivation
 - [ ] Integral
	 - [ ]  Improper integrals
	 - [ ]  Multiple integration
	 - [ ]  Line integrals and surface integrals
	 - [ ]  Contour integrals
	 - [ ]  Integrals of differential forms
	 - [ ]  Summations
	 - [ ]  Functional integrals
  </details>

###
 

## About the project
This is an opensource scientific calculator made from scratch by me :)
Feel free to fork or contribute with this project

## Code diagram

For now, that code is pretty simple  😅

```mermaid
graph LR
A[Adicao.h] -- Provides add calcs --> Z[calc.cpp]
B[Subtracao.h] -- Provides subtracts calcs --> Z
C[Multiplicacao.h] -- Provides multiply calcs --> Z
D[Divisao.h] -- Provides division calcs --> Z
E[RaizBaseX] -- Provides root calcs in general --> Z
F[RaizQuadrada.h] -- Provides square root calcs only --> Z
G[RaizesEquacao.h] -- Provides root equation --> Z
H[Potencia.h] -- Provides exponentiation calcs --> Z
I[Derivada.h] -- Provides derivation calcs --> Z
```

