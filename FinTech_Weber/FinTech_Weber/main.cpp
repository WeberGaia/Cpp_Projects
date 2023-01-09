#include <iostream>
#include "fintech_def.hpp"
#include "Titular.hpp"

/*void ExibeSaldo(const Conta& conta)
{
	Conta umaContaDesnecessaria("Alessandra", "123.456.789-10", "0123", "789456-9");

	std::cout << "O saldo da conta é: " << conta.RecuperaSaldo() << std::endl;
}*/


int main() {
	/*Conta minhaConta;
	minhaConta.Cabecalho();
	//minhaConta.Dados("Weber", "123.456.789-10", "0123", "789456-9");
	std::cout << "Seja bem vindo(a) " << minhaConta.RecuperaNome() << std::endl;
	std::cout << "Ag: " << minhaConta.RecuperaAg() << "C/C: " << minhaConta.RecuperaCC() << std::endl;
	//minhaConta.saldo(800);
	std::cout << "O saldo da conta eh R$ " << minhaConta.RecuperaSaldo() << std::endl;
	minhaConta.valorDeposito(800);
	//minhaConta.saldo(800);
	std::cout << "O saldo da conta apos o deposito eh R$ " << minhaConta.RecuperaSaldo() << std::endl;
	minhaConta.valorSaque(300);
	std::cout << "O saldo da conta apos o saque eh R$ " << minhaConta.RecuperaSaldo() << std::endl;*/
	
	/*Conta minhaConta("Weber", "123.456.789-10", "0123", "789456-9");
	std::cout << "Conta criada. Seja bem vindo(a) " << minhaConta.RecuperaNome() << std::endl;
	
	//ExibeSaldo(minhaConta);
	Conta minhaOutraConta("Alessandra", "123.456.789-10", "0123", "789456-9");
	std::cout << "Conta criada. Seja bem vindo(a) " << minhaOutraConta.RecuperaNome() << std::endl;

	std::cout << "Numero de contas: " << Conta::recuperaNumeroDeContas();	//Utilizamos Conta::funcao() para pegar o número total de contas. Colocamos ponto(.) quando estamos acessando um obj. ::-> namespace*/
	Cabecalho();
	Conta minhaConta(Titular("123.456.789-10","Weber de Souza Gaia Filho"),"1230","45678-5");
	
	minhaConta.RecuperaAg();

}

/*
1) Criamos um arquivo simples para demonstrar as funcionalidades revisadas em aula.
2) Criamos dois arquivos: .cpp e .hpp, sendo o primeiro o de implementação e o segundo de definição
3) Após a criação de (2), para que a implementação seja impressa em tela, devemos declarar a classe + nome do objeto
	3.1) A partir do objeto, chamamos as funções presentes no arquivo de implementação
4) Criamos variáveis privadas para que sejam definidas -> Método setter.
5) Recuperamos (4) com o método getter, ou seja, utilizamos funções para resgatar esses valores
OBS: Para definir o conteúdo de um atributo, SEMPRE devemos utilizar uma função
6) Criamos as funções depósito e saque;
7) Utilizamos construtores para inicializar as variáveis privadas. Substituímos uma função por um construtor
	7.1) nome da classe (parametros): atributo1(param1)...{}
8) Utilizamos uma função que recebe como parametro um objeto e "cria" uma conta temporária. Com isso, terá um incremento no número de contas. Para resolver esse problema, usamos o destrutor
	8.1) o numero de contas deverá ser declarado como static. Isso se deve ao fato de o numero de contas ser uma variável genérica a todos objs da classe.
9) Depois de criada a classe Titular, preciso definir o construtor para alocar conteúdo nas variáveis CPF e nomeTitular.
	9.1) Todo construtor deve ser inicializado com as variáveis declaradas na classe.
	9.2) O nome do construtor deve ser o mesmo nome da classe
10) Sempre que eu quiser recuperar um dado de uma composição de objeto, devo sempre utilizar o arquivo na qual a varável está definida.
*/