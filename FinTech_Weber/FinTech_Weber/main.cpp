#include <iostream>
#include "fintech_def.hpp"
#include "Titular.hpp"

/*void ExibeSaldo(const Conta& conta)
{
	Conta umaContaDesnecessaria("Alessandra", "123.456.789-10", "0123", "789456-9");

	std::cout << "O saldo da conta �: " << conta.RecuperaSaldo() << std::endl;
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

	std::cout << "Numero de contas: " << Conta::recuperaNumeroDeContas();	//Utilizamos Conta::funcao() para pegar o n�mero total de contas. Colocamos ponto(.) quando estamos acessando um obj. ::-> namespace*/
	Cabecalho();
	Conta minhaConta(Titular("123.456.789-10","Weber de Souza Gaia Filho"),"1230","45678-5");
	
	minhaConta.RecuperaAg();

}

/*
1) Criamos um arquivo simples para demonstrar as funcionalidades revisadas em aula.
2) Criamos dois arquivos: .cpp e .hpp, sendo o primeiro o de implementa��o e o segundo de defini��o
3) Ap�s a cria��o de (2), para que a implementa��o seja impressa em tela, devemos declarar a classe + nome do objeto
	3.1) A partir do objeto, chamamos as fun��es presentes no arquivo de implementa��o
4) Criamos vari�veis privadas para que sejam definidas -> M�todo setter.
5) Recuperamos (4) com o m�todo getter, ou seja, utilizamos fun��es para resgatar esses valores
OBS: Para definir o conte�do de um atributo, SEMPRE devemos utilizar uma fun��o
6) Criamos as fun��es dep�sito e saque;
7) Utilizamos construtores para inicializar as vari�veis privadas. Substitu�mos uma fun��o por um construtor
	7.1) nome da classe (parametros): atributo1(param1)...{}
8) Utilizamos uma fun��o que recebe como parametro um objeto e "cria" uma conta tempor�ria. Com isso, ter� um incremento no n�mero de contas. Para resolver esse problema, usamos o destrutor
	8.1) o numero de contas dever� ser declarado como static. Isso se deve ao fato de o numero de contas ser uma vari�vel gen�rica a todos objs da classe.
9) Depois de criada a classe Titular, preciso definir o construtor para alocar conte�do nas vari�veis CPF e nomeTitular.
	9.1) Todo construtor deve ser inicializado com as vari�veis declaradas na classe.
	9.2) O nome do construtor deve ser o mesmo nome da classe
10) Sempre que eu quiser recuperar um dado de uma composi��o de objeto, devo sempre utilizar o arquivo na qual a var�vel est� definida.
*/