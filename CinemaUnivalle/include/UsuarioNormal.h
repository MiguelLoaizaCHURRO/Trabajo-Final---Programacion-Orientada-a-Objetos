/**
 * @file UsuarioNormal.h
 * @brief Archivo de encabezado que define la clase UsuarioNormal, una clase hija de Usuarios.
 *
 * @details Este archivo contiene la definici�n de la clase UsuarioNormal, que representa a un Usuario Normal y es una clase hija de Usuarios.
 * Proporciona la estructura y los m�todos necesarios para manejar la informaci�n de los usuarios normales en el sistema.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date �ltima modificaci�n: 05-12-2023
 * @version 2.0
 */

#ifndef USUARIONORMAL_H
#define USUARIONORMAL_H

#include <iostream>

#include "Usuarios.h"

using namespace std;

/**
 * @class UsuarioNormal
 * @brief Clase que representa a un Usuario Normal, que es una clase hija de Usuarios.
 */
class UsuarioNormal : public Usuarios
{
public:

    /**
     * @brief Constructor por defecto de la clase UsuarioNormal.
     * Inicializa los atributos con valores predeterminados.
     */
    UsuarioNormal();

    /**
     * @brief Destructor virtual de la clase UsuarioNormal.
     */
    virtual ~UsuarioNormal();

    /**
     * @brief Constructor de la clase UsuarioNormal con nombre de usuario y contrase�a.
     * @param usu El nombre de usuario.
     * @param pass La contrase�a del usuario.
     * Inicializa los atributos con valores dados y establece valores predeterminados.
     */
    UsuarioNormal(string usu, string pass);

    /**
     * @brief Constructor de la clase UsuarioNormal con informaci�n completa.
     * @param usu El nombre de usuario.
     * @param pass La contrase�a del usuario.
     * @param estudios El nivel de estudios del usuario.
     * @param direc La direcci�n del usuario.
     * Inicializa los atributos con valores dados.
     */
    UsuarioNormal(string usu, string pass, string estudios, string direc);

protected:

private:
};

#endif // USUARIONORMAL_H
