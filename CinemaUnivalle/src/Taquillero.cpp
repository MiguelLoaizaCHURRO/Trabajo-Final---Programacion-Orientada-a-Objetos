/**
 * @file Taquillero.cpp
 * @brief Archivo fuente que implementa la clase Taquillero.
 *
 * @details Este archivo contiene la implementación de los métodos de la clase Taquillero, que representa a un taquillero y es una clase hija de UsuarioAdmin.
 * Proporciona la inicialización de atributos, constructores y métodos específicos para la manipulación de información de los taquilleros.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Última modificación: 05-12-2023
 * @version 2.0
 */

#include "Taquillero.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor por defecto de la clase Taquillero.
 * Inicializa los atributos con valores predeterminados.
 */
Taquillero::Taquillero()
{
    numID = "0-0-0-0";
}

/**
 * @brief Destructor virtual de la clase Taquillero.
 */
Taquillero::~Taquillero()
{
    // dtor
}

/**
 * @brief Constructor de la clase Taquillero con nombre de usuario y contraseña.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del taquillero.
 */
Taquillero::Taquillero(string usu, string pass)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Constructor de la clase Taquillero con información básica.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del taquillero.
 * @param tarjeta La tarjeta profesional del taquillero.
 * @param estado El estado civil del taquillero.
 * @param cont El tipo de contrato del taquillero.
 */
Taquillero::Taquillero(string usu, string pass, string tarjeta, string estado, string cont)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
    tarjetaProfesional = tarjeta;
    estadoCivil = estado;
    contrato = cont;
}

/**
 * @brief Constructor de la clase Taquillero con información completa.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del taquillero.
 * @param estudios El nivel de estudios del taquillero.
 * @param direc La dirección del taquillero.
 * @param tarjeta La tarjeta profesional del taquillero.
 * @param estado El estado civil del taquillero.
 * @param cont El tipo de contrato del taquillero.
 * @param id El número de identificación del taquillero.
 */
Taquillero::Taquillero(string usu, string pass, string estudios, string direc, string tarjeta, string estado, string cont, string ID)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = estudios;
    direccion = direc;
    tarjetaProfesional = tarjeta;
    estadoCivil = estado;
    contrato = cont;
    numID = ID;
}

/**
 * @brief Establece el número de identificación del taquillero mediante la entrada del taquillero.
 */
void Taquillero::setNumID()
{
    fflush(stdin);
    cout << "\tIngrese su numero de identificacion: ";
    cin >> numID;
}

/**
 * @brief Obtiene el número de identificación del taquillero.
 * @return El número de identificación del taquillero.
 */
string Taquillero::getNumID() const
{
    return numID;
}
