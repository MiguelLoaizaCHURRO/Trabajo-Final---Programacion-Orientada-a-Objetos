/**
 * @file Pelicula.h
 * @brief Definición de la clase Pelicula, que representa una película en un cine.
 *
 * @details Este archivo contiene la definición de la clase Pelicula, que encapsula información sobre una película, como su título, director, género, duración en minutos y la sala asignada en un cine.
 *
 * @authors
 * - Miguel Angel Loaiza: 2357855-2724
 * - Samuel Diaz Monedero: 2357726-2724
 * - Alejandro Manzano Rojas: 2357631-2724
 *
 * @date Última modificación: 05-12-2023
 * @version 2.1
 */

#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>

using namespace std;

/**
 * @class Pelicula
 * @brief Representa una película en un cine.
 */
class Pelicula
{
public:
    /**
     * @brief Constructor de la clase Pelicula.
     * @param T Título de la película.
     * @param D Director de la película.
     * @param g Género de la película.
     * @param DM Duración en minutos de la película.
     * @param numSala Número de la sala asignada.
     */
    Pelicula(string T, string D, string g, int DM, int numSala);

    /**
     * @brief Destructor virtual de la clase Pelicula.
     */
    virtual ~Pelicula();

    /**
     * @brief Establece el título de la película.
     */
    void setTitulo();

    /**
     * @brief Establece el director de la película.
     */
    void setDirector();

    /**
     * @brief Establece el género de la película.
     */
    void setGenero();

    /**
     * @brief Establece la duración en minutos de la película.
     */
    void setDuracionMinutos();

    /**
     * @brief Obtiene el título de la película.
     * @return Título de la película.
     */
    string getTitulo() const;

    /**
     * @brief Obtiene el director de la película.
     * @return Director de la película.
     */
    string getDirector() const;

    /**
     * @brief Obtiene el género de la película.
     * @return Género de la película.
     */
    string getGenero() const;

    /**
     * @brief Obtiene la duración en minutos de la película.
     * @return Duración en minutos de la película.
     */
    int getDuracionMinutos() const;

    /**
     * @brief Asigna la película a una sala de cine.
     * @param numeroSala Número de la sala asignada.
     */
    void asignarSala(int numeroSala);

    /**
     * @brief Obtiene el número de la sala asignada.
     * @return Número de la sala asignada.
     */
    int getSala() const;

    /**
     * @brief Muestra la información de la película y su sala asignada.
     */
    void mostrarInformacion() const;

protected:
    /**
     * @brief Variables miembro que representan información de la película.
     */
    string titulo, director, genero;

    /**
     * @brief Variable miembro que representa la duración en minutos de la película.
     */
    int duracionMinutos;

    /**
     * @brief Variable miembro que representa el número de sala asignada.
     */
    int salaAsignada;

private:
};

#endif // PELICULA_H
