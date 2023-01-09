#include <iostream>
#include <string>
#include "Titular.hpp"

Titular::Titular(std::string CPF, std::string nomeTitular):
	CPF(CPF),
	nomeTitular(nomeTitular)
{
	RecuperaNome();
	RecuperaCPF();
}

void Titular::RecuperaNome()
{
	std::cout << nomeTitular << std::endl;
}

void Titular::RecuperaCPF(){
	std::cout << "CPF: " << CPF;
}