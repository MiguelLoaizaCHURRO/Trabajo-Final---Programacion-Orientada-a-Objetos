/**
 * @file operacionboleto.h
 * @brief Definici�n de la Clase OperacionBoleto para gestionar operaciones de venta de boletos en salas de cine.
 */

/**
 * @class OperacionBoleto
 * @brief Gestiona operaciones de venta de boletos en salas de cine.
 *
 * La clase OperacionBoleto proporciona una interfaz para gestionar la venta de boletos en un cine. Permite realizar operaciones como registrar pagos, generar reportes de sala y reportes generales, y mostrar mensajes relacionados con la operaci�n de boletos.
 *
 * @note
 * Esta implementaci�n asume que el costo de entrada por boleto es constante y est� predefinido en la clase.
 * @authors
 * - Miguel Angel Loaiza: 2357855-2724
 * - Samuel Diaz Monedero: 2357726-2724
 * - Alejandro Manzano Rojas: 2357631-2724
 *
 * @date �ltima modificaci�n: 10-12-2023
 * @version 1.5
 */

#ifndef OPERACIONBOLETO_H
#define OPERACIONBOLETO_H

#include <iostream>
#include <vector>

using namespace std;

/**
 * @class OperacionBoleto
 * @brief Gestiona operaciones de venta de boletos en salas de cine.
 *
 * Descripci�n m�s detallada de la clase OperacionBoleto.
 */
class OperacionBoleto
{
public:
    const int NUM_SALAS = 3; /**< N�mero total de salas en el cine. */

    /**
     * @brief Constructor de la clase OperacionBoleto.
     */
    OperacionBoleto();

    /**
     * @brief Muestra un mensaje relacionado con la operaci�n de boletos.
     */
    void mostrarMensaje() const;

    /**
     * @brief Registra un pago para una sala espec�fica.
     *
     * @param sala N�mero de la sala.
     * @param cantidad Cantidad a pagar.
     */
    void registrarPago(int sala, int cantidad);

    /**
     * @brief Genera un reporte de recaudaci�n para una sala espec�fica.
     *
     * @param sala N�mero de la sala.
     */
    void generarReporteSala(int sala) const;

    /**
     * @brief Genera un reporte de recaudaci�n general.
     */
    void generarReporteGeneral() const;

private:
    vector<int> recaudacionPorSala; /**< Vector que almacena la recaudaci�n por sala. */
    int recaudacionTotal; /**< Total de recaudaci�n en todas las salas. */
    int costoEntrada; /**< Costo de entrada por boleto. */
};

#endif // OPERACIONBOLETO_H
