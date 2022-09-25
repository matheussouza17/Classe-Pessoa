#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "ClassePessoa.h"

using namespace std;

void Pessoa::setNome(string aux) {
	nome = aux;
}

void Pessoa::setEndereco(string aux){
	endereco = aux;
}

void Pessoa::setIdade(int aux) {
	idade = aux;
}

void Pessoa::setProfissao(string aux) {
	profissao = aux;
}

string Pessoa::getNome() const {
	return nome;
}

string Pessoa::getEndereco() const {
	return endereco;
}

int Pessoa::getIdade() const {
	return idade;
}

string Pessoa::getProfissao() const {
	return profissao;
}
