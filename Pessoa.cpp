#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "ClassePessoa.h"
using namespace std;
int main(){
    Pessoa funcionario;
    int lerI;
    string lerS;
    setlocale(LC_ALL, "PT_BR");

    printf( "Digite nome do funcionario: ");
    getline(cin, lerS);
    funcionario.setNome(lerS);

    cout << "Digite endereco do funcionario: ";
    getline(cin, lerS);
    funcionario.setEndereco(lerS);

    cout << "Digite idade do funcionario: ";
    cin >> lerI;
    funcionario.setIdade(lerI);

    cin.ignore();

    cout << "Digite profissao do funcionario: ";
    getline(cin, lerS);
    funcionario.setProfissao(lerS);

    funcionario.ImprimirInfo(funcionario.getNome(), funcionario.getEndereco(), funcionario.getIdade(), funcionario.getProfissao());


    
}
