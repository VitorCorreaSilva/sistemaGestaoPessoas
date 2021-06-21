#ifndef empregado_hpp
#define empregado_hpp

#include "pessoa.hpp"

class Empregado : public Pessoa{
	public:
		Empregado();
		Empregado(string nome, int codigoSetor, float salarioBase, float imposto);
		int getCodigoSetor();
		float getSalarioBase();
		float getImposto();
		void setCodigoSetor(int codigoSetor);
		void setSalarioBase(float salarioBase);
		void setImposto(float imposto);
		float virtual calcularSalario();
	private:
		int codigoSetor;
		float salarioBase;
		float imposto;
};

#endif