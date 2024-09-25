/**
 * @file Taquillero.h
 * @brief Archivo de encabezado que define la clase Taquillero, representando a un taquillero y siendo una clase hija de UsuarioAdmin.
 *
 * @details Este archivo contiene la definición de la clase Taquillero, que hereda de UsuarioAdmin y representa a un taquillero del sistema.
 * Proporciona métodos para la manipulación de información específica de los taquilleros.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Última modificación: 05-12-2023
 * @version 2.0
 */

#ifndef TAQUILLERO_H
#define TAQUILLERO_H

#include <iostream>
#include "UsuarioAdmin.h"

using namespace std;

/**
 * @class Taquillero
 * @brief Clase que representa a un taquillero y es una clase hija de UsuarioAdmin.
 */
class Taquillero : public UsuarioAdmin
{
public:
    string numID; /**< Numero de identificación del taquillero. */

    /**
     * @brief Constructor por defecto de la clase Taquillero.
     * Inicializa los atributos con valores predeterminados.
     */
    Taquillero();

    /**
     * @brief Destructor virtual de la clase Taquillero.
     */
    virtual ~Taquillero();

    /**
     * @brief Constructor de la clase Taquillero con nombre de usuario y contraseña.
     * @param usu El nombre de usuario.
     * @param pass La contraseña del taquillero.
     */
    Taquillero(string usu, string pass);

    /**
     * @brief Constructor de la clase Taquillero con información básica.
     * @param usu El nombre de usuario.
     * @param pass La contraseña del taquillero.
     * @param tarjeta La tarjeta profesional del taquillero.
     * @param estado El estado civil del taquillero.
     * @param cont El tipo de contrato del taquillero.
     */
    Taquillero(string usu, string pass, string tarjeta, string estado, string cont);

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
    Taquillero(string usu, string pass, string estudios, string direc, string tarjeta, string estado, string cont, string id);

    /**
     * @brief Establece el número de identificación del taquillero mediante la entrada del taquillero.
     */
    void setNumID();

    /**
     * @brief Obtiene el número de identificación del taquillero.
     * @return El número de identificación del taquillero.
     */
    string getNumID() const;

protected:

private:
};

#endif // TAQUILLERO_H
