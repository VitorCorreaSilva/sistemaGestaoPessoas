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
	int cont;
	string nomeAntigo;
	
	int opcao = 99999;
	while(opcao != 0){
		cout << "-------------------------" << endl;
		cout << "1 - Adicionar pessoa" << endl;
		cout << "2 - Atualizar pessoa" << endl;
		cout << "3 - Relatorios" << endl;
		cout << "0 - Sair" << endl;
		cout << "Opcao: ";
		cin >> opcao;
		cout << "-------------------------" << endl;
		switch(opcao){
			case 0:
				cout << "Programa esta encerrando..." << endl;
			break;
			case 1:
				int opPessoa;
				cout << "-------------------------" << endl;
				cout << "1 - Fornecedor" << endl;
				cout << "2 - Administrador" << endl;
				cout << "3 - Operario" << endl;
				cout << "4 - Vendedor" << endl;
				cout << "Opcao: ";
				cin >> opPessoa;
				cout << "-------------------------" << endl;
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
				int at;
				cout << "-------------------------" << endl;
				cout << "1 - Fornecedor" << endl;
				cout << "2 - Administrador" << endl;
				cout << "3 - Operario" << endl;
				cout << "4 - Vendedor" << endl;
				cout << "Opcao: ";
				cin >> at;
				cout << "-------------------------" << endl;
				cin.clear();
				cin.sync();
				switch(at){
					case 1:
						cont = 0;
						cout << "Nome do fornecedor: ";
						getline(cin, var);
						fornecedor = empresa.buscarFornecedor(var);

						nomeAntigo = fornecedor.getNome();
						cout << "Nome: " << fornecedor.getNome() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo nome: ";
							getline(cin, var);
							fornecedor.setNome(var);
						}
						
						cout << "Endereco: " << fornecedor.getEndereco() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo endereco: ";
							getline(cin, var);
							fornecedor.setEndereco(var);
						}

						cout << "Telefone: " << fornecedor.getTelefone() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo telefone: ";
							cin >> var;
							fornecedor.setTelefone(var);
						}

						cout << "Valor do credito: " << fornecedor.getValorCredito() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cout << "Novo valor do credito: ";
							cin >> valor;
							fornecedor.setValorCredito(valor);
						}

						cout << "Valor da divida: " << fornecedor.getValorDivida() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cout << "Novo valor da divida: ";
							cin >> valor;
							fornecedor.setValorDivida(valor);
							}

						if(cont > 0){
							empresa.atualizarFornecedor(fornecedor, nomeAntigo);
						}
					break;
					case 2:
						cont = 0;
						cout << "Nome do administrador: ";
						getline(cin, var);
						administrador = empresa.buscarAdministrador(var);

						nomeAntigo = administrador.getNome();
						cout << "Nome: " << administrador.getNome() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo nome: ";
							getline(cin, var);
							administrador.setNome(var);
						}
						
						cout << "Endereco: " << administrador.getEndereco() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo endereco: ";
							getline(cin, var);
							administrador.setEndereco(var);
						}

						cout << "Telefone: " << administrador.getTelefone() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo telefone: ";
							cin >> var;
							administrador.setTelefone(var);
						}

						cout << "Codigo do setor: " << administrador.getCodigoSetor() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo codigo do setor: ";
							cin >> codigo;
							administrador.setCodigoSetor(codigo);
						}

						cout << "Codigo do setor: " << administrador.getSalarioBase() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo salario base: ";
							cin >> valor;
							administrador.setSalarioBase(valor);
						}

						cout << "Imposto: " << administrador.getImposto() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo imposto: ";
							cin >> valor;
							administrador.setImposto(valor);
						}

						cout << "Ajuda de custo: " << administrador.getAjudaCusto() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Nova ajuda de custo: ";
							cin >> valor;
							administrador.setAjudaCusto(valor);
						}

						if(cont > 0){
							empresa.atualizarAdministrador(administrador, nomeAntigo);
						}
					break;
					case 3:
						cont = 0;
						cout << "Nome do operario: ";
						getline(cin, var);
						operario = empresa.buscarOperario(var);

						nomeAntigo = operario.getNome();
						cout << "Nome: " << operario.getNome() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo nome: ";
							getline(cin, var);
							operario.setNome(var);
						}
						
						cout << "Endereco: " << operario.getEndereco() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo endereco: ";
							getline(cin, var);
							operario.setEndereco(var);
						}

						cout << "Telefone: " << operario.getTelefone() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo telefone: ";
							cin >> var;
							operario.setTelefone(var);
						}

						cout << "Codigo do setor: " << operario.getCodigoSetor() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo codigo do setor: ";
							cin >> codigo;
							operario.setCodigoSetor(codigo);
						}

						cout << "Codigo do setor: " << operario.getSalarioBase() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo salario base: ";
							cin >> valor;
							operario.setSalarioBase(valor);
						}

						cout << "Imposto: " << operario.getImposto() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo imposto: ";
							cin >> valor;
							operario.setImposto(valor);
						}

						cout << "Valor de vendas: " << operario.getValorProducao() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo valor das vendas: ";
							cin >> valor;
							operario.setValorProducao(valor);
						}

						cout << "Comissao: " << operario.getComissao() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Comissao: ";
							cin >> valor;
							operario.setComissao(valor);
						}

						if(cont > 0){
							empresa.atualizarOperario(operario, nomeAntigo);
						}
					break;
					case 4:
						cont = 0;
						cout << "Nome do vendedor: ";
						getline(cin, var);
						vendedor = empresa.buscarVendedor(var);

						nomeAntigo = vendedor.getNome();
						cout << "Nome: " << vendedor.getNome() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo nome: ";
							getline(cin, var);
							vendedor.setNome(var);
						}
						
						cout << "Endereco: " << vendedor.getEndereco() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo endereco: ";
							getline(cin, var);
							vendedor.setEndereco(var);
						}

						cout << "Telefone: " << vendedor.getTelefone() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo telefone: ";
							cin >> var;
							vendedor.setTelefone(var);
						}

						cout << "Codigo do setor: " << vendedor.getCodigoSetor() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo codigo do setor: ";
							cin >> codigo;
							vendedor.setCodigoSetor(codigo);
						}

						cout << "Codigo do setor: " << vendedor.getSalarioBase() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo salario base: ";
							cin >> valor;
							vendedor.setSalarioBase(valor);
						}

						cout << "Imposto: " << vendedor.getImposto() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo imposto: ";
							cin >> valor;
							vendedor.setImposto(valor);
						}

						cout << "Valor de vendas: " << vendedor.getValorVendas() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Novo valor das vendas: ";
							cin >> valor;
							vendedor.setValorVendas(valor);
						}

						cout << "Comissao: " << vendedor.getComissao() << endl;
						cout << "(1)Atualizar (0)Continuar: ";
						cin >> codigo;
						if(codigo == 1){
							cont++;
							cin.sync();
							cin.clear();
							cout << "Comissao: ";
							cin >> valor;
							vendedor.setComissao(valor);
						}

						if(cont > 0){
							empresa.atualizarVendedor(vendedor, nomeAntigo);
						}
					break;
					default:
						cout << "Opcao invalida" << endl;
					break;
				}
			break;
			case 3:
				int rel;
				cout << "-------------------------" << endl;
				cout << "1 - Pessoas" << endl;
				cout << "2 - Fornecedores" << endl;
				cout << "3 - Empregados" << endl;
				cout << "Opcao: ";
				cin >> rel;
				cout << "-------------------------" << endl;
				switch(rel){
					case 1:
						cout << endl ;
						empresa.listaPessoas();
						cout << endl ;
					break;
					case 2:
						cout << endl ;
						empresa.listaFornecedores();
						cout << endl ;
					break;
					case 3:
						int emp;
						cout << "-------------------------" << endl;
						cout << "1 - Todos" << endl;
						cout << "2 - Administradores" << endl;
						cout << "3 - Operarios" << endl;
						cout << "4 - Vendedores" << endl;
						cout << "Opcao: ";
						cin >> emp;
						cout << "-------------------------" << endl;
						switch(emp){
							case 1:
								cout << endl ;
								empresa.listaEmpregados();
								cout << endl ;
							break;
							case 2:
								cout << endl ;
								empresa.listaAdministradores();
								cout << endl ;
							break;
							case 3:
								cout << endl ;
								empresa.listaOperarios();
								cout << endl ;
							break;
							case 4:
								cout << endl ;
								empresa.listaVendedores();
								cout << endl ;
							break;
							default:
								cout << "Opcao invalida" << endl;
							break;
						}
					break;
					default:
						cout << "Opcao invalida" << endl;
					break;
				}
			break;
			default:
				cout << "Escolha uma opcao valida" << endl;
			break;
		}
	}
	return 0;
}