#include "fornecedor.hpp"

Fornecedor::Fornecedor(){}

Fornecedor::Fornecedor(string nome, float valorCredito, float valorDivida){
	this->setNome(nome);
	this->valorCredito = valorCredito;
	this->valorDivida = valorDivida;
}

Fornecedor::Fornecedor(string nome, string endereco, float valorCredito, float valorDivida){
	this->setNome(nome);
	this->setEndereco(endereco);
	this->valorCredito = valorCredito;
	this->valorDivida = valorDivida;
}

Fornecedor::Fornecedor(string nome, string endereco, string telefone, float valorCredito, float valorDivida){
	this->setNome(nome);
	this->setEndereco(endereco);
	this->setTelefone(telefone);
	this->valorCredito = valorCredito;
	this->valorDivida = valorDivida;
}

float Fornecedor::getValorCredito(){
	return valorCredito;
}

float Fornecedor::getValorDivida(){
	return valorDivida;
}

void Fornecedor::setValorCredito(float valorCredito){
	this->valorCredito = valorCredito;
}

void Fornecedor::setValorDivida(float valorDivida){
	this->valorDivida = valorDivida;
}

float Fornecedor::obterSaldo(){
	return valorCredito - valorDivida;
}