#include <iostream>
using namespace std;

struct Funcionario
{
    int prontuario;
    string nome;
    double salario;
    struct Funcionario *prox;
};

Funcionario* init()
{
    return NULL;
}

int main(int argc, char** argv)
{
    int resp;
    Funcionario *lista;
    lista = init();

    do
    {
        cout << "MENU" << endl;
        cout << "0. Sair" << endl;
        cout << "1. Incluir" << endl;
        cout << "2. Excluir" << endl;
        cout << "3. Pesquisar" << endl;
        cout << "4. Listar" << endl;
        cout << "Digite a opção desejada: ";
        cin >> resp;

        if (resp < 0 || resp > 4)
        {
            cout << "Escolha uma opção válida de 0 a 4" << endl;
        }
    } while (resp < 0 || resp > 4);

    switch(resp)
    {
        case 1:
            cout << endl;
            cout << "INCLUIR FUNCIONÁRIO" << endl;
            break;
        case 2:
            cout << endl;
            cout << "EXCLUIR FUNCIONÁRIO" << endl;
            break;
        case 3:
            cout << endl;
            cout << "PESQUISAR FUNCIONÁRIO" << endl;
            break;
        case 4:
            cout << endl;
            cout << "LISTAR FUNCIONÁRIOS" << endl;
            break;
        default:
            break;
    }

    return 0;
}