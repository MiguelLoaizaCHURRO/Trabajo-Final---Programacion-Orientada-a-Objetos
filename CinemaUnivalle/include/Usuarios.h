/**
 * @file Usuarios.h
 * @brief Definici�n de la clase Usuarios que representa a los usuarios del sistema.
 *
 * @details Este archivo contiene la definici�n de la clase Usuarios, que modela a los usuarios del sistema.
 * Ofrece diversas formas de construir instancias de usuarios, con diferentes niveles de informaci�n.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date �ltima modificaci�n: 10-12-2023
 * @version 2.0
 */

#ifndef USUARIOS_H
#define USUARIOS_H

#include <iostream>

using namespace std;

/**
 * @brief Clase Usuarios que representa a los usuarios del sistema.
 */
class Usuarios
{
public:
    string nombreUsuario, password, nivelEstudios, direccion;

    /**
     * @brief Constructor por defecto de la clase Usuarios.
     */
    Usuarios();

    /**
     * @brief Destructor virtual de la clase Usuarios.
     */
    virtual ~Usuarios();

    /**
     * @brief Constructor de la clase Usuarios con nombre de usuario y contrase�a.
     * @param nombreUsuario El nombre de usuario.
     * @param password La contrase�a del usuario.
     */
    Usuarios(string nombreUsuario, string password);

    /**
     * @brief Constructor de la clase Usuarios con informaci�n completa.
     * @param nombreUsuario El nombre de usuario.
     * @param password La contrase�a del usuario.
     * @param nivelEstudios El nivel de estudios del usuario.
     * @param direccion La direcci�n del usuario.
     */
    Usuarios(string nombreUsuario, string password, string nivelEstudios, string direccion);

    /**
     * @brief Establece el nombre de usuario.
     */
    void setUsuario();

    /**
     * @brief Obtiene el nombre de usuario.
     * @return El nombre de usuario.
     */
    string getUsuario() const;

    /**
     * @brief Establece la contrase�a del usuario.
     */
    void setPassword();

    /**
     * @brief Obtiene la contrase�a del usuario.
     * @return La contrase�a del usuario.
     */
    string getPassword() const;

    /**
     * @brief Establece el nivel de estudios del usuario.
     */
    void setNivelEstudios();

    /**
     * @brief Obtiene el nivel de estudios del usuario.
     * @return El nivel de estudios del usuario.
     */
    string getNivelEstudios() const;

    /**
     * @brief Establece la direcci�n del usuario.
     */
    void setDireccion();

    /**
     * @brief Obtiene la direcci�n del usuario.
     * @return La direcci�n del usuario.
     */
    string getDireccion() const;

protected:

private:
};

#endif // USUARIOS_H
