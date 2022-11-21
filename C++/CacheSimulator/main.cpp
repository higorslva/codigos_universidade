#include<iostream>
#include<fstream>
#include<cstdlib>


using namespace std;

int lru[500][20];

// Função para alterar a ordem das tags no lru algo
int trasparatopo(int set, int assoc, int x)
{
    int i,pos;
    for(i=0;i<assoc;i++)
        if(lru[set] == x)
            pos = i;
    for(i=pos;i<assoc-1;i++)
        lru[set] = lru[set][i+1];
    lru[set][assoc-1] = x;


}

void imprime(int total, int hit, int miss);

long int trocabase(char hex[], int base);


int convert(char);

int main()
{
 int cache_size, asso, block_size,i,j, no_blocks, base,r,op, x,pos;
 long int endereco;
 float hitrate;
 char hex[20], nomearquivo[20];
 int no_set;
 int check=0, hit=0, miss=0;

    cout<<"Entro com tamanho da cache: ";
    cin>>cache_size;
    cout<<"Entr com o valor da associativa : ";
    cin>>asso;
    cout<<"Entre com tamanho do bloco : ";
    cin>>block_size;
    cout<<"Entre com nomedo arquivo Trace a ser aberto : ";
    cin>>nomearquivo;
    cout<<"Entre com base numérica usado no arquivo TRACE ";
    cin>>base;
    cout<<"1. FIFO  2.LRU  3. Randomico escolaha qual das 3 : ";
    cin>>op;

 no_blocks = cache_size / block_size;
 no_set = cache_size / (asso * block_size);

 int cache[no_set][asso];

 for(i=0;i<no_set;i++)
  for(j=0;j<asso;j++)
   cache[j] = -10; // Elimina todos os valores de lixo no cache


 int fifo[no_set];
 for(i=0;i<no_set;i++)
  fifo = 0;

    for(i=0;i<no_set;i++)
        for(j=0;j<asso;j++)
            lru[j] = j;

 ifstream infile;
 infile.open(nomearquivo,ios::in);
 if(!infile)
 {
     cout<<"Error! Arquivo não encontrado...";
     exit(0);

 }
 int set, tag, found;
 while(!infile.eof()) //Le os endereços achados no arquivo TRACE
 {

        if(base!=10)
        {
            infile>>hex;
            endereco = trocabase(hex, base);
        }
        else
            infile>>endereco;

  set = (endereco / block_size) % no_set;
  tag = endereco / (block_size * no_set);


  check++;
  found = 0;
  for(i=0;i<asso;i++)
   if(cache[set] == tag)
    {
        found = 1;
        pos = i;
    }


  if(found)
  {
      hit++;
      if(op == 2)
      {
                trasparatopo(set,asso,pos);
      }
  }

  else
  {
            if(op==1)
            {
             i = fifo[set];

   cache[set] = tag;
   fifo[set]++;

   if(fifo[set] == asso)
    fifo[set] = 0;

            }
            else if(op==2)
            {
                i = lru[set][0];
                cache[set] = tag;
                trasparatopo(set,asso,i);

            }
            else
            {
                r = rand() % asso;
                cache[set][r] = tag;

            }

  }

 }
 infile.close();
 system("clear");
 cout<<"No: of checks : "<<check;
 cout<<" No: of hits : "<<hit;
 cout<<" No of misses : "<<check-hit;
 hitrate = float(hit)/float(check);
 cout<<" Hit Rate : "<<hitrate;
    imprime(check,hit, check-hit);
 return 0;

}

int convert(char c)
{
    if(c == '1')
        return 1;

    else if(c == '2')
        return 2;

    else if(c == '3')
        return 3;

    else if(c == '4')
        return 4;

    else if(c =='5')
        return 5;

    else if(c == '6')
        return 6;

    else if(c == '7')
        return 7;

    else if(c == '8')
        return 8;

    else if(c == '9')
        return 9;

    else if(c == '0')
        return 0;

    else if( (c == 'a') || (c == 'A') )
        return 10;

    else if( (c == 'b') || (c == 'B') )
        return 11;

    else if( (c == 'c') || (c == 'C') )
        return 12;

    else if( (c == 'd') || (c == 'D') )
        return 13;

    else if( (c == 'e') || (c == 'E') )
        return 14;

    else if( (c == 'f') || (c == 'F') )
        return 15;

    else
        return 0;

}

//Funçãopara trocar a base do numero para systema decimal//
long int trocabase(char hex[], int base)
{
    int pow = 1,len,i,j;
    char temp;
    long int dec;

    for(len=0;hex[len]!='\0';len++);

    for(i=0,j=(len-1);i<j;i++,j--)
    {
        temp = hex;
        hex=hex[j];
        hex[j]=temp;
    }


    pow = 1;
    dec = 0;
    for(i=0;i<len;i++)
    {
        if(convert(hex== -1))
        {
            dec =0;
            break;
        }
        dec = dec + (pow * convert(hex));
        pow*=base;

    }
    return dec;

}


//Funcção que mostra o grafico
void imprime(int total, int hit, int miss)
{

    cout<<"\n\n     ************Grafico de Miss e Hit**********\n\n";

    int hit_limit,miss_limit, i;
    hit_limit = (float (hit)/total)*30;
    miss_limit = (float(miss)/total)*30;

    cout<<"\n\t^";
    cout<<"\n\t|\n";
    for(i=30;i>=0;i--)
    {
        cout<<"\t";
        cout<<"|";
        cout<<"\t\t";

        //Total hit bar
        cout<<"|";
        if(i==30)
            cout<<"---";
        else
            cout<<"    ";
        cout<<"|";

        cout<<"\t\t";
        //Hit Bar...
        if(i<=hit_limit)
            cout<<"|";
        else
            cout<<" ";

        if(i==hit_limit)
            cout<<"---";
        else
            cout<<"    ";

        if(i<=hit_limit)
            cout<<"|";
        else
            cout<<" ";

         cout<<"\t\t";
        //Miss Bar...
        if(i<=miss_limit)
            cout<<"|";
        else
            cout<<" ";

        if(i==miss_limit)
            cout<<"---";
        else
            cout<<"    ";

        if(i<=miss_limit)
            cout<<"|";
        else
            cout<<" ";

        cout<<"\n";

    }
    cout<<"\t------------------------------------------------------------------------------>";
    cout<<"\n\t\t\tTotal\t\t Hits\t\tMiss\n";

}
