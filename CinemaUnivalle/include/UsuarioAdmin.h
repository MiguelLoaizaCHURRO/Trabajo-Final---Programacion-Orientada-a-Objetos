/**
 * @file UsuarioAdmin.h
 * @brief Definici�n de la clase UsuarioAdmin, que representa a un usuario administrador y es una clase hija de Usuarios.
 *
 * @details Este archivo contiene la definici�n de la clase UsuarioAdmin, que hereda de Usuarios y representa a un usuario administrador del sistema.
 * Proporciona m�todos para la manipulaci�n de informaci�n espec�fica de los administradores.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date �ltima modificaci�n: 10-12-2023
 * @version 2.0
 */

#ifndef USUARIOADMIN_H
#define USUARIOADMIN_H

#include <iostream>

#include "Usuarios.h"

using namespace std;

/**
 * @class UsuarioAdmin
 * @brief Clase que representa a un usuario administrador, heredada de Usuarios.
 */
class UsuarioAdmin : public Usuarios
{
public:
    string tarjetaProfesional, estadoCivil, contrato;

    /**
     * @brief Constructor por defecto de la clase UsuarioAdmin.
     * Inicializa los atributos con valores predeterminados.
     */
    UsuarioAdmin();

    /**
     * @brief Destructor virtual de la clase UsuarioAdmin.
     */
    virtual ~UsuarioAdmin();

    /**
     * @brief Constructor de la clase UsuarioAdmin con nombre de usuario y contrase�a.
     * @param usu El nombre de usuario.
     * @param pass La contrase�a del usuario.
     * Inicializa los atributos con valores dados y establece valores predeterminados.
     */
    UsuarioAdmin(string usu, string pass);

    /**
     * @brief Constructor de la clase UsuarioAdmin con informaci�n completa.
     * @param usu El nombre de usuario.
     * @param pass La contrase�a del usuario.
     * @param tarjeta La tarjeta profesional del usuario administrador.
     * @param estado El estado civil del usuario administrador.
     * @param contrato El tipo de contrato del usuario administrador.
     * Inicializa los atributos con valores dados.
     */
    UsuarioAdmin(string usu, string pass, string tarjeta, string estado, string contrato);

    /**
     * @brief Constructor de la clase UsuarioAdmin con informaci�n completa y adicional.
     * @param usu El nombre de usuario.
     * @param pass La contrase�a del usuario.
     * @param tarjeta La tarjeta profesional del usuario administrador.
     * @param estado El estado civil del usuario administrador.
     * @param contrato El tipo de contrato del usuario administrador.
     * @param estudios El nivel de estudios del usuario.
     * @param direc La direcci�n del usuario.
     * Inicializa los atributos con valores dados.
     */
    UsuarioAdmin(string usu, string pass, string tarjeta, string estado, string contrato, string estudios, string direc);

    /**
     * @brief Establece la tarjeta profesional del usuario administrador mediante la entrada del usuario.
     */
    void setTarjetaProfesional();

    /**
     * @brief Obtiene la tarjeta profesional del usuario administrador.
     * @return La tarjeta profesional del usuario administrador.
     */
    string getTarjetaProfesional() const;

    /**
     * @brief Establece el estado civil del usuario administrador mediante la entrada del usuario.
     */
    void setEstadoCivil();

    /**
     * @brief Obtiene el estado civil del usuario administrador.
     * @return El estado civil del usuario administrador.
     */
    string getEstadoCivil() const;

    /**
     * @brief Establece el tipo de contrato del usuario administrador mediante la entrada del usuario.
     */
    void setContrato();

    /**
     * @brief Obtiene el tipo de contrato del usuario administrador.
     * @return El tipo de contrato del usuario administrador.
     */
    string getContrato() const;

protected:

private:
};

#endif // USUARIOADMIN_H
