#include "empresa.hpp"

Empresa::Empresa(){}

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
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << pessoas[i].getNome() << endl;
		cout << "Endereco: " << pessoas[i].getEndereco() << endl;
		cout << "Telefone: " << pessoas[i].getTelefone() << endl;
		cout << "-----------------------------------" << endl;
	}
}

void Empresa::listaFornecedores(){
	int numFornecedores = fornecedores.size();
	for (int i = 0; i < numFornecedores; ++i)
	{
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << fornecedores[i].getNome() << endl;
		cout << "Endereco: " << fornecedores[i].getEndereco() << endl;
		cout << "Telefone: " << fornecedores[i].getTelefone() << endl;
		cout << "Valor do Credito: " << fornecedores[i].getValorCredito() << endl;
		cout << "Valor da Divida: " << fornecedores[i].getValorDivida() << endl;
		cout << "-----------------------------------" << endl;
	}
}

void Empresa::listaEmpregados(){
	listaAdministradores();
	listaOperarios();
	listaVendedores();
}

void Empresa::listaAdministradores(){
	int num = administradores.size();
	for (int i = 0; i < num; ++i)
	{
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << administradores[i].getNome() << endl;
		cout << "Endereco: " << administradores[i].getEndereco() << endl;
		cout << "Telefone: " << administradores[i].getTelefone() << endl;
		cout << "Codigo do Setor: " << administradores[i].getCodigoSetor() << endl;
		cout << "Salario Base: " << administradores[i].getSalarioBase() << endl;
		cout << "Imposto: " << administradores[i].getImposto() << endl;
		cout << "Ajuda de custo: " << administradores[i].getAjudaCusto() << endl;
		cout << "Salario: " << administradores[i].calcularSalario() << endl;
		cout << "-----------------------------------" << endl;
	}
}

void Empresa::listaOperarios(){
	int num = operarios.size();
	for (int i = 0; i < num; ++i)
	{
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << operarios[i].getNome() << endl;
		cout << "Endereco: " << operarios[i].getEndereco() << endl;
		cout << "Telefone: " << operarios[i].getTelefone() << endl;
		cout << "Codigo do Setor: " << operarios[i].getCodigoSetor() << endl;
		cout << "Salario Base: " << operarios[i].getSalarioBase() << endl;
		cout << "Imposto: " << operarios[i].getImposto() << endl;
		cout << "Valor da Producao: " << operarios[i].getValorProducao() << endl;
		cout << "Comissao: " << operarios[i].getComissao() << endl;
		cout << "Salario: " << operarios[i].calcularSalario() << endl;
		cout << "-----------------------------------" << endl;
	}
}

void Empresa::listaVendedores(){
	int num = vendedores.size();
	for (int i = 0; i < num; ++i)
	{
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << vendedores[i].getNome() << endl;
		cout << "Endereco: " << vendedores[i].getEndereco() << endl;
		cout << "Telefone: " << vendedores[i].getTelefone() << endl;
		cout << "Codigo do Setor: " << vendedores[i].getCodigoSetor() << endl;
		cout << "Salario Base: " << vendedores[i].getSalarioBase() << endl;
		cout << "Imposto: " << vendedores[i].getImposto() << endl;
		cout << "Valor das Vendas: " << vendedores[i].getValorVendas() << endl;
		cout << "Comissao: " << vendedores[i].getComissao() << endl;
		cout << "Salario: " << vendedores[i].calcularSalario() << endl;
		cout << "-----------------------------------" << endl;
	}
}

Fornecedor Empresa::buscarFornecedor(string nome){
	int num = fornecedores.size();
	Fornecedor fornecedor;
	for (int i = 0; i < num; ++i)
	{
		if(fornecedores[i].getNome() == nome){
			fornecedor = fornecedores[i];
		}
	}
	return fornecedor;
}

Administrador Empresa::buscarAdministrador(string nome){
	int num = administradores.size();
	Administrador administrador;
	for (int i = 0; i < num; ++i)
	{
		if(administradores[i].getNome() == nome){
			administrador = administradores[i];
		}
	}
	return administrador;
}

Operario Empresa::buscarOperario(string nome){
	int num = operarios.size();
	Operario operario;
	for (int i = 0; i < num; ++i)
	{
		if(operarios[i].getNome() == nome){
			operario = operarios[i];
		}
	}
	return operario;
}

Vendedor Empresa::buscarVendedor(string nome){
	int num = vendedores.size();
	Vendedor vendedor;
	for (int i = 0; i < num; ++i)
	{
		if(vendedores[i].getNome() == nome){
			vendedor = vendedores[i];
		}
	}
	return vendedor;
}

void Empresa::excluirPessoa(string nome){
	int num = pessoas.size();
	for (int i = 0; i < num; ++i)
	{
		if(pessoas[i].getNome() == nome){
			pessoas.erase(pessoas.begin() + i);
		}
	}
}

void Empresa::excluirEmpregado(string nome){
	int num = empregados.size();
	for (int i = 0; i < num; ++i)
	{
		if(empregados[i].getNome() == nome){
			empregados.erase(empregados.begin() + i);
		}
	}
}

void Empresa::excluirFornecedor(string nome){
	int num = fornecedores.size();
	for (int i = 0; i < num; ++i)
	{
		if(fornecedores[i].getNome() == nome){
			fornecedores.erase(fornecedores.begin() + i);
		}
	}
}

void Empresa::excluirAdministrador(string nome){
	int num = administradores.size();
	for (int i = 0; i < num; ++i)
	{
		if(administradores[i].getNome() == nome){
			administradores.erase(administradores.begin() + i);
		}
	}
}

void Empresa::excluirOperario(string nome){
	int num = operarios.size();
	for (int i = 0; i < num; ++i)
	{
		if(operarios[i].getNome() == nome){
			operarios.erase(operarios.begin() + i);
		}
	}
}

void Empresa::excluirVendedor(string nome){
	int num = vendedores.size();
	for (int i = 0; i < num; ++i)
	{
		if(vendedores[i].getNome() == nome){
			vendedores.erase(vendedores.begin() + i);
		}
	}
}

void Empresa::atualizarFornecedor(Fornecedor fornecedor, string nome){
	excluirPessoa(nome);
	excluirEmpregado(nome);
	excluirFornecedor(nome);
	adicionarFornecedor(fornecedor);
}

void Empresa::atualizarAdministrador(Administrador administrador, string nome){
	excluirPessoa(nome);
	excluirEmpregado(nome);
	excluirAdministrador(nome);
	adicionarAdministrador(administrador);
}
void Empresa::atualizarOperario(Operario operario, string nome){
	excluirPessoa(nome);
	excluirEmpregado(nome);
	excluirOperario(nome);
	adicionarOperario(operario);
}

void Empresa::atualizarVendedor(Vendedor vendedor, string nome){
	excluirPessoa(nome);
	excluirEmpregado(nome);
	excluirVendedor(nome);
	adicionarVendedor(vendedor);
}