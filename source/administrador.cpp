#include "administrador.hpp"

Administrador::Administrador(){}

Administrador::Administrador(string nome, int codigoSetor, float salarioBase, float imposto, float ajudaCusto){
	this->setNome(nome);
	this->setCodigoSetor(codigoSetor);
	this->setSalarioBase(salarioBase);
	this->setImposto(imposto);
	this->ajudaCusto = ajudaCusto;
}

float Administrador::getAjudaCusto(){
	return ajudaCusto;
}

void Administrador::setAjudaCusto(float ajudaCusto){
	this->ajudaCusto = ajudaCusto;
}

float Administrador::calcularSalario(){
	float salario = this->getSalarioBase() - (this->getSalarioBase() * (this->getImposto()/100));
	return salario + ajudaCusto;
}