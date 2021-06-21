#include "vendedor.hpp"

Vendedor::Vendedor(){}

Vendedor::Vendedor(string nome, int codigoSetor, float salarioBase, float imposto, float valorVendas, float comissao){
	this->setNome(nome);
	this->setCodigoSetor(codigoSetor);
	this->setSalarioBase(salarioBase);
	this->setImposto(imposto);
	this->valorVendas = valorVendas;
	this->comissao = comissao;
}

float Vendedor::getValorVendas(){
	return valorVendas;
}

float Vendedor::getComissao(){
	return comissao;
}

void Vendedor::setValorVendas(float valorVendas){
	this->valorVendas = valorVendas;
}

void Vendedor::setComissao(float comissao){
	this->comissao = comissao;
}

float Vendedor::calcularSalario(){
	float salario = this->getSalarioBase() - (this->getSalarioBase() * (this->getImposto()/100));
	return salario + (valorVendas * (comissao/100));
}