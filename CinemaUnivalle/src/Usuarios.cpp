/**
 * @file Usuarios.cpp
 * @brief Implementación de la clase Usuarios que representa a los usuarios del sistema.
 *
 * @details Este archivo contiene la implementación de la clase Usuarios, que modela a los usuarios del sistema.
 * Proporciona métodos para la inicialización de atributos y la manipulación de información de usuario.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Última modificación: 10-12-2023
 * @version 2.0
 */

#include "Usuarios.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor por defecto de la clase Usuarios.
 * Inicializa los atributos con valores predeterminados.
 */
Usuarios::Usuarios()
{
    nombreUsuario = "NN";
    password = "0000";
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Constructor de la clase Usuarios con nombre de usuario y contraseña.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del usuario.
 * Inicializa los atributos con valores dados y establece valores predeterminados.
 */
Usuarios::Usuarios(string usu, string pass)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Constructor de la clase Usuarios con información completa.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del usuario.
 * @param estudios El nivel de estudios del usuario.
 * @param direc La dirección del usuario.
 * Inicializa los atributos con valores dados.
 */
Usuarios::Usuarios(string usu, string pass, string estudios, string direc)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = estudios;
    direccion = direc;
}

/**
 * @brief Destructor virtual de la clase Usuarios.
 */
Usuarios::~Usuarios()
{
    //dtor
}

/**
 * @brief Establece el nombre de usuario mediante la entrada del usuario.
 */
void Usuarios::setUsuario()
{
    fflush(stdin);
    cout<<"\tIngrese nombre de usuario: ";
    cin>>nombreUsuario;
}

/**
 * @brief Obtiene el nombre de usuario.
 * @return El nombre de usuario.
 */
string Usuarios::getUsuario() const
{
    return nombreUsuario;
}

/**
 * @brief Establece la contraseña del usuario mediante la entrada del usuario.
 */
void Usuarios::setPassword()
{
    fflush(stdin);
    cout<<"\tIngrese su Contraseña: ";
    cin>>password;
}

/**
 * @brief Obtiene la contraseña del usuario.
 * @return La contraseña del usuario.
 */
string Usuarios::getPassword() const
{
    return password;
}

/**
 * @brief Establece el nivel de estudios del usuario mediante la selección del usuario.
 */
void Usuarios::setNivelEstudios()
{
    string tipos[] = {"Bachiller", "Tecnologo", "Profesional",
                      "Especialista", "Maestria", "Doctorado"
                     };
    int opc;
    do
    {
        cout<<"\n\n\tTipos de Nivel Estudios:"<<endl;
        for (int i = 0; i < 6; i++)
            cout<<(i + 1)<<". "<<tipos[i]<<endl;

        cout<<"\n\tSeleccione su nivel de estudios: ";
        cin>>opc;

        if (opc < 1 || opc > 6)
        {
            cout<<"\n\t.:Opcion incorrecta. Por favor, ingrese una opcion valida:."<<endl;
            system("pause");
        }
    }
    while (opc < 1 || opc > 6);

    nivelEstudios = tipos[opc - 1];
}

/**
 * @brief Obtiene el nivel de estudios del usuario.
 * @return El nivel de estudios del usuario.
 */
string Usuarios::getNivelEstudios() const
{
    return nivelEstudios;
}

/**
 * @brief Establece la dirección del usuario mediante la entrada del usuario.
 */
void Usuarios::setDireccion()
{
    fflush(stdin);
    cout<<"\tIngrese su direccion: ";
    cin>>direccion;
}

/**
 * @brief Obtiene la dirección del usuario.
 * @return La dirección del usuario.
 */
string Usuarios::getDireccion() const
{
    return direccion;
}
