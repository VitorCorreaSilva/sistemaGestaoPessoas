#ifndef operario_hpp
#define operario_hpp

#include "empregado.hpp"

class Operario : public Empregado
{
	public:
		Operario();
		Operario(string nome, int codigoSetor, float salarioBase, float imposto, float valorProducao, float comissao);
		float getValorProducao();
		float getComissao();
		void setValorProducao(float valorProducao);
		void setComissao(float comissao);
		float calcularSalario();
	private:
		float valorProducao;
		float comissao;
};

#endif