#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{

    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 16;
    salario = 20.000;
    altura = 1.78;
    genero = 'M';
    nome = "Franciney Batista Tavares";

    cout << fixed << setprecision(2);
    cout << "IDADE: " << idade << endl;
    cout << "SALARIO: " << salario << endl;
    cout << "ALTURA: " << altura << endl;
    cout << "GENERO: " << genero << endl;
    cout << "NOME: " << nome << endl;

    return 0;

}
