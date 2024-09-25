/**
 * @file salas.h
 * @brief Definición de la Clase Salas para representar salas de cine con asientos reservables.
 */

/**
 * @class Salas
 * @brief Clase que representa salas de cine con asientos reservables.
 *
 * Esta clase proporciona una representación básica de salas de cine con asientos que pueden ser reservados.
 * Permite conocer el estado de los asientos, realizar reservas y obtener información sobre el número total de salas.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Última modificación: 10-12-2023
 * @version Versión: 1.5
 */

#ifndef SALAS_H
#define SALAS_H

#include <vector>

using namespace std;

/**
 * @class Salas
 * @brief Clase que representa salas de cine con asientos reservables.
 *
 * Descripción más detallada de la clase Salas.
 */
class Salas
{
public:
    /**
     * @brief Constructor de la clase Salas.
     *
     * @param filas Número de filas en cada sala.
     * @param columnas Número de columnas en cada sala.
     * @param numSalas Número total de salas.
     */
    Salas(int filas, int columnas, int numSalas);

    /**
     * @brief Obtiene el número total de salas.
     *
     * @return Número total de salas.
     */
    int getNumSalas() const;

    /**
     * @brief Muestra el estado de los asientos en una sala específica.
     *
     * @param numSala Número de la sala a mostrar.
     */
    void mostrarEstado(int numSala) const;

    /**
     * @brief Reserva un asiento en una sala específica.
     *
     * @param numSala Número de la sala.
     * @param fila Número de fila del asiento a reservar.
     * @param columna Número de columna del asiento a reservar.
     * @return Verdadero si se pudo reservar el asiento, falso en caso contrario.
     */
    bool reservarAsiento(int numSala, int fila, int columna);

protected:

private:
    int filas; /**< Número de filas en cada sala */
    int columnas; /**< Número de columnas en cada sala */
    int numSalas; /**< Número total de salas */
    vector<vector<vector<char>>> asientos; /**< Matriz para múltiples salas con información de los asientos */
};

#endif // SALAS_H
