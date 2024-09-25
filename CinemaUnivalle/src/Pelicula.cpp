/**
 * @file Pelicula.cpp
 * @brief Implementación de la clase Pelicula, que representa una película en un cine.
 *
 * @details Este archivo contiene la implementación de los métodos de la clase Pelicula,
 *          la cual encapsula información relevante de una película, como su título,
 *          director, género, duración en minutos y la sala asignada en un cine.
 *
 * @authors
 * - Miguel Angel Loaiza: 2357855-2724
 * - Samuel Diaz Monedero: 2357726-2724
 * - Alejandro Manzano Rojas: 2357631-2724
 *
 * @date Última modificación: 05-12-2023
 * @version 2.1
 */

#include "Pelicula.h"

#include <iostream>

using namespace std;

/**
 * @brief Constructor de la clase Pelicula.
 * @param T El título de la película.
 * @param D El director de la película.
 * @param g El género de la película.
 * @param DM La duración en minutos de la película.
 * @param numSala El número de la sala asignada.
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
 * @brief Establece el título de la película.
 */
void Pelicula::setTitulo()
{
    cin.ignore(); // Mejor utilizar cin.ignore() en lugar de fflush(stdin) para evitar problemas con el buffer.
    cout << "Ingrese el título de la película: ";
    getline(cin, titulo);
}

/**
 * @brief Establece el director de la película.
 */
void Pelicula::setDirector()
{
    cin.ignore();
    cout << "Ingrese el director de la película: ";
    getline(cin, director);
}

/**
 * @brief Establece el género de la película.
 */
void Pelicula::setGenero()
{
    cin.ignore();
    cout << "Ingrese el género de la película: ";
    getline(cin, genero);
}

/**
 * @brief Establece la duración en minutos de la película.
 */
void Pelicula::setDuracionMinutos()
{
    cout << "Ingrese la duración en minutos de la película: ";
    cin >> duracionMinutos;
}

/**
 * @brief Obtiene el título de la película.
 * @return El título de la película.
 */
string Pelicula::getTitulo() const
{
    return titulo;
}

/**
 * @brief Obtiene el director de la película.
 * @return El director de la película.
 */
string Pelicula::getDirector() const
{
    return director;
}

/**
 * @brief Obtiene el género de la película.
 * @return El género de la película.
 */
string Pelicula::getGenero() const
{
    return genero;
}

/**
 * @brief Obtiene la duración en minutos de la película.
 * @return La duración en minutos de la película.
 */
int Pelicula::getDuracionMinutos() const
{
    return duracionMinutos;
}

/**
 * @brief Asigna la película a una sala de cine.
 * @param numeroSala El número de la sala asignada.
 */
void Pelicula::asignarSala(int numeroSala)
{
    salaAsignada = numeroSala;
}

/**
 * @brief Obtiene el número de la sala asignada a la película.
 * @return El número de la sala asignada.
 */
int Pelicula::getSala() const
{
    return salaAsignada;
}

/**
 * @brief Muestra la información de la película y su sala asignada.
 */
void Pelicula::mostrarInformacion() const
{
    int horas = duracionMinutos / 60;
    int minutos = duracionMinutos % 60;

    cout<<"\n\tTítulo: "<<titulo<<endl;
    cout<<"\tDirector: "<<director<<endl;
    cout<<"\tGénero: "<<genero<<endl;
    cout<<"\tDuración: "<<horas<<" horas y "<<minutos<<" minutos"<<endl;
    cout<<"\tSala Asignada: "<<salaAsignada<<endl<<endl;
}
