#include<stdio.h> 
#include<stdlib.h> 
//#include<conio.h>
#include <ncurses.h>

//Variaveis do tipo caracter
char vel[][4] = { {' ',' ',' '},{' ',' ',' '}, {' ',' ',' '} };
//Variaveis do tipo inteiro
int random10,j1, j2, you=0, pc=0, k, z, imprime(void), lerp(void), troca(int s, int t), xwin(void), owin(void), jogapc(void), resetar(void); 

//Essa é a função que imprime a tela do jogo.
int imprime() 
{ 
printf("\n                       IAPEC - FACULDADE DE TECNOLOGIA");
printf("\n              CURSO SUPERIOR TECNOLOGICO EM REDES DE COMPUTADORES");
printf("\n         TRABALHO APRESENTADO A DISCIPLICA DE LINGUAGEM DE PROGRAMACAO - C");
printf("\n               ALUNOS: ALEX DA SILVA FERNANDES E EMMERSON LOYDE\n\n\n");
printf(" Voce: %d x Computador: %d \n\n", you, pc); //Estatisticas do jogo.
printf("     Y1  Y2  Y3\n\n"); //Escreve y1 y2 y3 e pula duas linhas

//For para escrever as linhas e os x1 x2 e x3 ordenadamente
for(z=0; z<3; z++) { //z recebe 0; enquanto z menor que 3; z recebe z+1
   if(z==0) printf("X1"); //se z igual a o escrever x1
   if(z==1) printf("X2"); //se z igual a 1 escrever x2
   if(z==2) printf("X3"); //se z igual a 2 escrever x3
   for(k=0; k<3; k++) { //k recebe 0; enquanto k menor que 3; k recebe k+1
      if(k==0) printf("   %c ", vel[z][k]); //se k igual a 0 escrever posição da matriz vel
      else printf(" %c ", vel[z][k]); //senão escrever posição da matriz vel
      if(k<2) printf("|"); //se k menor que 2 escrever uma barra vertical
      } 
   if(z<2) printf("\n    -----------\n"); //se z menor que 2 escrever pula uma linha ----- pula outra linha
   } 
   printf("\n\n"); //escrever pula duas linhas
} 


//Função que verifica se o campo já está preenchido com x ou o
int troca(int s, int t) { 

// printf("\n %i  %i  ", s, t); //simplesmente para debug

if(vel[s-49][t-49]=='x' || vel[s-49][t-49]=='o') //se posição da matriz vel for x ou o
{ 
   printf("\n\nEspaco ja preenchido\n"); //escreve Espaço já preenchido
   lerp(); //chama a função lerp
} 
if(vel[s-49][t-49]==' ') vel[s-49][t-49]='x'; //se posição da matriz vel estiver limpa, recebe x
} 

int lerp() {  

int i,j;

printf("\nDigite as coordenadas de sua jogada:\n\nX:"); 

i=getch();

printf("\nY:"); 
j=getch();

if(i>=49 && i<52 && j>=49 && j<52) troca(i,j); 
else { 
      printf("\n\nERRO!\n\nCoordenada invalida.\n\n"); 
      lerp(); 
      } 

} 


int xwin() {
           printf("\nVoce GANHOU!\n");
           you++; 
           resetar(); 
} 


int owin() { 
printf("\nVoce PERDEU!\n"); 
pc++; 
resetar(); 
} 


//PC joga
int jogapc() { 

int x=1; //PC gasta sua jogada.
 
      if(vel[2][2]=='x' && vel[0][2]=='x') 
         if(vel[1][2]==' ' && x) 
         { 
            vel[1][2]='o'; 
            x=0; 
         } 

      if(vel[2][0]=='x' && vel[0][2]=='x') 
         if(vel[1][0]==' ' && x) 
         { 
            vel[1][0]='o'; 
            x=0; 
         }   

   /*ATAQUES*/ 

      /* ataques => diagonal secundária */ 

      if(vel[2][0]=='o' && vel[1][1]=='o') 
         if(vel[0][2]==' ' && x) 
         { 
            vel[0][2]='o'; 
            x=0; 
         } 
      if(vel[0][2]=='o' && vel[2][2]=='o') 
         if(vel[2][0]==' ' && x) 
         { 
            vel[2][0]='o'; 
            x=0; 
         } 
      if(vel[2][0]=='o' && vel[0][2]=='o') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* ataques => diagonal principal */ 

      if(vel[0][0]=='o' && vel[1][1]=='o') 
         if(vel[2][2]==' ' && x) 
         { 
            vel[2][2]='o'; 
            x=0; 
         } 
      if(vel[1][1]=='o' && vel[2][2]=='o') 
         if(vel[0][0]==' ' && x) 
         { 
            vel[0][0]='o'; 
            x=0; 
         } 
      if(vel[0][0]=='o' && vel[2][2]=='o') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* ataques => coluna 1: */ 

      if(vel[0][0]=='o' && vel[1][0]=='o') 
         if(vel[2][0]==' ' && x) 
         { 
            vel[2][0]='o'; 
            x=0; 
         } 
      if(vel[1][0]=='o' && vel[2][0]=='o') 
         if(vel[0][0]==' ' && x) 
         { 
            vel[0][0]='o'; 
            x=0; 
         } 
      if(vel[0][0]=='o' && vel[2][0]=='o') 
         if(vel[1][0]==' ' && x) 
         { 
            vel[1][0]='o'; 
            x=0; 
         } 

      /* ataques => coluna 2: */ 

      if(vel[0][1]=='o' && vel[1][1]=='o') 
         if(vel[2][1]==' ' && x) 
         { 
            vel[2][1]='o'; 
            x=0; 
         } 
      if(vel[1][1]=='o' && vel[2][1]=='o') 
         if(vel[0][1]==' ' && x) 
         { 
            vel[0][1]='o'; 
            x=0; 
         } 
      if(vel[0][1]=='o' && vel[2][1]=='o') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* ataques => coluna 3: */ 

      if(vel[0][2]=='o' && vel[1][2]=='o') 
         if(vel[2][2]==' ' && x) 
         { 
            vel[2][2]='o'; 
            x=0; 
         } 
      if(vel[1][2]=='o' && vel[2][2]=='o') 
         if(vel[0][2]==' ' && x) 
         { 
            vel[0][2]='o'; 
            x=0; 
         } 
      if(vel[0][2]=='o' && vel[2][2]=='o') 
         if(vel[1][2]==' ' && x) 
         { 
            vel[1][2]='o'; 
            x=0; 
         } 

      /* ataques => linha 1: */ 

      if(vel[0][0]=='o' && vel[0][1]=='o') 
         if(vel[0][2]==' ' && x) 
         { 
            vel[0][2]='o'; 
            x=0; 
         } 
      if(vel[0][1]=='o' && vel[0][2]=='o') 
         if(vel[0][0]==' ' && x) 
         { 
            vel[0][0]='o'; 
            x=0; 
         } 
      if(vel[0][0]=='o' && vel[0][2]=='o') 
         if(vel[0][1]==' ' && x) 
         { 
            vel[0][1]='o'; 
            x=0; 
         } 

      /* ataques => linha 2: */ 

      if(vel[1][0]=='o' && vel[1][1]=='o') 
         if(vel[1][2]==' ' && x) 
         { 
            vel[1][2]='o'; 
            x=0; 
         } 
      if(vel[1][1]=='o' && vel[1][2]=='o') 
         if(vel[1][0]==' ' && x) 
         { 
            vel[1][0]='o'; 
            x=0; 
         } 
      if(vel[1][0]=='o' && vel[1][2]=='o') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* ataues => linha 3: */ 

      if(vel[2][0]=='o' && vel[2][1]=='o') 
         if(vel[2][2]==' ' && x) 
         { 
            vel[2][2]='o'; 
            x=0; 
         } 
      if(vel[2][1]=='o' && vel[2][2]=='o') 
         if(vel[2][0]==' ' && x) 
         { 
            vel[2][0]='o'; 
            x=0; 
         } 
      if(vel[2][0]=='o' && vel[2][2]=='o') 
         if(vel[2][1]==' ' && x) 
         { 
            vel[2][1]='o'; 
            x=0; 
         } 

/* JOGADA 1 */ 

if(j1 && x) 
{ 
if(vel[0][0]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[1][1]=='x') 
   { 
      vel[2][0]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[2][2]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[0][1]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[0][2]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[1][0]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[1][2]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[2][0]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
if(vel[2][1]=='x') 
   { 
      vel[1][1]='o'; 
      x=0; 
      j1=0; 
   } 
} 

      /* DEFESAS */ 

      /* defesas => diagonal secundária */ 

      if(vel[2][0]=='x' && vel[1][1]=='x') 
         if(vel[0][2]==' ' && x) 
         { 
            vel[0][2]='o'; 
            x=0; 
         } 
      if(vel[0][2]=='x' && vel[2][2]=='x') 
         if(vel[2][0]==' ' && x) 
         { 
            vel[2][0]='o'; 
            x=0; 
         } 
      if(vel[2][0]=='x' && vel[0][2]=='x') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* defesas => diagonal principal */ 

      if(vel[0][0]=='x' && vel[1][1]=='x') 
         if(vel[2][2]==' ' && x) 
         { 
            vel[2][2]='o'; 
            x=0; 
         } 
      if(vel[1][1]=='x' && vel[2][2]=='x') 
         if(vel[0][0]==' ' && x) 
         { 
            vel[0][0]='o'; 
            x=0; 
         } 
      if(vel[0][0]=='x' && vel[2][2]=='x') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* defesas => coluna 1: */ 

      if(vel[0][0]=='x' && vel[1][0]=='x') 
         if(vel[2][0]==' ' && x) 
         { 
            vel[2][0]='o'; 
            x=0; 
         } 
      if(vel[1][0]=='x' && vel[2][0]=='x') 
         if(vel[0][0]==' ' && x) 
         { 
            vel[0][0]='o'; 
            x=0; 
         } 
      if(vel[0][0]=='x' && vel[2][0]=='x') 
         if(vel[1][0]==' ' && x) 
         { 
            vel[1][0]='o'; 
            x=0; 
         } 

      /* defesas => coluna 2: */ 

      if(vel[0][1]=='x' && vel[1][1]=='x') 
         if(vel[2][1]==' ' && x) 
         { 
            vel[2][1]='o'; 
            x=0; 
         } 
      if(vel[1][1]=='x' && vel[2][1]=='x') 
         if(vel[0][1]==' ' && x) 
         { 
            vel[0][1]='o'; 
            x=0; 
         } 
      if(vel[0][1]=='x' && vel[2][1]=='x') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* defesas => coluna 3: */ 

      if(vel[0][2]=='x' && vel[1][2]=='x') 
         if(vel[2][2]==' ' && x) 
         { 
            vel[2][2]='o'; 
            x=0; 
         } 
      if(vel[1][2]=='x' && vel[2][2]=='x') 
         if(vel[0][2]==' ' && x) 
         { 
            vel[0][2]='o'; 
            x=0; 
         } 
      if(vel[0][2]=='x' && vel[2][2]=='x') 
         if(vel[1][2]==' ' && x) 
         { 
            vel[1][2]='o'; 
            x=0; 
         } 

      /* defesas => linha 1: */ 

      if(vel[0][0]=='x' && vel[0][1]=='x') 
         if(vel[0][2]==' ' && x) 
         { 
            vel[0][2]='o'; 
            x=0; 
         } 
      if(vel[0][1]=='x' && vel[0][2]=='x') 
         if(vel[0][0]==' ' && x) 
         { 
            vel[0][0]='o'; 
            x=0; 
         } 
      if(vel[0][0]=='x' && vel[0][2]=='x') 
         if(vel[0][1]==' ' && x) 
         { 
            vel[0][1]='o'; 
            x=0; 
         } 

      /* defesas => linha 2: */ 

      if(vel[1][0]=='x' && vel[1][1]=='x') 
         if(vel[1][2]==' ' && x) 
         { 
            vel[1][2]='o'; 
            x=0; 
         } 
      if(vel[1][1]=='x' && vel[1][2]=='x') 
         if(vel[1][0]==' ' && x) 
         { 
            vel[1][0]='o'; 
            x=0; 
         } 
      if(vel[1][0]=='x' && vel[1][2]=='x') 
         if(vel[1][1]==' ' && x) 
         { 
            vel[1][1]='o'; 
            x=0; 
         } 

      /* defesas => linha 3: */ 

      if(vel[2][0]=='x' && vel[2][1]=='x') 
         if(vel[2][2]==' ' && x) 
         { 
            vel[2][2]='o'; 
            x=0; 
         } 
      if(vel[2][1]=='x' && vel[2][2]=='x') 
         if(vel[2][0]==' ' && x) 
         { 
            vel[2][0]='o'; 
            x=0; 
         } 
      if(vel[2][0]=='x' && vel[2][2]=='x') 
         if(vel[2][1]==' ' && x) 
         { 
            vel[2][1]='o'; 
            x=0; 
         } 

   /* JOGADA 2 */ 

if(vel[0][0]=='x' && vel[1][1]=='x' && vel[2][2]=='o') 
{ 
   if(x) 
   { 
      if(vel[2][0]==' ') 
      { 
         vel[2][0]='o'; 
         x=0; 
      } 
      else 
      { 
         if(vel[0][2]==' ') 
         { 
            vel[0][2]='o'; 
            x=0; 
         } 
      } 
   } 
} 

if(vel[0][0]=='x' && vel[2][1]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[2][0]==' ') 
      { 
         vel[2][0]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[1][0]==' ') 
         { 
            vel[1][0]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(vel[0][0]=='x' && vel[1][2]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[0][2]==' ') 
      { 
         vel[0][2]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[0][1]==' ') 
         { 
            vel[0][1]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(vel[0][1]=='x' && vel[1][0]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[0][0]==' ') 
      { 
         vel[0][0]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[1][1]==' ') 
         { 
            vel[1][1]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(vel[0][1]=='x' && vel[2][0]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[1][1]==' ') 
      { 
         vel[1][1]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[0][0]==' ') 
         { 
            vel[0][0]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(vel[0][1]=='x' && vel[1][2]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[0][2]==' ') 
      { 
         vel[0][2]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[1][1]==' ') 
         { 
            vel[1][1]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(vel[0][1]=='x' && vel[2][2]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[0][2]==' ') 
      { 
         vel[0][2]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[0][0]==' ') 
         { 
            vel[0][0]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(vel[0][2]=='x' && vel[1][0]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[0][0]==' ') 
      { 
         vel[0][0]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[1][1]==' ') 
         { 
            vel[1][1]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(vel[0][2]=='x' && vel[2][1]=='x') 
{ 
   if(x && j2) 
   { 
      if(vel[2][2]==' ') 
      { 
         vel[2][2]='o'; 
         x=0; 
         j2=0; 
      } 
      else 
      { 
         if(vel[1][1]==' ') 
         { 
            vel[1][1]='o'; 
            x=0; 
            j2=0; 
         } 
      } 
   } 
} 

if(x) 
{ 
   int d=0; 
   int f=0; 

   for(d=0; d<3; d++) 
   { 
      for(f=0; f<3; f++) 
      { 
         if(vel[d][f]==' ') 
            { 
            vel[d][f]='o'; 
            x=0; 
            } 
         if(x==0) break; 
      } 
   if(x==0) break; 
   } 

   if(x) 
   { 
      printf("\nEMPATE.\n"); 
      resetar(); 
   }
} 
} 

int resetar() 
{ 
   int d, f; 
   for(d=0; d<3; d++) 
      { 
      for(f=0; f<3; f++) 
         { 
            vel[d][f]=' '; 
         } 
      }
   j1=1; 
   j2=1;
   getch();
   system("CLS");   
   imprime();

      
} 

int main() { 

int t; 

imprime(); 

j1=1; 
j2=1; 

do{ 

lerp(); 

system("CLS"); 
imprime(); 
for(t=0; t<99000000; t++) ; 
jogapc();
system("CLS"); 
imprime();

if(vel[0][0]=='x' && vel[0][1]=='x' && vel[0][2]=='x' || 
vel[1][0]=='x' && vel[1][1]=='x' && vel[1][2]=='x' || 
vel[2][0]=='x' && vel[2][1]=='x' && vel[2][2]=='x' || 

vel[0][0]=='x' && vel[1][0]=='x' && vel[2][0]=='x' || 
vel[0][1]=='x' && vel[1][1]=='x' && vel[2][1]=='x' || 
vel[0][2]=='x' && vel[1][2]=='x' && vel[2][2]=='x' || 

vel[0][0]=='x' && vel[1][1]=='x' && vel[2][2]=='x' || 
vel[2][0]=='x' && vel[1][1]=='x' && vel[0][2]=='x') xwin(); 

if(vel[0][0]=='o' && vel[0][1]=='o' && vel[0][2]=='o' || 
vel[1][0]=='o' && vel[1][1]=='o' && vel[1][2]=='o' || 
vel[2][0]=='o' && vel[2][1]=='o' && vel[2][2]=='o' || 

vel[0][0]=='o' && vel[1][0]=='o' && vel[2][0]=='o' || 
vel[0][1]=='o' && vel[1][1]=='o' && vel[2][1]=='o' || 
vel[0][2]=='o' && vel[1][2]=='o' && vel[2][2]=='o' || 

vel[0][0]=='o' && vel[1][1]=='o' && vel[2][2]=='o' || 
vel[2][0]=='o' && vel[1][1]=='o' && vel[0][2]=='o') owin(); 
}

while(1);

}
