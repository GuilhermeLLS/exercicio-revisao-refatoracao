#include <string>
#include "Empregado.hpp"

#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

class Engenheiro : public Empregado
{

public:
    Engenheiro(std::string nome, double salarioHora, double horasTrabalhadas, int projetos) : Empregado(nome, salarioHora, horasTrabalhadas), projetos(projetos) {}
    void PrintEngenheiro();

private:
    int projetos;
};

#endif