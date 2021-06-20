#include "operario.hpp"

Operario::Operario(){}

Operario::Operario(string nome, int codigoSetor, float salarioBase, float imposto, float valorProducao, float comissao){
	this->setNome(nome);
	this->setCodigoSetor(codigoSetor);
	this->setSalarioBase(salarioBase);
	this->setImposto(imposto);
	this->valorProducao = valorProducao;
	this->comissao = comissao;
}

float Operario::getValorProducao(){
	return valorProducao;
}

float Operario::getComissao(){
	return comissao;
}

void Operario::setValorProducao(float valorProducao){
	this->valorProducao = valorProducao;
}

void Operario::setComissao(float comissao){
	this->comissao = comissao;
}

float Operario::calcularSalario(){
	float salario = this->getSalarioBase() - (this->getSalarioBase() * (this->getImposto()/100));
	return salario + (valorProducao * (comissao/100));
}