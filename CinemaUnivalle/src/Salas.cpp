/**
 * @file Salas.cpp
 * @brief Implementación de la clase Salas para representar salas de cine con asientos reservables.
 *
 * Esta implementación proporciona métodos para la gestión de salas de cine, incluyendo la inicialización de salas,
 * la visualización del estado de los asientos y la reserva de asientos.
 *
 * @details
 * La clase Salas permite la representación y gestión de múltiples salas de cine, cada una con un arreglo de asientos que
 * pueden ser reservados ('L' para asientos libres y 'X' para asientos ocupados). Ofrece funciones para obtener información
 * sobre el número total de salas, visualizar el estado de los asientos en una sala específica y realizar reservas de asientos.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Última modificación: 10-12-2023
 * @version 2.0
 */

#include "Salas.h"
#include <iostream>
#include <iomanip>

using namespace std;

/**
 * @brief Constructor de la clase Salas.
 *
 * Inicializa las salas de cine con asientos que pueden ser reservados.
 *
 * @param fila Número de filas en cada sala.
 * @param columna Número de columnas en cada sala.
 * @param num Número total de salas.
 * @details
 * Este constructor crea instancias de la clase Salas con la configuración especificada, donde cada sala se inicia con
 * todos los asientos libres ('L').
 */
Salas::Salas(int fila, int columna, int num)
{
    filas = fila;
    columnas = columna;
    numSalas = num;

    // Inicializar las salas con todos los asientos libres ('L')
    asientos.resize(numSalas, vector<vector<char>>(filas, vector<char>(columnas, 'L')));
}

/**
 * @brief Obtiene el número total de salas.
 *
 * @return Número total de salas.
 * @details
 * Este método devuelve el número total de salas disponibles en la instancia de la clase.
 */
int Salas::getNumSalas() const
{
    return numSalas;
}

/**
 * @brief Muestra el estado de los asientos en una sala específica.
 *
 * @param numSala Número de la sala a mostrar.
 * @details
 * Este método imprime en la consola el estado actual de los asientos en la sala especificada, indicando con 'X' los
 * asientos ocupados y con 'L' los asientos libres.
 */
void Salas::mostrarEstado(int numSala) const
{
    cout<<"\nEstado actual de la sala de cine "<<numSala + 1<<":\n\n";
    // Mostrar etiquetas de columnas
    cout<<"   ";
    for (int j = 0; j < columnas; ++j)
    {
        cout << setw(3) << j + 1;
    }
    cout<<"\n";

    for (int i = 0; i < filas; ++i)
    {
        // Mostrar etiquetas de filas
        cout<<setw(2) << i + 1 << " ";
        for (int j = 0; j < columnas; ++j)
        {
            cout<<"[";
            if (asientos[numSala][i][j] == 'L')
            {
                cout<<" ";
            }
            else
            {
                cout<<"X";
            }
            cout<<"]";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

/**
 * @brief Reserva un asiento en una sala específica.
 *
 * @param numSala Número de la sala.
 * @param fila Número de fila del asiento a reservar.
 * @param columna Número de columna del asiento a reservar.
 * @return Verdadero si se pudo reservar el asiento, falso en caso contrario.
 * @details
 * Este método intenta reservar un asiento en la sala especificada. Devuelve true si la reserva fue exitosa y false si
 * el asiento ya está ocupado o si las coordenadas especificadas no son válidas.
 */
bool Salas::reservarAsiento(int numSala, int fila, int columna)
{
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas)
    {
        if (asientos[numSala][fila][columna] == 'X')
        {
            cout<<"¡El asiento ya está ocupado!\n\n";
            system("pause");
            return false;
        }
        else
        {
            asientos[numSala][fila][columna] = 'X';
            cout<<"\n\t\t¡Reserva exitosa!\n\n";
            system("pause");
            return true;
        }
    }
    else
    {
        cout<<"\n\t\t¡Asiento no válido!\n";
        cout<<"\tReserva no exitosa. Por favor, seleccione otro asiento.\n";
        system("pause");
        return false;
    }
}
