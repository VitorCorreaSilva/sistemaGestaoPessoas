#ifndef pessoa_hpp
#define pessoa_hpp

#include <iostream>
using namespace std;

class Pessoa{
	public:
		Pessoa();
		Pessoa(string nome);
		Pessoa(string nome, string endereco);
		Pessoa(string nome, string endereco, string telefone);
		string getNome();
		string getEndereco();
		string getTelefone();
		void setNome(string nome);
		void setEndereco(string endereco);
		void setTelefone(string telefone);
	private:
		string nome;
		string endereco;
		string telefone;
};

#endif