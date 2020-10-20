#include <string>
#include "Engenheiro.hpp"

void Engenheiro::PrintEngenheiro() {
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes() << std::endl;
  std::cout << "Projetos: " << projetos << std::endl;
  std::cout << std::endl;
}