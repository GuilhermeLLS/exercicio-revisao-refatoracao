#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() const
{
	return quotaMensalVendas * 12;
}

void Vendedor::PrintVendedor()
{
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Salario Mes: " << pagamentoMes() << std::endl;
	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
	std::cout << std::endl;
}
