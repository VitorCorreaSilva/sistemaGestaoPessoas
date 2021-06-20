#ifndef empresa_hpp
#define empresa_hpp

#include <vector>
#include "pessoa.hpp"
#include "fornecedor.hpp"
#include "empregado.hpp"
#include "administrador.hpp"
#include "operario.hpp"
#include "vendedor.hpp"

class Empresa
{
	public:
		Empresa();
		Empresa(string nome);
		string getNome();
		void setNome(string nome);
		void adicionarPessoa(Pessoa pessoa);
		void adicionarFornecedor(Fornecedor fornecedor);
		void adicionarEmpregado(Empregado empregado);
		void adicionarAdministrador(Administrador administrador);
		void adicionarOperario(Operario operario);
		void adicionarVendedor(Vendedor vendedor);
		void listaPessoas();
	private:
		string nome;
		vector<Pessoa> pessoas;
		vector<Empregado> empregados;
		vector<Fornecedor> fornecedores;
		vector<Administrador> administradores;
		vector<Operario> operarios;
		vector<Vendedor> vendedores;
};



#endif