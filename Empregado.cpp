#include "Empregado.hpp"

double Empregado::pagamentoMes() const
{
    int HORAS_JORNADA_NORMAL = 8;
    int MULTIPLICADOR_HORA_EXTRA = 0.5;
    double totalHoras = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORAS_JORNADA_NORMAL)
    {
        double horaExtra = horasTrabalhadas - HORAS_JORNADA_NORMAL;
        totalHoras = totalHoras + (horaExtra * MULTIPLICADOR_HORA_EXTRA);
    }
    return totalHoras * salarioHora;
}
