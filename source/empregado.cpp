#include "empregado.hpp"

Empregado::Empregado(){}

Empregado::Empregado(string nome, int codigoSetor, float salarioBase, float imposto){
	this->setNome(nome);
	this->codigoSetor = codigoSetor;
	this->salarioBase = salarioBase;
	this->imposto = imposto;
}

int Empregado::getCodigoSetor(){
	return codigoSetor;
}

float Empregado::getSalarioBase(){
	return salarioBase;
}

float Empregado::getImposto(){
	return imposto;
}

void Empregado::setCodigoSetor(int codigoSetor){
	this->codigoSetor = codigoSetor;
}

void Empregado::setSalarioBase(float salarioBase){
	this->salarioBase = salarioBase;
}

void Empregado::setImposto(float imposto){
	this->imposto = imposto;
}

float Empregado::calcularSalario(){
	return salarioBase - (salarioBase * (imposto/100));
}