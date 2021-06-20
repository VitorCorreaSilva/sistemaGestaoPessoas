#ifndef administrador_hpp
#define administrador_hpp

#include "empregado.hpp"

class Administrador : public Empregado
{
	public:
		Administrador();
		Administrador(string nome, int codigoSetor, float salarioBase, float imposto, float ajudaCusto);
		float getAjudaCusto();
		void setAjudaCusto(float ajudaCusto);
		float calcularSalario();
	private:
		float ajudaCusto;
};


#endif