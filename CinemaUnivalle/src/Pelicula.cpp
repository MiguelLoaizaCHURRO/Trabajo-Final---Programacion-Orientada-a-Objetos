/**
 * @file Pelicula.cpp
 * @brief Implementaci�n de la clase Pelicula, que representa una pel�cula en un cine.
 *
 * @details Este archivo contiene la implementaci�n de los m�todos de la clase Pelicula,
 *          la cual encapsula informaci�n relevante de una pel�cula, como su t�tulo,
 *          director, g�nero, duraci�n en minutos y la sala asignada en un cine.
 *
 * @authors
 * - Miguel Angel Loaiza: 2357855-2724
 * - Samuel Diaz Monedero: 2357726-2724
 * - Alejandro Manzano Rojas: 2357631-2724
 *
 * @date �ltima modificaci�n: 05-12-2023
 * @version 2.1
 */

#include "Pelicula.h"

#include <iostream>

using namespace std;

/**
 * @brief Constructor de la clase Pelicula.
 * @param T El t�tulo de la pel�cula.
 * @param D El director de la pel�cula.
 * @param g El g�nero de la pel�cula.
 * @param DM La duraci�n en minutos de la pel�cula.
 * @param numSala El n�mero de la sala asignada.
 */
Pelicula::Pelicula(string T, string D, string g, int DM, int numSala)
{
    titulo = T;
    director = D;
    genero = g;
    duracionMinutos = DM;
    salaAsignada = numSala;
}

/**
 * @brief Destructor virtual de la clase Pelicula.
 */
Pelicula::~Pelicula()
{
    // No se requiere liberar recursos adicionales en este caso.
}

/**
 * @brief Establece el t�tulo de la pel�cula.
 */
void Pelicula::setTitulo()
{
    cin.ignore(); // Mejor utilizar cin.ignore() en lugar de fflush(stdin) para evitar problemas con el buffer.
    cout << "Ingrese el t�tulo de la pel�cula: ";
    getline(cin, titulo);
}

/**
 * @brief Establece el director de la pel�cula.
 */
void Pelicula::setDirector()
{
    cin.ignore();
    cout << "Ingrese el director de la pel�cula: ";
    getline(cin, director);
}

/**
 * @brief Establece el g�nero de la pel�cula.
 */
void Pelicula::setGenero()
{
    cin.ignore();
    cout << "Ingrese el g�nero de la pel�cula: ";
    getline(cin, genero);
}

/**
 * @brief Establece la duraci�n en minutos de la pel�cula.
 */
void Pelicula::setDuracionMinutos()
{
    cout << "Ingrese la duraci�n en minutos de la pel�cula: ";
    cin >> duracionMinutos;
}

/**
 * @brief Obtiene el t�tulo de la pel�cula.
 * @return El t�tulo de la pel�cula.
 */
string Pelicula::getTitulo() const
{
    return titulo;
}

/**
 * @brief Obtiene el director de la pel�cula.
 * @return El director de la pel�cula.
 */
string Pelicula::getDirector() const
{
    return director;
}

/**
 * @brief Obtiene el g�nero de la pel�cula.
 * @return El g�nero de la pel�cula.
 */
string Pelicula::getGenero() const
{
    return genero;
}

/**
 * @brief Obtiene la duraci�n en minutos de la pel�cula.
 * @return La duraci�n en minutos de la pel�cula.
 */
int Pelicula::getDuracionMinutos() const
{
    return duracionMinutos;
}

/**
 * @brief Asigna la pel�cula a una sala de cine.
 * @param numeroSala El n�mero de la sala asignada.
 */
void Pelicula::asignarSala(int numeroSala)
{
    salaAsignada = numeroSala;
}

/**
 * @brief Obtiene el n�mero de la sala asignada a la pel�cula.
 * @return El n�mero de la sala asignada.
 */
int Pelicula::getSala() const
{
    return salaAsignada;
}

/**
 * @brief Muestra la informaci�n de la pel�cula y su sala asignada.
 */
void Pelicula::mostrarInformacion() const
{
    int horas = duracionMinutos / 60;
    int minutos = duracionMinutos % 60;

    cout<<"\n\tT�tulo: "<<titulo<<endl;
    cout<<"\tDirector: "<<director<<endl;
    cout<<"\tG�nero: "<<genero<<endl;
    cout<<"\tDuraci�n: "<<horas<<" horas y "<<minutos<<" minutos"<<endl;
    cout<<"\tSala Asignada: "<<salaAsignada<<endl<<endl;
}
