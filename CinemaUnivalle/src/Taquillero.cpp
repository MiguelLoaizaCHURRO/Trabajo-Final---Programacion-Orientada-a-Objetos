/**
 * @file Taquillero.cpp
 * @brief Archivo fuente que implementa la clase Taquillero.
 *
 * @details Este archivo contiene la implementaci�n de los m�todos de la clase Taquillero, que representa a un taquillero y es una clase hija de UsuarioAdmin.
 * Proporciona la inicializaci�n de atributos, constructores y m�todos espec�ficos para la manipulaci�n de informaci�n de los taquilleros.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date �ltima modificaci�n: 05-12-2023
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
 * @brief Constructor de la clase Taquillero con nombre de usuario y contrase�a.
 * @param usu El nombre de usuario.
 * @param pass La contrase�a del taquillero.
 */
Taquillero::Taquillero(string usu, string pass)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Constructor de la clase Taquillero con informaci�n b�sica.
 * @param usu El nombre de usuario.
 * @param pass La contrase�a del taquillero.
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
 * @brief Constructor de la clase Taquillero con informaci�n completa.
 * @param usu El nombre de usuario.
 * @param pass La contrase�a del taquillero.
 * @param estudios El nivel de estudios del taquillero.
 * @param direc La direcci�n del taquillero.
 * @param tarjeta La tarjeta profesional del taquillero.
 * @param estado El estado civil del taquillero.
 * @param cont El tipo de contrato del taquillero.
 * @param id El n�mero de identificaci�n del taquillero.
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
 * @brief Establece el n�mero de identificaci�n del taquillero mediante la entrada del taquillero.
 */
void Taquillero::setNumID()
{
    fflush(stdin);
    cout << "\tIngrese su numero de identificacion: ";
    cin >> numID;
}

/**
 * @brief Obtiene el n�mero de identificaci�n del taquillero.
 * @return El n�mero de identificaci�n del taquillero.
 */
string Taquillero::getNumID() const
{
    return numID;
}
