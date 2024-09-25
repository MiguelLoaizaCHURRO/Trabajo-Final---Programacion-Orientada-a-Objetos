/**
 * @file UsuarioAdmin.cpp
 * @brief Implementación de la clase UsuarioAdmin, que representa a un usuario administrador y es una clase hija de Usuarios.
 *
 * @details Este archivo contiene la implementación de la clase UsuarioAdmin, que hereda de Usuarios y representa a un usuario administrador del sistema.
 * Proporciona métodos para la manipulación de información específica de los administradores.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Última modificación: 10-12-2023
 * @version 2.0
 */

#include "UsuarioAdmin.h"
#include "Usuarios.h"

#include <iostream>

using namespace std;

/**
 * @brief Constructor por defecto de la clase UsuarioAdmin.
 * Inicializa los atributos con valores predeterminados.
 */
UsuarioAdmin::UsuarioAdmin()
{
    tarjetaProfesional = "NO REGISTRA";
    estadoCivil = "NO REGISTRA";
    contrato = "NO REGISTRA";
}

/**
 * @brief Destructor virtual de la clase UsuarioAdmin.
 */
UsuarioAdmin::~UsuarioAdmin()
{
    //dtor
}

/**
 * @brief Constructor de la clase UsuarioAdmin con nombre de usuario y contraseña.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del usuario.
 */
UsuarioAdmin::UsuarioAdmin(string usu, string pass)
{
    nombreUsuario = usu;
    password = pass;
}

/**
 * @brief Constructor de la clase UsuarioAdmin con información básica.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del usuario.
 * @param tarjeta La tarjeta profesional del usuario.
 * @param estado El estado civil del usuario.
 * @param cont El tipo de contrato del usuario.
 */
UsuarioAdmin::UsuarioAdmin(string usu, string pass, string tarjeta, string estado, string cont)
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
 * @brief Constructor de la clase UsuarioAdmin con información completa.
 * @param usu El nombre de usuario.
 * @param pass La contraseña del usuario.
 * @param estudios El nivel de estudios del usuario.
 * @param direc La dirección del usuario.
 * @param tarjeta La tarjeta profesional del usuario.
 * @param estado El estado civil del usuario.
 * @param cont El tipo de contrato del usuario.
 */
UsuarioAdmin::UsuarioAdmin(string usu, string pass, string estudios, string direc, string tarjeta, string estado, string cont)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = estudios;
    direccion = direc;
    tarjetaProfesional = tarjeta;
    estadoCivil = estado;
    contrato = cont;
}

/**
 * @brief Establece la tarjeta profesional del usuario mediante la entrada del usuario.
 */
void UsuarioAdmin::setTarjetaProfesional()
{
    fflush(stdin);
    cout<<"\tIngrese su tarjeta profesional: ";
    cin>>tarjetaProfesional;
}

/**
 * @brief Obtiene la tarjeta profesional del usuario.
 * @return La tarjeta profesional del usuario.
 */
string UsuarioAdmin::getTarjetaProfesional() const
{
    return tarjetaProfesional;
}

/**
 * @brief Establece el estado civil del usuario mediante la selección del usuario.
 */
void UsuarioAdmin::setEstadoCivil()
{
    string tipos[] = {"Soltero", "Casado", "Viudo"};
    int opc;

    do
    {
        cout<<"\n\tTipos de estado civil:"<<endl;
        for (int i = 0; i < 3; i++)
            cout<<(i + 1)<<". "<<tipos[i]<<endl;

        cout<<"\n\tSeleccione su estado civil: ";
        cin>>opc;

        if (opc < 1 || opc > 3)
        {
            cout<<"\n\t.:Opción incorrecta. Por favor, ingrese una opción válida:."<<endl;
            system("pause");
        }

    }
    while (opc < 1 || opc > 3);

    estadoCivil = tipos[opc - 1];
}

/**
 * @brief Obtiene el estado civil del usuario.
 * @return El estado civil del usuario.
 */
string UsuarioAdmin::getEstadoCivil() const
{
    return estadoCivil;
}

/**
 * @brief Establece el tipo de contrato del usuario mediante la selección del usuario.
 */
void UsuarioAdmin::setContrato()
{
    string tipos[] = {"Termino fijo", "Indefinido", "Por proyecto"};
    int opc;

    do
    {
        cout<<"\n\tTipos de Contrato:"<<endl;
        for (int i = 0; i < 3; i++)
            cout<<(i + 1) <<". "<<tipos[i]<<endl;

        cout<<"\n\tSeleccione su tipo de contrato: ";
        cin>>opc;

        if (opc < 1 || opc > 3)
        {
            cout<<"\n\t.:Opción incorrecta. Por favor, ingrese una opción válida:."<<endl;
            system("pause");
        }

    }
    while (opc < 1 || opc > 3);

    contrato = tipos[opc - 1];
}

/**
 * @brief Obtiene el tipo de contrato del usuario.
 * @return El tipo de contrato del usuario.
 */
string UsuarioAdmin::getContrato() const
{
    return contrato;
}
