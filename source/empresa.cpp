#include "empresa.hpp"

Empresa::Empresa(){}

Empresa::Empresa(string nome){
	this->nome = nome;
}

string Empresa::getNome(){
	return nome;
}

void Empresa::setNome(string nome){
	this-> nome = nome;
}

void Empresa::adicionarPessoa(Pessoa pessoa){
	pessoas.push_back(pessoa);
}

void Empresa::adicionarFornecedor(Fornecedor fornecedor){
	adicionarPessoa(fornecedor);
	fornecedores.push_back(fornecedor);
}

void Empresa::adicionarEmpregado(Empregado empregado){
	adicionarPessoa(empregado);	
	empregados.push_back(empregado);
}

void Empresa::adicionarAdministrador(Administrador administrador){
	adicionarEmpregado(administrador);
	administradores.push_back(administrador);
}

void Empresa::adicionarOperario(Operario operario){
	adicionarEmpregado(operario);
	operarios.push_back(operario);
}

void Empresa::adicionarVendedor(Vendedor vendedor){
	adicionarEmpregado(vendedor);
	vendedores.push_back(vendedor);
}

void Empresa::listaPessoas(){
	int numPessoas = pessoas.size();
	for (int i = 0; i < numPessoas; ++i)
	{
		cout << "Nome: " << pessoas[i].getNome() << endl;
		cout << "Endereco: " << pessoas[i].getEndereco() << endl;
		cout << "Telefone: " << pessoas[i].getTelefone() << endl;
	}
}