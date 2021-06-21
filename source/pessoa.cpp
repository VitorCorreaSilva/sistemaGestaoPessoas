#include "pessoa.hpp"

Pessoa::Pessoa(){}

Pessoa::Pessoa(string nome){
	this->nome = nome;
}

Pessoa::Pessoa(string nome, string endereco){
	this->nome = nome;
	this->endereco = endereco;
}

Pessoa::Pessoa(string nome, string endereco, string telefone){
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
}

string Pessoa::getNome(){
	return nome;
}

string Pessoa::getEndereco(){
	return endereco;
}

string Pessoa::getTelefone(){
	return telefone;
}

void Pessoa::setNome(string nome){
	this->nome = nome;
}

void Pessoa::setEndereco(string endereco){
	this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone){
	this->telefone = telefone;
}