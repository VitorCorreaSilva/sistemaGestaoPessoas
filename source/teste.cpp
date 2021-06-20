#include "teste.hpp"

Teste::Teste(){}

void Teste::fornecedor(){
	Fornecedor f1;
	Fornecedor f2("Vitor", 20000.65, 5430.56);
	Fornecedor f3("Joao", "Rua 1", 34424.54, 29857.45);
	Fornecedor f4("Maria", "Rua B", "51984763546", 14987.34, 23476.34);

	cout << "== Teste com fornecedor f1 iniciado pelo construtor sem parametros =="  << endl;
	cout << "Nome: " << f1.getNome() << endl;
	cout << "Endereco: " << f1.getEndereco() << endl;
	cout << "Telefone: " << f1.getTelefone() << endl;
	cout << "Valor do Credito: " << f1.getValorCredito() << endl;
	cout << "Valor da Divida: " << f1.getValorDivida() << endl;
	cout << "Saldo: " << f1.obterSaldo() << endl;
	cout << "====================================================================="  << endl;

	f1.setNome("Aurelio");
	f1.setEndereco("Rua Pio XII");
	f1.setTelefone("55987655678");
	f1.setValorCredito(523343.34);
	f1.setValorDivida(232434.23);

	cout << "== Teste com fornecedor f1 setando atributos pelos modificadores =="  << endl;
	cout << "Nome: " << f1.getNome() << endl;
	cout << "Endereco: " << f1.getEndereco() << endl;
	cout << "Telefone: " << f1.getTelefone() << endl;
	cout << "Valor do Credito: " << f1.getValorCredito() << endl;
	cout << "Valor da Divida: " << f1.getValorDivida() << endl;
	cout << "Saldo: " << f1.obterSaldo() << endl;
	cout << "==================================================================="  << endl;

	cout << "== Teste fornecedor f2 iniciado pelo construtor com 2 parametros ==" << endl;
	cout << "Nome: " << f2.getNome() << endl;
	cout << "Endereco: " << f2.getEndereco() << endl;
	cout << "Telefone: " << f2.getTelefone() << endl;
	cout << "Valor do Credito: " << f2.getValorCredito() << endl;
	cout << "Valor da Divida: " << f2.getValorDivida() << endl;
	cout << "Saldo: " << f2.obterSaldo() << endl;
	cout << "==================================================================="  << endl;

	cout << "== Teste fornecedor f3 iniciado pelo construtor com 3 parametros =="  << endl;
	cout << "Nome: " << f3.getNome() << endl;
	cout << "Endereco: " << f3.getEndereco() << endl;
	cout << "Telefone: " << f3.getTelefone() << endl;
	cout << "Valor do Credito: " << f3.getValorCredito() << endl;
	cout << "Valor da Divida: " << f3.getValorDivida() << endl;
	cout << "Saldo: " << f3.obterSaldo() << endl;
	cout << "==================================================================="  << endl;

	cout << "== Teste fornecedor f4 iniciado pelo construtor com 4 parametros =="  << endl;
	cout << "Nome: " << f4.getNome() << endl;
	cout << "Endereco: " << f4.getEndereco() << endl;
	cout << "Telefone: " << f4.getTelefone() << endl;
	cout << "Valor do Credito: " << f4.getValorCredito() << endl;
	cout << "Valor da Divida: " << f4.getValorDivida() << endl;
	cout << "Saldo: " << f4.obterSaldo() << endl;
	cout << "==================================================================="  << endl;
}

void Teste::empregado(){
	Empregado e1;
	Empregado e2("Vitor", 2, 1000, 10);

	cout << "== Teste com empregado e1 iniciado pelo construtor sem parametros =="  << endl;
	cout << "Nome: " << e1.getNome() << endl;
	cout << "Endereco: " << e1.getEndereco() << endl;
	cout << "Telefone: " << e1.getTelefone() << endl;
	cout << "Codigo do setor: " << e1.getCodigoSetor() << endl;
	cout << "Salario Base: " << e1.getSalarioBase() << endl;
	cout << "Imposto: " << e1.getImposto() << "%" <<endl;
	cout << "Salario: " << e1.calcularSalario() << endl;
	cout << "====================================================================="  << endl;

	e1.setNome("Aurelio");
	e1.setEndereco("Rua Pio XII");
	e1.setTelefone("55987655678");
	e1.setCodigoSetor(1);
	e1.setSalarioBase(2000);
	e1.setImposto(20);

	cout << "== Teste com empregado e1 setando atributos pelos modificadores =="  << endl;
	cout << "Nome: " << e1.getNome() << endl;
	cout << "Endereco: " << e1.getEndereco() << endl;
	cout << "Telefone: " << e1.getTelefone() << endl;
	cout << "Codigo do setor: " << e1.getCodigoSetor() << endl;
	cout << "Salario Base: " << e1.getSalarioBase() << endl;
	cout << "Imposto: " << e1.getImposto() << "%" <<endl;
	cout << "Salario: " << e1.calcularSalario() << endl;
	cout << "==================================================================="  << endl;

	cout << "== Teste empregado e2 iniciado pelo construtor com parametros ==" << endl;
	cout << "Nome: " << e2.getNome() << endl;
	cout << "Endereco: " << e2.getEndereco() << endl;
	cout << "Telefone: " << e2.getTelefone() << endl;
	cout << "Codigo do setor: " << e2.getCodigoSetor() << endl;
	cout << "Salario Base: " << e2.getSalarioBase() << endl;
	cout << "Imposto: " << e2.getImposto() << "%" <<endl;
	cout << "Salario: " << e2.calcularSalario() << endl;
	cout << "==================================================================="  << endl;
}

void Teste::administrador(){
	Administrador a1;
	Administrador a2("Vitor", 2, 1000, 10, 900);

	cout << "== Teste com administrador a1 iniciado pelo construtor sem parametros =="  << endl;
	cout << "Nome: " << a1.getNome() << endl;
	cout << "Endereco: " << a1.getEndereco() << endl;
	cout << "Telefone: " << a1.getTelefone() << endl;
	cout << "Codigo do setor: " << a1.getCodigoSetor() << endl;
	cout << "Salario Base: " << a1.getSalarioBase() << endl;
	cout << "Imposto: " << a1.getImposto() << "%" <<endl;
	cout << "Ajuda de custo: " << a1.getAjudaCusto() << endl;
	cout << "Salario: " << a1.calcularSalario() << endl;
	cout << "====================================================================="  << endl;

	a1.setNome("Aurelio");
	a1.setEndereco("Rua Pio XII");
	a1.setTelefone("55987655678");
	a1.setCodigoSetor(1);
	a1.setSalarioBase(2000);
	a1.setImposto(20);
	a1.setAjudaCusto(800);

	cout << "== Teste com administrador a1 setando atributos pelos modificadores =="  << endl;
	cout << "Nome: " << a1.getNome() << endl;
	cout << "Endereco: " << a1.getEndereco() << endl;
	cout << "Telefone: " << a1.getTelefone() << endl;
	cout << "Codigo do setor: " << a1.getCodigoSetor() << endl;
	cout << "Salario Base: " << a1.getSalarioBase() << endl;
	cout << "Imposto: " << a1.getImposto() << "%" <<endl;
	cout << "Ajuda de custo: " << a1.getAjudaCusto() << endl;
	cout << "Salario: " << a1.calcularSalario() << endl;
	cout << "==================================================================="  << endl;

	cout << "== Teste administrador a2 iniciado pelo construtor com parametros ==" << endl;
	cout << "Nome: " << a2.getNome() << endl;
	cout << "Endereco: " << a2.getEndereco() << endl;
	cout << "Telefone: " << a2.getTelefone() << endl;
	cout << "Codigo do setor: " << a2.getCodigoSetor() << endl;
	cout << "Salario Base: " << a2.getSalarioBase() << endl;
	cout << "Imposto: " << a2.getImposto() << "%" <<endl;
	cout << "Ajuda de custo: " << a2.getAjudaCusto() << endl;
	cout << "Salario: " << a2.calcularSalario() << endl;
	cout << "==================================================================="  << endl;
}

void Teste::operario(){
	Operario o1;
	Operario o2("Vitor", 2, 1000, 10, 2000, 40);

	cout << "== Teste com operario o1 iniciado pelo construtor sem parametros =="  << endl;
	cout << "Nome: " << o1.getNome() << endl;
	cout << "Endereco: " << o1.getEndereco() << endl;
	cout << "Telefone: " << o1.getTelefone() << endl;
	cout << "Codigo do setor: " << o1.getCodigoSetor() << endl;
	cout << "Salario Base: " << o1.getSalarioBase() << endl;
	cout << "Imposto: " << o1.getImposto() << "%" <<endl;
	cout << "Valor da Producao: " << o1.getValorProducao() << endl;
	cout << "Comissao: " << o1.getComissao() << "%" <<endl;
	cout << "Salario: " << o1.calcularSalario() << endl;
	cout << "====================================================================="  << endl;

	o1.setNome("Aurelio");
	o1.setEndereco("Rua Pio XII");
	o1.setTelefone("55987655678");
	o1.setCodigoSetor(1);
	o1.setSalarioBase(2000);
	o1.setImposto(20);
	o1.setValorProducao(10000);
	o1.setComissao(60);

	cout << "== Teste com operario o1 setando atributos pelos modificadores =="  << endl;
	cout << "Nome: " << o1.getNome() << endl;
	cout << "Endereco: " << o1.getEndereco() << endl;
	cout << "Telefone: " << o1.getTelefone() << endl;
	cout << "Codigo do setor: " << o1.getCodigoSetor() << endl;
	cout << "Salario Base: " << o1.getSalarioBase() << endl;
	cout << "Imposto: " << o1.getImposto() << "%" <<endl;
	cout << "Valor da Producao: " << o1.getValorProducao() << endl;
	cout << "Comissao: " << o1.getComissao() << "%" <<endl;
	cout << "Salario: " << o1.calcularSalario() << endl;
	cout << "==================================================================="  << endl;

	cout << "== Teste operario o2 iniciado pelo construtor com parametros ==" << endl;
	cout << "Nome: " << o2.getNome() << endl;
	cout << "Endereco: " << o2.getEndereco() << endl;
	cout << "Telefone: " << o2.getTelefone() << endl;
	cout << "Codigo do setor: " << o2.getCodigoSetor() << endl;
	cout << "Salario Base: " << o2.getSalarioBase() << endl;
	cout << "Imposto: " << o2.getImposto() << "%" <<endl;
	cout << "Valor da Producao: " << o2.getValorProducao() << endl;
	cout << "Comissao: " << o2.getComissao() << "%" <<endl;
	cout << "Salario: " << o2.calcularSalario() << endl;
	cout << "==================================================================="  << endl;
}

void Teste::vendedor(){
	Vendedor v1;
	Vendedor v2("Vitor", 2, 1000, 10, 2000, 40);

	cout << "== Teste com vendedor v1 iniciado pelo construtor sem parametros =="  << endl;
	cout << "Nome: " << v1.getNome() << endl;
	cout << "Endereco: " << v1.getEndereco() << endl;
	cout << "Telefone: " << v1.getTelefone() << endl;
	cout << "Codigo do setor: " << v1.getCodigoSetor() << endl;
	cout << "Salario Base: " << v1.getSalarioBase() << endl;
	cout << "Imposto: " << v1.getImposto() << "%" <<endl;
	cout << "Valor das vendas: " << v1.getValorVendas() << endl;
	cout << "Comissao: " << v1.getComissao() << "%" <<endl;
	cout << "Salario: " << v1.calcularSalario() << endl;
	cout << "====================================================================="  << endl;

	v1.setNome("Aurelio");
	v1.setEndereco("Rua Pio XII");
	v1.setTelefone("55987655678");
	v1.setCodigoSetor(1);
	v1.setSalarioBase(2000);
	v1.setImposto(20);
	v1.setValorVendas(10000);
	v1.setComissao(60);

	cout << "== Teste com vendedor v1 setando atributos pelos modificadores =="  << endl;
	cout << "Nome: " << v1.getNome() << endl;
	cout << "Endereco: " << v1.getEndereco() << endl;
	cout << "Telefone: " << v1.getTelefone() << endl;
	cout << "Codigo do setor: " << v1.getCodigoSetor() << endl;
	cout << "Salario Base: " << v1.getSalarioBase() << endl;
	cout << "Imposto: " << v1.getImposto() << "%" <<endl;
	cout << "Valor das vendas: " << v1.getValorVendas() << endl;
	cout << "Comissao: " << v1.getComissao() << "%" <<endl;
	cout << "Salario: " << v1.calcularSalario() << endl;
	cout << "==================================================================="  << endl;

	cout << "== Teste vendedor v2 iniciado pelo construtor com parametros ==" << endl;
	cout << "Nome: " << v2.getNome() << endl;
	cout << "Endereco: " << v2.getEndereco() << endl;
	cout << "Telefone: " << v2.getTelefone() << endl;
	cout << "Codigo do setor: " << v2.getCodigoSetor() << endl;
	cout << "Salario Base: " << v2.getSalarioBase() << endl;
	cout << "Imposto: " << v2.getImposto() << "%" <<endl;
	cout << "Valor das vendas: " << v2.getValorVendas() << endl;
	cout << "Comissao: " << v2.getComissao() << "%" <<endl;
	cout << "Salario: " << v2.calcularSalario() << endl;
	cout << "==================================================================="  << endl;
}