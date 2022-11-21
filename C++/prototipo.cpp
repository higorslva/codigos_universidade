#include <iostream>
#include <locale>
using namespace std;

void clr (){
    system ("clear");
}

int main ()
{
    while (true)
    {
         setlocale (LC_ALL, "Portuguese");

        int idade;
        int opt;
        char nome[61];
        cout << "Olá!  Este programa é apenas um teste :)\nVocê deseja testá-lo?" << endl;
        cout << "Sim (1) - Não (2)" << endl;

        cin >> opt;
        
        if (opt == 1){
            system("clear");
            cout << "Fico grato que esteja interessado. Me chamo Chloe. Qual o seu nome?" << endl;
            cin >> nome;
            system ("clear");
            if (nome == "Chloe"){
                cout << "Hahaha sério? Nós somos xarás então <3" << endl;
            }
            else{
                cout << "Certo, " << nome << endl;
            }
             
            cout << "Qual é a sua idade?" << endl;
            cin >> idade;
            if (idade <= 13){
                system ("clear");
                cout << "Hmmm... Você é muito novo pra conversar comigo, não? Espero que algum\nresponsável esteja com você..." << endl;
            }
            
            else if (idade > 14){
                int options;
                system ("clear");
                cout << "Tudo bem.\nEu posso fazer várias coisas pra ajudar seu sistema! O que você deseja, " << nome << "?" << endl;
                cout << "[1] - Procurar atualizações do sistema\n[2] - Abrir o navegador de internet\n[3] - Nada" << endl;
                cin >> options;
                if (options == 1){
                    cout << "Vou procurar atualizações do sistema...\nDigite sua senha, caso pedir" << endl;
                    system ("sudo apt update");
                }
                else if (options == 2){
                    system ("clear");
                    int nav;
                    cout << "Ótimo. no momento, eu suporto os seguintes navegadores:" << endl;
                    cout << "[1] - Chrome | [2] - Firefox | [3] - Brave" << endl;
                    cout << "Qual vc usa?" << endl;
                    cin >> nav;

                    if (nav == 1){
                        system ("clear");
                        cout << "Entendido. Boa navegação" << endl;
                        system ("chrome");
                    }
                    else if (nav == 2){
                        system ("clear");
                        cout << "Entendido. Boa navegação" << endl;
                        system ("firefox");
                    }
                    else if (nav == 3){
                        system ("clear");
                        cout << "Entendido. Boa navegação" << endl;
                        system ("brave-browser");
                    }
                }
            }
            
        }
        else{
            cout << "Ok, está tudo bem. Quando quiser, pode re-abrir o programa :D" << endl;
        }

        return 0;
    }
}