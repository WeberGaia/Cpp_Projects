#pragma once
class Titular
{
private:
	std::string CPF;
	std::string nomeTitular;

public:
	Titular(std::string CPF, std::string nomeTitular);
	void RecuperaNome();
	void RecuperaCPF();
};

