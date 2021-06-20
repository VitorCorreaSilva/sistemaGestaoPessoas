#include "empresa.hpp"

int main()
{
	Empresa empresa;
	Fornecedor fornecedor;
	Administrador administrador;
	Operario operario;
	Vendedor vendedor;

	string var;
	float valor;
	int codigo;
	
	int opcao = 99999;
	while(opcao != 0){
		cout << "1 - Adicionar pessoa" << endl;
		cout << "2 - Atualizar pessoa" << endl;
		cout << "3 - Relatorios" << endl;
		cout << "0 - Sair" << endl;
		cout << "Opcao: ";
		cin >> opcao;
		switch(opcao){
			case 0:
				cout << "Programa esta encerrando..." << endl;
			break;
			case 1:
				int opPessoa;
				cout << "1 - Fornecedor" << endl;
				cout << "2 - Administrador" << endl;
				cout << "3 - Operario" << endl;
				cout << "4 - Vendedor" << endl;
				cout << "Opcao: ";
				cin >> opPessoa;

				cin.clear();
				cin.sync();
				switch(opPessoa){
					case 1:
						cout << "Nome: ";
						getline(cin, var);
						fornecedor.setNome(var);

						cout << "Endereco: ";
						getline(cin, var);
						fornecedor.setEndereco(var);

						cout << "Telefone: ";
						cin >> var;
						fornecedor.setTelefone(var);

						cout << "Valor do credito: ";
						cin >> valor;
						fornecedor.setValorCredito(valor);

						cout << "Valor da divida: ";
						cin >> valor;
						fornecedor.setValorDivida(valor);

						empresa.adicionarFornecedor(fornecedor);
					break;
					case 2:
						cout << "Nome: ";
						getline(cin, var);
						administrador.setNome(var);

						cout << "Endereco: ";
						getline(cin, var);
						administrador.setEndereco(var);

						cout << "Telefone: ";
						cin >> var;
						administrador.setTelefone(var);

						cout << "Codigo do setor: ";
						cin >> codigo;
						administrador.setCodigoSetor(codigo);

						cout << "Salario base: ";
						cin >> valor;
						administrador.setSalarioBase(valor);

						cout << "Imposto: ";
						cin >> valor;
						administrador.setImposto(valor);

						cout << "Ajuda de custo: ";
						cin >> valor;
						administrador.setAjudaCusto(valor);

						empresa.adicionarAdministrador(administrador);
					break;
					case 3:
						cout << "Nome: ";
						getline(cin, var);
						operario.setNome(var);

						cout << "Endereco: ";
						getline(cin, var);
						operario.setEndereco(var);

						cout << "Telefone: ";
						cin >> var;
						operario.setTelefone(var);

						cout << "Codigo do setor: ";
						cin >> codigo;
						operario.setCodigoSetor(codigo);

						cout << "Salario base: ";
						cin >> valor;
						operario.setSalarioBase(valor);

						cout << "Imposto: ";
						cin >> valor;
						operario.setImposto(valor);

						cout << "Valor da producao: ";
						cin >> valor;
						operario.setValorProducao(valor);

						cout << "Comissao: ";
						cin >> valor;
						operario.setComissao(valor);

						empresa.adicionarOperario(operario);
					break;
					case 4:
						cout << "Nome: ";
						getline(cin, var);
						vendedor.setNome(var);

						cout << "Endereco: ";
						getline(cin, var);
						vendedor.setEndereco(var);

						cout << "Telefone: ";
						cin >> var;
						vendedor.setTelefone(var);

						cout << "Codigo do setor: ";
						cin >> codigo;
						vendedor.setCodigoSetor(codigo);

						cout << "Salario base: ";
						cin >> valor;
						vendedor.setSalarioBase(valor);

						cout << "Imposto: ";
						cin >> valor;
						vendedor.setImposto(valor);

						cout << "Valor das vendas: ";
						cin >> valor;
						vendedor.setValorVendas(valor);

						cout << "Comissao: ";
						cin >> valor;
						vendedor.setComissao(valor);

						empresa.adicionarVendedor(vendedor);
					break;
				}
			break;
			case 2:
				cout << "Opcao 2" << endl;
			break;
			case 3:
				cout << "Opcao 3" << endl;	
				empresa.listaPessoas();
			break;
			default:
				cout << "Escolha uma opcao valida" << endl;
			break;
		}
	}
	return 0;
}