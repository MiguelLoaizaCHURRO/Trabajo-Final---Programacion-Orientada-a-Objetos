/**
 * @file Usuarios.cpp
 * @brief Implementaci�n de la clase Usuarios que representa a los usuarios del sistema.
 *
 * @details Este archivo contiene la implementaci�n de la clase Usuarios, que modela a los usuarios del sistema.
 * Proporciona m�todos para la inicializaci�n de atributos y la manipulaci�n de informaci�n de usuario.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date �ltima modificaci�n: 10-12-2023
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
 * @brief Constructor de la clase Usuarios con nombre de usuario y contrase�a.
 * @param usu El nombre de usuario.
 * @param pass La contrase�a del usuario.
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
 * @brief Constructor de la clase Usuarios con informaci�n completa.
 * @param usu El nombre de usuario.
 * @param pass La contrase�a del usuario.
 * @param estudios El nivel de estudios del usuario.
 * @param direc La direcci�n del usuario.
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
 * @brief Establece la contrase�a del usuario mediante la entrada del usuario.
 */
void Usuarios::setPassword()
{
    fflush(stdin);
    cout<<"\tIngrese su Contrase�a: ";
    cin>>password;
}

/**
 * @brief Obtiene la contrase�a del usuario.
 * @return La contrase�a del usuario.
 */
string Usuarios::getPassword() const
{
    return password;
}

/**
 * @brief Establece el nivel de estudios del usuario mediante la selecci�n del usuario.
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
 * @brief Establece la direcci�n del usuario mediante la entrada del usuario.
 */
void Usuarios::setDireccion()
{
    fflush(stdin);
    cout<<"\tIngrese su direccion: ";
    cin>>direccion;
}

/**
 * @brief Obtiene la direcci�n del usuario.
 * @return La direcci�n del usuario.
 */
string Usuarios::getDireccion() const
{
    return direccion;
}
