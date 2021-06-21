#ifndef fornecedor_hpp
#define fornecedor_hpp

#include "pessoa.hpp"

class Fornecedor : public Pessoa{
	public:
		Fornecedor();
		Fornecedor(string nome, float valorCredito, float valorDivida);
		Fornecedor(string nome, string endereco, float valorCredito, float valorDivida);
		Fornecedor(string nome, string endereco, string telefone, float valorCredito, float valorDivida);
		float getValorCredito();
		float getValorDivida();
		void setValorCredito(float valorCredito);
		void setValorDivida(float valorDivida);
		float obterSaldo();
	private:
		float valorCredito;
		float valorDivida;
};

#endif