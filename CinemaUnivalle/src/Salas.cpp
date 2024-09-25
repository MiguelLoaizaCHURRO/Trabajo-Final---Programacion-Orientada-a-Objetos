/**
 * @file Salas.cpp
 * @brief Implementaci�n de la clase Salas para representar salas de cine con asientos reservables.
 *
 * Esta implementaci�n proporciona m�todos para la gesti�n de salas de cine, incluyendo la inicializaci�n de salas,
 * la visualizaci�n del estado de los asientos y la reserva de asientos.
 *
 * @details
 * La clase Salas permite la representaci�n y gesti�n de m�ltiples salas de cine, cada una con un arreglo de asientos que
 * pueden ser reservados ('L' para asientos libres y 'X' para asientos ocupados). Ofrece funciones para obtener informaci�n
 * sobre el n�mero total de salas, visualizar el estado de los asientos en una sala espec�fica y realizar reservas de asientos.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date �ltima modificaci�n: 10-12-2023
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
 * @param fila N�mero de filas en cada sala.
 * @param columna N�mero de columnas en cada sala.
 * @param num N�mero total de salas.
 * @details
 * Este constructor crea instancias de la clase Salas con la configuraci�n especificada, donde cada sala se inicia con
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
 * @brief Obtiene el n�mero total de salas.
 *
 * @return N�mero total de salas.
 * @details
 * Este m�todo devuelve el n�mero total de salas disponibles en la instancia de la clase.
 */
int Salas::getNumSalas() const
{
    return numSalas;
}

/**
 * @brief Muestra el estado de los asientos en una sala espec�fica.
 *
 * @param numSala N�mero de la sala a mostrar.
 * @details
 * Este m�todo imprime en la consola el estado actual de los asientos en la sala especificada, indicando con 'X' los
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
 * @brief Reserva un asiento en una sala espec�fica.
 *
 * @param numSala N�mero de la sala.
 * @param fila N�mero de fila del asiento a reservar.
 * @param columna N�mero de columna del asiento a reservar.
 * @return Verdadero si se pudo reservar el asiento, falso en caso contrario.
 * @details
 * Este m�todo intenta reservar un asiento en la sala especificada. Devuelve true si la reserva fue exitosa y false si
 * el asiento ya est� ocupado o si las coordenadas especificadas no son v�lidas.
 */
bool Salas::reservarAsiento(int numSala, int fila, int columna)
{
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas)
    {
        if (asientos[numSala][fila][columna] == 'X')
        {
            cout<<"�El asiento ya est� ocupado!\n\n";
            system("pause");
            return false;
        }
        else
        {
            asientos[numSala][fila][columna] = 'X';
            cout<<"\n\t\t�Reserva exitosa!\n\n";
            system("pause");
            return true;
        }
    }
    else
    {
        cout<<"\n\t\t�Asiento no v�lido!\n";
        cout<<"\tReserva no exitosa. Por favor, seleccione otro asiento.\n";
        system("pause");
        return false;
    }
}
