#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado
{
public:
    Vendedor(std::string nome, double salarioHora, double horasTrabalhadas, double quotaMensalVendas) : Empregado(nome, salarioHora, horasTrabalhadas), quotaMensalVendas(quotaMensalVendas){}
    double quotaTotalAnual() const;
    void PrintVendedor();

private:
    double quotaMensalVendas;
};

#endif