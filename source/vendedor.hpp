#ifndef vendedor_hpp
#define vendedor_hpp

#include "empregado.hpp"

class Vendedor : public Empregado
{
	public:
		Vendedor();
		Vendedor(string nome, int codigoSetor, float salarioBase, float imposto, float valorVendas, float comissao);
		float getValorVendas();
		float getComissao();
		void setValorVendas(float valorVendas);
		void setComissao(float comissao);
		float calcularSalario();
	private:
		float valorVendas;
		float comissao;
};

#endif