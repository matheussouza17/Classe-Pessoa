#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;



class Pessoa {


private:
	string nome;
	string endereco;
	int idade;
	string profissao;
public:
	void setNome(string);
	void setEndereco(string);
	void setIdade(int);
	void setProfissao(string);
	string getNome()const;
	string getEndereco()const;
	int getIdade()const;
	string getProfissao()const;
public:
	
	void ImprimirInfo(string nome, string endereco, int idade, string profissao) {
		system("cls");
		cout << "Funcion�rio(a): " << nome << endl;
		cout << "Endere�o: " << endereco << endl;
		cout << "Idade: " << idade << endl;
		cout << "Profiss�o: " << profissao << endl;
	}


};
