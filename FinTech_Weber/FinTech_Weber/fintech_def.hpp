#pragma once
#include <string>
#include "Titular.hpp"
#include <iostream>

inline void Cabecalho() 
{
	std::cout << "Bem vindo(a) a FinTech Alura, Sr(a). ";
}
class Conta
{
private:
	Titular titular_obj;
	std::string agencia;
	std::string conta;
	float saldoo;
	static int numeroContas;						//Declarado como static porque preciso do numero de contas geral e não atribuídos a apenas um objeto e, sim, da classe

public:



	//Setters
	//void Dados(std::string nome, std::string cpf, std::string Ag, std::string CC);
	Conta(const Titular titular, std::string Ag, std::string CC);
	~Conta();
	void saldo(float Saldo);

	//Getters
	//std::string RecuperaNome();
	//std::string RecuperCPF();
	std::string RecuperaAg();
	std::string RecuperaCC();
	float RecuperaSaldo() const;
	void valorDeposito(float Saldo);
	void valorSaque(float Saque);
	static int recuperaNumeroDeContas();
};


