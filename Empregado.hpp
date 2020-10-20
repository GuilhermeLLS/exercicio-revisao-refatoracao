#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado
{

public:
  double salarioHora;
  double horasTrabalhadas;
  std::string nome;

  Empregado(std::string nome, double salarioHora, double horasTrabalhadas) : nome(nome), salarioHora(salarioHora), horasTrabalhadas(horasTrabalhadas) {}
  double pagamentoMes() const;
};

#endif