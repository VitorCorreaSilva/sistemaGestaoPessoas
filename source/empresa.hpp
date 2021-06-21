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
		void adicionarPessoa(Pessoa pessoa);
		void adicionarFornecedor(Fornecedor fornecedor);
		void adicionarEmpregado(Empregado empregado);
		void adicionarAdministrador(Administrador administrador);
		void adicionarOperario(Operario operario);
		void adicionarVendedor(Vendedor vendedor);
		void listaPessoas();
		void listaFornecedores();
		void listaEmpregados();
		void listaAdministradores();
		void listaOperarios();
		void listaVendedores();
		Fornecedor buscarFornecedor(string nome);
		Administrador buscarAdministrador(string nome);
		Operario buscarOperario(string nome);
		Vendedor buscarVendedor(string nome);
		void excluirPessoa(string nome);
		void excluirEmpregado(string nome);
		void excluirFornecedor(string nome);
		void excluirAdministrador(string nome);
		void excluirOperario(string nome);
		void excluirVendedor(string nome);
		void atualizarFornecedor(Fornecedor fornecedor, string nome);
		void atualizarAdministrador(Administrador administrador, string nome);
		void atualizarOperario(Operario operario, string nome);
		void atualizarVendedor(Vendedor vendedor, string nome);
	private:
		vector<Pessoa> pessoas;
		vector<Empregado> empregados;
		vector<Fornecedor> fornecedores;
		vector<Administrador> administradores;
		vector<Operario> operarios;
		vector<Vendedor> vendedores;
};

#endif