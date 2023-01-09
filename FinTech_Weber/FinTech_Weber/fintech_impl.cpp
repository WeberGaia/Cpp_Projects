#include <iostream>
#include <string>
#include "fintech_def.hpp"
#include "Titular.hpp"

int Conta::numeroContas = 0;

Conta::Conta(const Titular titular, std::string Ag, std::string CC):
	titular_obj(titular),
	agencia(Ag),
	conta(CC),
	saldoo(0)
{
	numeroContas++;
}
Conta::~Conta() {
	numeroContas--;
}
void Conta::saldo(float Saldo) {
	saldoo = Saldo;
}

//Método Getter
/*std::string Conta::RecuperaNome() {
	return nomeTitular;
}*/
/*std::string Conta::RecuperCPF() {
	return CPF;
}*/
std::string Conta::RecuperaAg() {
	//std::cout << std::endl;
	return agencia;
}
std::string Conta::RecuperaCC() {
	return conta;
}
float Conta::RecuperaSaldo() const {
	return saldoo;
}
void Conta::valorDeposito(float Saldo) {
	saldoo += Saldo;
}
void Conta::valorSaque(float Saque) {
	saldoo -= Saque;
}
int Conta::recuperaNumeroDeContas()
{
	return numeroContas;
}