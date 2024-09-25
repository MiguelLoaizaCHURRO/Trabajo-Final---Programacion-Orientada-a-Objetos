/**
 * @file operacionboleto.cpp
 * @brief Implementaci�n de la Clase OperacionBoleto para gestionar operaciones de venta de boletos en salas de cine.
 *
 * Este archivo implementa la funcionalidad de la Clase OperacionBoleto, encargada de gestionar las operaciones de venta de boletos en salas de cine.
 *
 * @section intro_sec Introducci�n
 *
 * Este componente forma parte de un sistema de gesti�n de salas de cine que utiliza la clase Salas para manejar salas con asientos reservables.
 *
 * @section authors_sec Autores
 *
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Fecha �ltima modificaci�n: 10-12-2023
 * @version Versi�n: 1.5
 */

#include "OperacionBoleto.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor de la clase OperacionBoleto.
 * Inicializa el costo de entrada y las variables de recaudaci�n.
 *
 * @details
 * - Costo de entrada: $15000 pesos.
 * - Vector de recaudaci�n por sala: Inicializado con ceros para cada sala.
 * - Recaudaci�n total: Inicializado en cero.
 */
OperacionBoleto::OperacionBoleto()
{
    costoEntrada = 15000;
    recaudacionPorSala = vector<int>(NUM_SALAS, 0);
    recaudacionTotal = 0;
}

/**
 * @brief Muestra un mensaje relacionado con la operaci�n de boletos.
 *
 * @details El mensaje muestra el costo de la entrada actual.
 */
void OperacionBoleto::mostrarMensaje() const
{
    cout<<"\n\n\tCosto de la entrada: $"<<costoEntrada<<" pesos\n\n";
}

/**
 * @brief Registra un pago para una sala espec�fica.
 *
 * @param sala N�mero de la sala.
 * @param cantidad Cantidad a pagar.
 *
 * @details El m�todo registra el pago sumando la recaudaci�n por sala y la recaudaci�n total.
 *          Se verifica que el n�mero de sala y la cantidad sean v�lidos antes de realizar el registro.
 */
void OperacionBoleto::registrarPago(int sala, int cantidad)
{
    if (sala >= 1 && sala <= NUM_SALAS && cantidad > 0)
    {
        int totalVenta = cantidad * costoEntrada;
        recaudacionPorSala[sala - 1] += totalVenta;
        recaudacionTotal += totalVenta;
    }
}

/**
 * @brief Genera un reporte de recaudaci�n para una sala espec�fica.
 *
 * @param sala N�mero de la sala.
 *
 * @details El m�todo imprime en consola un reporte de recaudaci�n para la sala especificada.
 *          Se verifica que el n�mero de sala sea v�lido antes de generar el reporte.
 */
void OperacionBoleto::generarReporteSala(int sala) const
{
    if (sala >= 1 && sala <= NUM_SALAS)
    {
        cout<<"Reporte de Sala "<<sala<<":"<< endl;
        cout<<"Recaudaci�n: $"<<recaudacionPorSala[sala - 1]<<" pesos"<<endl;
    }
}

/**
 * @brief Genera un reporte de recaudaci�n general.
 *
 * @details El m�todo imprime en consola un reporte de recaudaci�n total y por sala.
 */
void OperacionBoleto::generarReporteGeneral() const
{
    cout<<"Reporte General:" << endl;
    for (int i = 0; i < NUM_SALAS; ++i)
    {
        cout<<"Sala "<<i + 1<<": "<<recaudacionPorSala[i]<<" pesos"<<endl;
    }
    cout<<"Recaudaci�n Total: $"<<recaudacionTotal<<" pesos"<<endl;
}
