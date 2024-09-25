/**
 * @file Pelicula.h
 * @brief Definici�n de la clase Pelicula, que representa una pel�cula en un cine.
 *
 * @details Este archivo contiene la definici�n de la clase Pelicula, que encapsula informaci�n sobre una pel�cula, como su t�tulo, director, g�nero, duraci�n en minutos y la sala asignada en un cine.
 *
 * @authors
 * - Miguel Angel Loaiza: 2357855-2724
 * - Samuel Diaz Monedero: 2357726-2724
 * - Alejandro Manzano Rojas: 2357631-2724
 *
 * @date �ltima modificaci�n: 05-12-2023
 * @version 2.1
 */

#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>

using namespace std;

/**
 * @class Pelicula
 * @brief Representa una pel�cula en un cine.
 */
class Pelicula
{
public:
    /**
     * @brief Constructor de la clase Pelicula.
     * @param T T�tulo de la pel�cula.
     * @param D Director de la pel�cula.
     * @param g G�nero de la pel�cula.
     * @param DM Duraci�n en minutos de la pel�cula.
     * @param numSala N�mero de la sala asignada.
     */
    Pelicula(string T, string D, string g, int DM, int numSala);

    /**
     * @brief Destructor virtual de la clase Pelicula.
     */
    virtual ~Pelicula();

    /**
     * @brief Establece el t�tulo de la pel�cula.
     */
    void setTitulo();

    /**
     * @brief Establece el director de la pel�cula.
     */
    void setDirector();

    /**
     * @brief Establece el g�nero de la pel�cula.
     */
    void setGenero();

    /**
     * @brief Establece la duraci�n en minutos de la pel�cula.
     */
    void setDuracionMinutos();

    /**
     * @brief Obtiene el t�tulo de la pel�cula.
     * @return T�tulo de la pel�cula.
     */
    string getTitulo() const;

    /**
     * @brief Obtiene el director de la pel�cula.
     * @return Director de la pel�cula.
     */
    string getDirector() const;

    /**
     * @brief Obtiene el g�nero de la pel�cula.
     * @return G�nero de la pel�cula.
     */
    string getGenero() const;

    /**
     * @brief Obtiene la duraci�n en minutos de la pel�cula.
     * @return Duraci�n en minutos de la pel�cula.
     */
    int getDuracionMinutos() const;

    /**
     * @brief Asigna la pel�cula a una sala de cine.
     * @param numeroSala N�mero de la sala asignada.
     */
    void asignarSala(int numeroSala);

    /**
     * @brief Obtiene el n�mero de la sala asignada.
     * @return N�mero de la sala asignada.
     */
    int getSala() const;

    /**
     * @brief Muestra la informaci�n de la pel�cula y su sala asignada.
     */
    void mostrarInformacion() const;

protected:
    /**
     * @brief Variables miembro que representan informaci�n de la pel�cula.
     */
    string titulo, director, genero;

    /**
     * @brief Variable miembro que representa la duraci�n en minutos de la pel�cula.
     */
    int duracionMinutos;

    /**
     * @brief Variable miembro que representa el n�mero de sala asignada.
     */
    int salaAsignada;

private:
};

#endif // PELICULA_H
