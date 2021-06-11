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

	cout << "== Teste fornecedor f2 iniciado pelo construtor com 3 parametros ==" << endl;
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
