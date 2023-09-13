#include "Projeto_ Biblio.h"

int main(void){
    testa_arquivo();
    char opcao;

    do{
        tela(1,0);
        cin >> opcao;
        cin.ignore(80, '\n');
        cout << endl;

        switch (opcao){
            case '1': cadastrar();            break;
            case '2': pesquisar_nome();       break;
            case '3': pesquisar_nascimento(); break;
            case '4': menu_remover();         break;
            case '5': menu_alterar();         break;
        }
    }
    while (opcao != '6');
    return 0;
}
