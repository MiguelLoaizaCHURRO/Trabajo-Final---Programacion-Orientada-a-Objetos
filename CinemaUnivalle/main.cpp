/**
 * @file main.cpp
 * @brief Implementación del Programa Principal para gestionar un cine.
 *
 * @details Este programa representa un sistema de gestión para un cine, permitiendo iniciar sesión como administrador, taquillero o cliente,
 * con funcionalidades específicas para cada rol, como registro de usuarios, taquilleros, administradores, reservas, y manejo de información de
 * películas y salas de cine y tambien permite la actualizacion de usuarios y la eliminacion de usuarios.
 *
 * @section intro_sec Introducción
 *
 * Este programa utiliza las clases Usuarios, UsuarioAdmin, UsuarioNormal, Taquillero, Pelicula, Salas y OperacionBoleto para implementar
 * las funcionalidades descritas anteriormente.
 *
 * @section authors_sec Autores
 *
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Fecha ult. modificacion: 10-12-2023
 * @version Version: 3.0
 */

#include <iostream>
#include <vector>
#include <cstdlib>

#include "Usuarios.h"
#include "UsuarioAdmin.h"
#include "UsuarioNormal.h"
#include "Taquillero.h"
#include "Pelicula.h"
#include "Salas.h"
#include "OperacionBoleto.h"

using namespace std;

/**
 * @brief Muestra información sobre los autores del programa.
 *
 * @details Esta función imprime en la consola la información detallada sobre los autores del programa,
 * incluyendo sus nombres y números de identificación.
 *
 * @note La función utiliza comandos del sistema para borrar la pantalla antes de mostrar la información y
 * pausa la ejecución hasta que el usuario presione una tecla para continuar.
 *
 * @code{cpp}
 * void info();
 * @endcode
 */
void info()
{
    system("cls");
    cout << "\n\n\t\t\t**********************************************\n";
    cout << "\t\t\t**     Miguel Angel Loaiza - 2357855        **\n";
    cout << "\t\t\t**     Samuel Diaz Monedero - 2357726       **\n";
    cout << "\t\t\t**     Alejandro Manzano Rojas - 2357631    **\n";
    cout << "\t\t\t**********************************************\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Muestra información sobre los autores del programa.
 */
void info();

/**
 * @brief Inicializa usuarios base para pruebas.
 */
void UsuariosBase();

/**
 * @brief Muestra el menú principal y maneja la interacción con el usuario.
 */
void menu();

/**
 * @brief Realiza el inicio de sesión para un administrador.
 * @return true si el inicio de sesión es exitoso, false de lo contrario.
 */
bool IniciarAdmin();

/**
 * @brief Realiza el inicio de sesión para un taquillero.
 * @return true si el inicio de sesión es exitoso, false de lo contrario.
 */
bool IniciarTaquillero();

/**
 * @brief Realiza el inicio de sesión para un usuario normal.
 * @return true si el inicio de sesión es exitoso, false de lo contrario.
 */
bool IniciarUsuario();

/**
 * @brief Muestra el menú de administrador y maneja la interacción con el usuario.
 */
void menuAdministrador();

/**
 * @brief Menú de administrador con funcionalidades adicionales.
 */
void menuAdminSobrecarga();

/**
 * @brief Realiza el registro de un nuevo administrador.
 */
void RegistroAdmin1();

/**
 * @brief Realiza el registro de un nuevo administrador con información adicional.
 */
void RegistroAdmin2();

/**
 * @brief Menú de taquillero con funcionalidades adicionales.
 */
void menuTaquilleroSobrecarga();

/**
 * @brief Realiza el registro de un nuevo taquillero.
 */
void RegistroTaquillero1();

/**
 * @brief Realiza el registro de un nuevo taquillero con información adicional.
 */
void RegistroTaquillero2();

/**
 * @brief Menú de usuarios con funcionalidades adicionales.
 */
void menuUsuariosSobrecarga();

/**
 * @brief Realiza el registro de un nuevo usuario normal.
 */
void RegistroUsuario1();

/**
 * @brief Realiza el registro de un nuevo usuario normal con información adicional.
 */
void RegistroUsuario2();

/**
 * @brief Muestra la información de los administradores registrados.
 */
void MostrarAdmins();

/**
 * @brief Muestra la información de los taquilleros registrados.
 */
void MostrarTaquilleros();

/**
 * @brief Muestra la información de los usuarios normales registrados.
 */
void MostrarUsuarios();

/**
 * @brief Menú específico para un taquillero.
 */
void menuTaquillero();

/**
 * @brief Menú específico para un cliente.
 */
void menuCliente();

/**
 * @brief Menú para gestionar la información de las películas.
 */
void menuPeliculas();

/**
 * @brief Funcionalidad para manejar la información de la primera película.
 */
void pelicula1();

/**
 * @brief Funcionalidad para manejar la información de la segunda película.
 */
void pelicula2();

/**
 * @brief Funcionalidad para manejar la información de la tercera película.
 */

void pelicula3();

/**
 * @brief Muestra el menú para eliminar usuarios.
 *        Permite al usuario seleccionar el tipo de usuario a eliminar.
 */
void menuEliminar();

/**
 * @brief Elimina un usuario administrador.
 */
void eliminarAdmin();

/**
 * @brief Elimina un taquillero.
 */
void eliminarTaquillero();

/**
 * @brief Elimina un usuario normal.
 */
void eliminarUsuario();

/**
 * @brief Muestra el menú para actualizar usuarios.
 *        Permite al usuario seleccionar el tipo de usuario a actualizar.
 */
void menuActualizar();

/**
 * @brief Actualiza un usuario administrador.
 */
void actualizarAdmin();

/**
 * @brief Actualiza un taquillero.
 */
void actualizarTaquillero();

/**
 * @brief Actualiza un usuario normal.
 */
void actualizarUsuario();

/**
 * @brief Funcionalidad para realizar una reserva.
 *
 * @details Esta función permite a los usuarios realizar reservas de asientos para películas disponibles.
 * Utiliza los vectores 'peliculasVector' y 'cine' para gestionar la información de las películas y salas de cine.
 *
 * @param peliculasVector Vector de películas disponibles.
 * @param cine Vector de salas de cine.
 */
void reserva(vector<Pelicula>& peliculasVector, vector<Salas>& cine);

/**
 * @brief Vector que almacena instancias de administradores del sistema.
 *
 * @details Este vector se utiliza para almacenar objetos de la clase UsuarioAdmin, que representan a los administradores
 * del sistema de gestión de cine. Cada instancia en el vector corresponde a un administrador registrado en el sistema.
 * Se puede acceder y manipular este vector para gestionar la información y funcionalidades relacionadas con los administradores.
 *
 * @see UsuarioAdmin
 */
vector<UsuarioAdmin> vecUsuarioAdmin;

/**
 * @brief Vector que almacena instancias de usuarios normales del sistema.
 *
 * @details Este vector se utiliza para almacenar objetos de la clase UsuarioNormal, representando a los usuarios normales
 * registrados en el sistema de gestión de cine. Cada instancia en el vector corresponde a un usuario normal con acceso
 * a las funciones y características específicas para clientes.
 *
 * @see UsuarioNormal
 */
vector<UsuarioNormal> vecUsuarioNormal;

/**
 * @brief Vector que almacena instancias de taquilleros del sistema.
 *
 * @details Este vector se utiliza para almacenar objetos de la clase Taquillero, que representan a los taquilleros
 * registrados en el sistema de gestión de cine. Cada instancia en el vector corresponde a un taquillero con acceso a
 * funciones y características específicas para la venta y gestión de boletos en el cine.
 *
 * @see Taquillero
 */
vector<Taquillero> vecTaquillero;

/**
 * @brief Vector que almacena instancias de películas disponibles en el sistema.
 *
 * @details Este vector se utiliza para almacenar objetos de la clase Pelicula, que representan las películas disponibles
 * en el sistema de gestión de cine. Cada instancia en el vector corresponde a una película con información detallada sobre
 * su título, género, duración, etc. Este vector se utiliza para gestionar y acceder a la información relacionada con las películas.
 *
 * @see Pelicula
 */
vector<Pelicula> peliculasVector;

/**
 * @brief Vector de objetos Salas llamado "cine".
 *
 * @details El vector "cine" se inicializa con tres instancias de la clase Salas,
 * cada una con 5 filas, 10 columnas y el número total de salas es 3.
 *
 * @note Este vector representa las salas de cine disponibles en el programa y se
 * utiliza para gestionar la información de los asientos y realizar operaciones relacionadas
 * con la reserva de boletos en dichas salas.
 *
 * @code{cpp}
 * vector<Salas> cine(3, Salas(5, 10, 3));
 * @endcode
 *
 * @param cine Vector de salas de cine.
 * @param 3 Número total de salas.
 * @param Salas(5, 10, 3) Instancia de la clase Salas con 5 filas, 10 columnas y 3 salas.
 */
vector<Salas> cine(3, Salas(5, 10, 3));

/**
 * @brief Objeto encargado de gestionar operaciones relacionadas con la venta de boletos en el sistema de cine.
 *
 * @details La clase OperacionBoleto se utiliza para realizar operaciones específicas relacionadas con la venta de boletos
 * en el sistema de gestión de cine. Este objeto centraliza funciones como el registro de pagos, la generación de informes
 * de sala y el reporte general de recaudación.
 *
 * @see OperacionBoleto
 */
OperacionBoleto operacion;

/**
 * @brief Inicializa el sistema con usuarios y películas base para pruebas.
 *
 * @details La función UsuariosBase se encarga de inicializar el sistema con usuarios y películas base
 * para propósitos de prueba. Crea instancias de un administrador, un taquillero y un usuario normal,
 * así como películas iniciales para el sistema. Estos usuarios y películas sirven como datos de prueba
 * al iniciar el sistema de gestión de cine.
 *
 * @see UsuarioAdmin, Taquillero, UsuarioNormal, Pelicula
 */
void UsuariosBase()
{
    // Creación de usuario administrador
    UsuarioAdmin objPrincipal("miguel", "1420");
    vecUsuarioAdmin.push_back(objPrincipal);

    // Creación de taquillero
    Taquillero objPrincipal1("alejandro", "1234");
    vecTaquillero.push_back(objPrincipal1);

    // Creación de usuario normal
    UsuarioNormal objPrincipal2("samuel", "5678");
    vecUsuarioNormal.push_back(objPrincipal2);

    // Creación de películas
    Pelicula pelicula1("El Despertar del Cosmos", "Juan Garcia", "Ciencia Ficción", 120, 1);
    peliculasVector.push_back(pelicula1);

    Pelicula pelicula2("Sombras en el Pasado", "Maria Rodriguez", "Misterio", 105, 2);
    peliculasVector.push_back(pelicula2);

    Pelicula pelicula3("Aventuras en el Tiempo", "Carlos Perez", "Aventura", 135, 3);
    peliculasVector.push_back(pelicula3);
}

/**
 * @brief Función principal que maneja el menú principal del sistema de gestión de cine.
 *
 * @details La función menu presenta un menú principal interactivo para el usuario, permitiendo la
 * elección de iniciar sesión como administrador, taquillero, usuario, o salir del sistema. Dependiendo
 * de la opción seleccionada, llama a las funciones correspondientes para manejar la autenticación y
 * redirigir a los menús específicos de cada rol.
 *
 * @see IniciarAdmin, IniciarTaquillero, IniciarUsuario
 */
void menu()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema de Cinema Univalle....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Iniciar sesion de administracion\n";
        cout<<"\t2. Iniciar sesion de taquillero\n";
        cout<<"\t3. Iniciar sesion de usuario\n";
        cout<<"\t0. Salir\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            IniciarAdmin();
            break;
        }
        case 2:
        {
            IniciarTaquillero();
            break;
        }
        case 3:
        {
            IniciarUsuario();
            break;
        }
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            system("pause");
            return;
            break;
        default:
            system("cls");
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            system("pause");
            system("cls");
            break;
        }

    }
    while (opc != 0);
}

/**
 * @brief Función para realizar el inicio de sesión de un administrador en el sistema.
 *
 * @details La función solicita al usuario ingresar un nombre de usuario y una contraseña de administrador.
 * Luego, verifica si las credenciales coinciden con algún administrador almacenado en el vector de administradores.
 * Si las credenciales son correctas, muestra un mensaje de inicio de sesión exitoso y redirige al menú del administrador.
 * Si las credenciales son incorrectas, muestra un mensaje de fallo y regresa al menú principal.
 *
 * @return true si el inicio de sesión es exitoso, false si falla.
 *
 * @see UsuarioAdmin, vecUsuarioAdmin, menuAdministrador
 */
bool IniciarAdmin()
{
    system("cls");
    cout<<endl<<endl;
    string username, password;
    cout<<"\tIngrese el nombre de usuario de administrador: ";
    cin>>username;
    cout<<"\tIngrese la contraseña de administrador: ";
    cin>>password;

    // Verifica si las credenciales coinciden con algún administrador en el vector
    for (const UsuarioAdmin& admin : vecUsuarioAdmin)
    {
        if (admin.getUsuario() == username && admin.getPassword() == password)
        {
            cout<<endl<<endl;
            cout<<"\t\t.:Inicio de sesion de administrador exitoso:." << endl;
            cout<<endl<<endl;
            system("pause");
            system("cls");
            menuAdministrador();
            return true;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\t.:Inicio de sesion de administrador fallido. "<<endl;
    cout<<"\t\t.:Nombre de usuario o contraseña incorrectos:."<<endl<<endl;
    system("pause");
    system("cls");
    return false;
}

/**
 * @brief Función para realizar el inicio de sesión de un taquillero en el sistema.
 *
 * @details La función solicita al usuario ingresar un nombre de usuario y una contraseña de taquillero.
 * Luego, verifica si las credenciales coinciden con algún taquillero almacenado en el vector de taquilleros.
 * Si las credenciales son correctas, muestra un mensaje de inicio de sesión exitoso y redirige al menú del taquillero.
 * Si las credenciales son incorrectas, muestra un mensaje de fallo y regresa al menú principal.
 *
 * @return true si el inicio de sesión es exitoso, false si falla.
 *
 * @see Taquillero, vecTaquillero, menuTaquillero
 */
bool IniciarTaquillero()
{
    system("cls");
    cout<<endl<<endl;
    string username, password;
    cout<<"\tIngrese el nombre de usuario de taquillero: ";
    cin>>username;
    cout<<"\tIngrese la contraseña de taquillero: ";
    cin>>password;

    // Verifica si las credenciales coinciden con algún taquillero en el vector
    for (const Taquillero& taqui : vecTaquillero)
    {
        if (taqui.getUsuario() == username && taqui.getPassword() == password)
        {
            cout<<endl<<endl;
            cout<<"\t\t.:Inicio de sesion de taquillero exitoso:." << endl;
            cout<<endl<<endl;
            system("pause");
            system("cls");
            menuTaquillero();
            return true;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\t.:Inicio de sesion de taquillero fallido. "<<endl;
    cout<<"\t\t.:Nombre de usuario o contraseña incorrectos:."<<endl<<endl;
    system("pause");
    system("cls");
    return false;
}

/**
 * @brief Función para realizar el inicio de sesión de un usuario normal en el sistema.
 *
 * @details La función solicita al usuario ingresar un nombre de usuario y una contraseña de cliente.
 * Luego, verifica si las credenciales coinciden con algún usuario normal almacenado en el vector de usuarios normales.
 * Si las credenciales son correctas, muestra un mensaje de inicio de sesión exitoso y redirige al menú del cliente.
 * Si las credenciales son incorrectas, muestra un mensaje de fallo y regresa al menú principal.
 *
 * @return true si el inicio de sesión es exitoso, false si falla.
 *
 * @see UsuarioNormal, vecUsuarioNormal, menuCliente
 */
bool IniciarUsuario()
{
    system("cls");
    cout<<endl<<endl;
    string username, password;
    cout<<"\tIngrese el nombre de usuario de cliente: ";
    cin>>username;
    cout<<"\tIngrese la contraseña de cliente: ";
    cin>>password;

    // Verifica si las credenciales coinciden con algún usuario normal en el vector
    for (const UsuarioNormal& usuario : vecUsuarioNormal)
    {
        if (usuario.getUsuario() == username && usuario.getPassword() == password)
        {
            cout<<endl<<endl;
            cout<<"\t\t.:Inicio de sesion de cliente exitoso:." << endl;
            cout<<endl<<endl;
            system("pause");
            system("cls");
            menuCliente();
            return true;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\t.:Inicio de sesion de cliente fallido. "<<endl;
    cout<<"\t\t.:Nombre de usuario o contraseña incorrectos:."<<endl<<endl;
    system("pause");
    system("cls");
    return false;
}

/**
 * @brief Elimina un administrador del sistema.
 *        Solicita al usuario el nombre de usuario y contraseña del administrador a eliminar.
 *        Busca en el vector de administradores y elimina al administrador si coincide con los datos proporcionados.
 * @note Esta función modificará directamente el vector `vecUsuarioAdmin`.
 * @note Si se encuentra y elimina un administrador, muestra un mensaje de éxito.
 *       Si no se encuentra un administrador con los datos proporcionados, muestra un mensaje de error.
 * @details La función utiliza la función `getUsuario` y `getPassword` de la clase `UsuarioAdmin` para comparar
 *          con los datos ingresados por el usuario.
 * @see UsuarioAdmin
 * @see vecUsuarioAdmin
 */
void eliminarAdmin()
{
    system("cls");
    string name, pass;
    cout<<"\n\n\t\t....Eliminar administrador....\n\n";
    cout<<"\n\tIngrese el nombre de usuario del administrador: ";
    cin>>name;
    cout<<"\n\tIngrese la contraseña del administrador: ";
    cin>>pass;
    for (int i = 0; i < vecUsuarioAdmin.size(); i++)
    {
        if (vecUsuarioAdmin[i].getUsuario() == name && vecUsuarioAdmin[i].getPassword() == pass)
        {
            //ya eliminamos el elemento por posicion
            vecUsuarioAdmin.erase(vecUsuarioAdmin.begin() + i);
            break;
        }
        else
        {
            cout<<"\n\t\t.:No hay un administrador registrado con esos datos:.\n\n";
        }
    }
    system("pause");
    system("cls");
}

/**
 * @brief Elimina un taquillero del sistema.
 *        Solicita al usuario el nombre de usuario y contraseña del taquillero a eliminar.
 *        Busca en el vector de taquilleros y elimina al taquillero si coincide con los datos proporcionados.
 * @note Esta función modificará directamente el vector `vecTaquillero`.
 * @note Si se encuentra y elimina un taquillero, muestra un mensaje de éxito.
 *       Si no se encuentra un taquillero con los datos proporcionados, muestra un mensaje de error.
 * @details La función utiliza la función `getUsuario` y `getPassword` de la clase `Taquillero` para comparar
 *          con los datos ingresados por el usuario.
 * @see Taquillero
 * @see vecTaquillero
 */
void eliminarTaquillero()
{
    system("cls");
    string name, pass;
    cout<<"\n\n\t\t....Eliminar taquillero....\n\n";
    cout<<"\n\tIngrese el nombre de usuario del taquillero: ";
    cin>>name;
    cout<<"\n\tIngrese la contraseña del taquillero: ";
    cin>>pass;
    for (int i = 0; i < vecTaquillero.size(); i++)
    {
        if (vecTaquillero[i].getUsuario() == name && vecTaquillero[i].getPassword() == pass)
        {
            //ya eliminamos el elemento por posicion
            vecTaquillero.erase(vecTaquillero.begin() + i);
            break;
        }
        else
        {
            cout<<"\n\t\t.:No hay un administrador registrado con esos datos:.\n\n";
        }
    }
    system("pause");
    system("cls");
}

/**
 * @brief Elimina un usuario normal (cliente) del sistema.
 *        Solicita al usuario el nombre de usuario y contraseña del cliente a eliminar.
 *        Busca en el vector de usuarios normales y elimina al usuario si coincide con los datos proporcionados.
 * @note Esta función modificará directamente el vector `vecUsuarioNormal`.
 * @note Si se encuentra y elimina un usuario normal, muestra un mensaje de éxito.
 *       Si no se encuentra un usuario normal con los datos proporcionados, muestra un mensaje de error.
 * @details La función utiliza la función `getUsuario` y `getPassword` de la clase `UsuarioNormal` para comparar
 *          con los datos ingresados por el usuario.
 * @see UsuarioNormal
 * @see vecUsuarioNormal
 */
void eliminarUsuario()
{
    system("cls");
    string name, pass;
    cout<<"\n\n\t\t....Eliminar Cliente....\n\n";
    cout<<"\n\tIngrese el nombre de usuario del cliente: ";
    cin>>name;
    cout<<"\n\tIngrese la contraseña del cliente: ";
    cin>>pass;
    for (int i = 0; i < vecUsuarioNormal.size(); i++)
    {
        if (vecUsuarioNormal[i].getUsuario() == name && vecUsuarioNormal[i].getPassword() == pass)
        {
            //ya eliminamos el elemento por posicion
            vecUsuarioNormal.erase(vecUsuarioNormal.begin() + i);
            break;
        }
        else
        {
            cout<<"\n\t\t.:No hay un administrador registrado con esos datos:.\n\n";
        }
    }
    system("pause");
    system("cls");
}

/**
 * @brief Menú para eliminar usuarios del sistema.
 *        Proporciona opciones para eliminar administradores, taquilleros y clientes.
 *        Utiliza las funciones `eliminarAdmin`, `eliminarTaquillero` y `eliminarUsuario` para realizar las eliminaciones.
 * @note Este menú se ejecuta en un bucle hasta que el usuario elige la opción de volver (0).
 * @details Muestra un menú con opciones numeradas para eliminar tipos específicos de usuarios.
 *          Si elige una opción válida, invoca la función correspondiente para realizar la eliminación.
 *          Si elige la opción de volver (0), sale del bucle y retorna a la función que llamó a este menú.
 * @see eliminarAdmin
 * @see eliminarTaquillero
 * @see eliminarUsuario
 */
void menuEliminar()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Eliminar Usuarios....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Eliminar administrador\n";
        cout<<"\t2. Eliminar taquillero\n";
        cout<<"\t3. Eliminar Cliente\n";
        cout<<"\t0. Volver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            eliminarAdmin();
            break;
        }
        case 2:
        {
            eliminarTaquillero();
            break;
        }
        case 3:
        {
            eliminarUsuario();
            break;
        }
        case 0:
            return;
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Permite la actualización de información de un administrador.
 *        Solicita el nombre de usuario y contraseña para buscar y actualizar el usuario administrador correspondiente.
 * @details Muestra un mensaje para ingresar el nombre de usuario y contraseña.
 *          Luego, verifica si existe un administrador con esos datos y, si es así, permite la actualización de la información.
 *          La información actualizable incluye usuario, contraseña, nivel de estudios, dirección, tarjeta profesional, estado civil y contrato.
 * @note Se utiliza un bucle para buscar al administrador por nombre de usuario y contraseña.
 *       Si encuentra al administrador, muestra un mensaje indicando que el usuario fue encontrado y comienza la actualización.
 *       Después de actualizar, la función retorna para salir.
 *       Si no encuentra al administrador, muestra un mensaje informando que no hay un administrador registrado con esos datos.
 * @see vecUsuarioAdmin
 */
void actualizarAdmin()
{
    system("cls");
    string name, pass;
    cout<<"\n\n\t\t....Actualizar administrador....\n\n";
    cout<<"\n\tIngrese el nombre de usuario del administrador: ";
    cin>>name;
    cout<<"\n\tIngrese la contraseña del administrador: ";
    cin>>pass;
    // Verificar si ya existe un usuario y actualiza
    for (int i = 0; i < vecUsuarioAdmin.size(); ++i)
    {
        if (vecUsuarioAdmin[i].getUsuario() == name && vecUsuarioAdmin[i].getPassword() == pass)
        {
            cout<<"\n\n\t\t.:Usuario encontrado:.\n";
            cout<<"\t\t.:Comenzando actualizacion:.\n\n";
            vecUsuarioAdmin[i].setUsuario();
            vecUsuarioAdmin[i].setPassword();
            vecUsuarioAdmin[i].setNivelEstudios();
            vecUsuarioAdmin[i].setDireccion();
            vecUsuarioAdmin[i].setTarjetaProfesional();
            vecUsuarioAdmin[i].setEstadoCivil();
            vecUsuarioAdmin[i].setContrato();
            system("pause");
            system("cls");
            return;  // Salir de la función, el usuario ya fue actualizado
        }
    }

    // Informar al administrador que no hay usuario registrado
    cout<<"\n\t\t.:No hay un administrador registrado con esos datos:.\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Permite la actualización de información de un taquillero.
 *        Solicita el nombre de usuario y contraseña para buscar y actualizar el taquillero correspondiente.
 * @details Muestra un mensaje para ingresar el nombre de usuario y contraseña.
 *          Luego, verifica si existe un taquillero con esos datos y, si es así, permite la actualización de la información.
 *          La información actualizable incluye usuario, contraseña, nivel de estudios, dirección, tarjeta profesional, estado civil, contrato y número de identificación.
 * @note Se utiliza un bucle para buscar al taquillero por nombre de usuario y contraseña.
 *       Si encuentra al taquillero, muestra un mensaje indicando que el usuario fue encontrado y comienza la actualización.
 *       Después de actualizar, la función retorna para salir.
 *       Si no encuentra al taquillero, muestra un mensaje informando que no hay un taquillero registrado con esos datos.
 * @see vecTaquillero
 */
void actualizarTaquillero()
{
    system("cls");
    string name, pass;
    cout<<"\n\n\t\t....Actualizar taquillero....\n\n";
    cout<<"\n\tIngrese el nombre de usuario del taquillero: ";
    cin>>name;
    cout<<"\n\tIngrese la contraseña del taquillero: ";
    cin>>pass;
    // Verificar si ya existe un usuario y actualiza
    for (int i = 0; i < vecTaquillero.size(); ++i)
    {
        if (vecTaquillero[i].getUsuario() == name && vecTaquillero[i].getPassword() == pass)
        {
            cout<<"\n\n\t\t.:Usuario encontrado:.\n";
            cout<<"\t\t.:Comenzando actualizacion:.\n\n";
            vecTaquillero[i].setUsuario();
            vecTaquillero[i].setPassword();
            vecTaquillero[i].setNivelEstudios();
            vecTaquillero[i].setDireccion();
            vecTaquillero[i].setTarjetaProfesional();
            vecTaquillero[i].setEstadoCivil();
            vecTaquillero[i].setContrato();
            vecTaquillero[i].setNumID();
            system("pause");
            system("cls");
            return;  // Salir de la función, el usuario ya fue actualizado
        }
    }

    // Informar al administrador que no hay usuario registrado
    cout<<"\n\t\t.:No hay un taquillero registrado con esos datos:.\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Permite la actualización de información de un usuario normal (cliente).
 *        Solicita el nombre de usuario y contraseña para buscar y actualizar el usuario correspondiente.
 * @details Muestra un mensaje para ingresar el nombre de usuario y contraseña.
 *          Luego, verifica si existe un usuario normal con esos datos y, si es así, permite la actualización de la información.
 *          La información actualizable incluye usuario, contraseña, nivel de estudios y dirección.
 * @note Se utiliza un bucle para buscar al usuario normal por nombre de usuario y contraseña.
 *       Si encuentra al usuario normal, muestra un mensaje indicando que el usuario fue encontrado y comienza la actualización.
 *       Después de actualizar, la función retorna para salir.
 *       Si no encuentra al usuario normal, muestra un mensaje informando que no hay un cliente registrado con esos datos.
 * @see vecUsuarioNormal
 */
void actualizarUsuario()
{
    system("cls");
    string name, pass;
    cout<<"\n\n\t\t....Actualizar cliente....\n\n";
    cout<<"\n\tIngrese el nombre de usuario del cliente: ";
    cin>>name;
    cout<<"\n\tIngrese la contraseña del cliente: ";
    cin>>pass;
    // Verificar si ya existe un usuario y actualiza
    for (int i = 0; i < vecUsuarioNormal.size(); ++i)
    {
        if (vecUsuarioNormal[i].getUsuario() == name && vecUsuarioNormal[i].getPassword() == pass)
        {
            cout<<"\n\n\t\t.:Usuario encontrado:.\n";
            cout<<"\t\t.:Comenzando actualizacion:.\n\n";
            vecUsuarioNormal[i].setUsuario();
            vecUsuarioNormal[i].setPassword();
            vecUsuarioNormal[i].setNivelEstudios();
            vecUsuarioNormal[i].setDireccion();
            system("pause");
            system("cls");
            return;  // Salir de la función, el usuario ya fue actualizado
        }
    }

    // Informar al administrador que no hay usuario registrado
    cout<<"\n\t\t.:No hay un cliente registrado con esos datos:.\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Menú principal para actualizar usuarios, proporcionando opciones para actualizar administradores, taquilleros y clientes.
 * @details Muestra un menú interactivo con opciones numeradas para actualizar diferentes tipos de usuarios: administradores, taquilleros y clientes.
 *          Permite al usuario seleccionar una opción e invocar la función correspondiente para la actualización del usuario.
 *          Si se elige la opción 0, la función retorna para salir del menú de actualización.
 * @note Se utiliza un bucle para mostrar el menú hasta que el usuario selecciona la opción 0 para volver.
 *       Cada opción del menú invoca una función específica para la actualización del tipo de usuario correspondiente.
 *       Si se ingresa una opción incorrecta, muestra un mensaje indicando que la opción es incorrecta.
 * @see actualizarAdmin, actualizarTaquillero, actualizarUsuario
 */
void menuActualizar()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Actualizar Usuarios....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Actualizar administrador\n";
        cout<<"\t2. Actualizar taquillero\n";
        cout<<"\t3. Actualizar Cliente\n";
        cout<<"\t0. Volver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            actualizarAdmin();
            break;
        }
        case 2:
        {
            actualizarTaquillero();
            break;
        }
        case 3:
        {
            actualizarUsuario();
            break;
        }
        case 0:
            return;
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Maneja el menú principal destinado a un administrador.
 *
 * @details Permite realizar diversas operaciones, incluyendo:
 * - Registro de administradores, taquilleros y usuarios.
 * - Actualización de información de películas (salas 1, 2 y 3).
 * - Actualización de información de usuarios.
 * - Eliminación de usuarios.
 * - Reserva de asientos en salas de cine.
 * - Visualización de información detallada sobre administradores, taquilleros y usuarios.
 * - Generación de reportes de recaudación por sala y total.
 * - Visualización de información sobre los programadores del sistema.
 * - Opción para cerrar sesión y salir del sistema.
 *
 * @note Utiliza funciones específicas para cada operación y un bucle para mostrar el menú hasta que el usuario selecciona la opción 0 para salir.
 *
 * @see menuAdminSobrecarga, menuTaquilleroSobrecarga, menuUsuariosSobrecarga, menuPeliculas, reserva,
 * MostrarAdmins, MostrarTaquilleros, MostrarUsuarios, menuActualizar, menuEliminar, OperacionBoleto::generarReporteSala, OperacionBoleto::generarReporteGeneral, info
 */
void menuAdministrador()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema de administrador....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro de administrador\n";
        cout<<"\t2. Registro de taquillero\n";
        cout<<"\t3. Registro de usuario\n";
        cout<<"\t4. Actualizar peliculas (salas 1, 2 y 3)\n";
        cout<<"\t5. Actualizar usuarios\n";
        cout<<"\t6. Eliminar Usuarios\n";
        cout<<"\t7. Reservar asiento\n";
        cout<<"\t8. Mostrar administradores \n";
        cout<<"\t9. Mostrar taquilleros \n";
        cout<<"\t10. Mostrar usuarios\n";
        cout<<"\t11. Reporte general de las salas\n";
        cout<<"\t12. Info programadores\n";
        cout<<"\t0. Cerrar sesion\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            menuAdminSobrecarga();
            break;
        }
        case 2:
        {
            menuTaquilleroSobrecarga();
            break;
        }
        case 3:
        {
            menuUsuariosSobrecarga();
            break;
        }
        case 4:
        {
            menuPeliculas();
            break;
        }
        case 5:
        {
            menuActualizar();
            break;
        }
        case 6:
        {
            menuEliminar();
            break;
        }
        case 7:
        {
            system("cls");
            reserva(peliculasVector, cine);
            system("cls");
            break;
        }
        case 8:
        {
            MostrarAdmins();
            break;
        }
        case 9:
        {
            MostrarTaquilleros();
            break;
        }
        case 10:
        {
            MostrarUsuarios();
            break;
        }
        case 11:
        {
            system("cls");
            operacion.generarReporteSala(1);
            operacion.generarReporteSala(2);
            operacion.generarReporteSala(3);
            operacion.generarReporteGeneral();
            system("pause");
            system("cls");
            break;
        }
        case 12:
        {
            info();
            break;
        }
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            system("pause");
            return;
            break;
        default:
            system("cls");
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            system("pause");
            system("cls");
            break;
        }

    }
    while (opc != 0);
}

/**
 * @brief Menú para el registro de administradores con diferentes opciones.
 *
 * @details Permite al administrador elegir entre dos opciones de registro: uno básico y otro completo.
 * El registro básico solo incluye la creación del nombre de usuario y la contraseña, mientras que
 * el registro completo solicita información adicional, como nombre, apellido y número de identificación.
 * Además, proporciona la opción de volver al menú anterior.
 *
 * @see RegistroAdmin1, RegistroAdmin2
 */
void menuAdminSobrecarga()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Registro de administrador....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro basico de administrador\n";
        cout<<"\t2. Registro completo de administrador\n";
        cout<<"\t0. Volver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            RegistroAdmin1();
            break;
        }
        case 2:
        {
            RegistroAdmin2();
            break;
        }
        case 0:
            return;
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Realiza el registro de un administrador con información básica.
 *
 * @details Solicita y guarda información esencial para el registro de un administrador, como el nombre de usuario,
 * la contraseña, la tarjeta profesional, el estado civil y el tipo de contrato. Luego, crea un nuevo objeto de la
 * clase UsuarioAdmin con la información proporcionada y lo agrega al vector que almacena instancias de administradores.
 *
 * @see UsuarioAdmin, vecUsuarioAdmin
 */
void RegistroAdmin1()
{
    string usu, pass, tarjeta, estado, cont;
    system("cls");

    cout<<"\n\n\t\t.:Informacion basica del administrador:."<<endl<<endl;
    UsuarioAdmin objAdmin1;
    objAdmin1.setUsuario();
    objAdmin1.setPassword();
    objAdmin1.setTarjetaProfesional();
    objAdmin1.setEstadoCivil();
    objAdmin1.setContrato();
    usu = objAdmin1.getUsuario();
    pass = objAdmin1.getPassword();
    tarjeta = objAdmin1.getTarjetaProfesional();
    estado = objAdmin1.getEstadoCivil();
    cont = objAdmin1.getContrato();

    UsuarioAdmin usuario1(usu, pass, tarjeta, estado, cont);
    vecUsuarioAdmin.push_back(usuario1);
    system("cls");
}

/**
 * @brief Realiza el registro de un administrador con información completa.
 *
 * @details Solicita y guarda información detallada para el registro de un administrador, como el nombre de usuario,
 * la contraseña, el nivel de estudios, la dirección, la tarjeta profesional, el estado civil y el tipo de contrato.
 * Luego, crea un nuevo objeto de la clase UsuarioAdmin con la información proporcionada y lo agrega al vector que
 * almacena instancias de administradores.
 *
 * @see UsuarioAdmin, vecUsuarioAdmin
 */
void RegistroAdmin2()
{
    string usu, pass, estudios, direc, tarjeta, estado, cont;
    system("cls");

    cout<<"\n\n\t\t.:Informacion completa del administrador:."<<endl<<endl;
    UsuarioAdmin objAdmin2;
    objAdmin2.setUsuario();
    objAdmin2.setPassword();
    objAdmin2.setNivelEstudios();
    objAdmin2.setDireccion();
    objAdmin2.setTarjetaProfesional();
    objAdmin2.setEstadoCivil();
    objAdmin2.setContrato();
    usu = objAdmin2.getUsuario();
    pass = objAdmin2.getPassword();
    estudios = objAdmin2.getNivelEstudios();
    direc = objAdmin2.getDireccion();
    tarjeta = objAdmin2.getTarjetaProfesional();
    estado = objAdmin2.getEstadoCivil();
    cont = objAdmin2.getContrato();

    UsuarioAdmin usuario2(usu, pass, estudios, direc, tarjeta, estado, cont);
    vecUsuarioAdmin.push_back(usuario2);
    system("cls");
}

/**
 * @brief Menú para el registro de taquilleros con diferentes opciones.
 *
 * @details Proporciona opciones para el registro de taquilleros, permitiendo elegir entre un registro básico o un
 * registro completo. Después de la elección, redirige a las funciones correspondientes para realizar el registro.
 *
 * @see RegistroTaquillero1, RegistroTaquillero2
 */
void menuTaquilleroSobrecarga()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Registro de taquillero....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro basico del taquillero\n";
        cout<<"\t2. Registro completo del taquillero\n";
        cout<<"\t0. Volver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            RegistroTaquillero1();
            break;
        }
        case 2:
        {
            RegistroTaquillero2();
            break;
        }
        case 0:
            return;
            break;
        default:
            system("cls");
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            system("pause");
            system("cls");
            break;
        }

    }
    while (opc != 0);
}

/**
 * @brief Realiza el registro de un taquillero con información básica.
 *
 * @details Solicita y guarda información como usuario, contraseña, tarjeta profesional,
 * estado civil y tipo de contrato. Luego, crea un nuevo objeto Taquillero y lo agrega al vector de taquilleros.
 */
void RegistroTaquillero1()
{
    string usu, pass, tarjeta, estado, cont;
    system("cls");

    cout<<"\n\n\t\t.:Informacion basica del taquillero:."<<endl<<endl;
    Taquillero objTaqui1;
    objTaqui1.setUsuario();
    objTaqui1.setPassword();
    objTaqui1.setTarjetaProfesional();
    objTaqui1.setEstadoCivil();
    objTaqui1.setContrato();
    usu = objTaqui1.getUsuario();
    pass = objTaqui1.getPassword();
    tarjeta = objTaqui1.getTarjetaProfesional();
    estado = objTaqui1.getEstadoCivil();
    cont = objTaqui1.getContrato();

    // Crear un nuevo objeto Taquillero y agregarlo al vector de taquilleros
    Taquillero usuario1(usu, pass, tarjeta, estado, cont);
    vecTaquillero.push_back(objTaqui1);

    system("cls");
}

/**
 * @brief Realiza el registro de un taquillero con información completa.
 *
 * @details Solicita y guarda información como usuario, contraseña, nivel de estudios,
 * dirección, tarjeta profesional, estado civil, tipo de contrato y número de identificación.
 * Luego, crea un nuevo objeto Taquillero y lo agrega al vector de taquilleros.
 */
void RegistroTaquillero2()
{
    string usu, pass, estudios, direc, tarjeta, estado, cont, ID;
    system("cls");

    cout<<"\n\n\t\t.:Informacion completa del taquillero:."<<endl<<endl;
    Taquillero objTaqui2;
    objTaqui2.setUsuario();
    objTaqui2.setPassword();
    objTaqui2.setNivelEstudios();
    objTaqui2.setDireccion();
    objTaqui2.setTarjetaProfesional();
    objTaqui2.setEstadoCivil();
    objTaqui2.setContrato();
    objTaqui2.setNumID();
    usu = objTaqui2.getUsuario();
    pass = objTaqui2.getPassword();
    estudios = objTaqui2.getNivelEstudios();
    direc = objTaqui2.getDireccion();
    tarjeta = objTaqui2.getTarjetaProfesional();
    estado = objTaqui2.getEstadoCivil();
    cont = objTaqui2.getContrato();
    ID = objTaqui2.getNumID();

    // Crear un nuevo objeto Taquillero y agregarlo al vector de taquilleros
    Taquillero usuario2(usu, pass, estudios, direc, tarjeta, estado, cont, ID);
    vecTaquillero.push_back(objTaqui2);

    system("cls");
}

/**
 * @brief Menú para el registro de usuarios con diferentes opciones.
 *
 * @details Permite al usuario elegir entre registrar un usuario con información básica o completa,
 * proporcionando las opciones correspondientes. Además, permite volver al menú anterior.
 */
void menuUsuariosSobrecarga()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Registro de usuario....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro basico de usuario\n";
        cout<<"\t2. Registro completo de usuario\n";
        cout<<"\t0. Volver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            RegistroUsuario1();
            break;
        }
        case 2:
        {
            RegistroUsuario2();
            break;
        }
        case 0:
            return;
            break;
        default:
            system("cls");
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            system("pause");
            system("cls");
            break;
        }

    }
    while (opc != 0);
}

/**
 * @brief Realiza el registro de un usuario con información básica.
 *
 * @details Solicita y guarda información como usuario y contraseña. Luego,
 * crea un nuevo objeto UsuarioNormal y lo agrega al vector correspondiente.
 */
void RegistroUsuario1()
{
    string usu, pass;
    system("cls");

    cout<<"\n\n\t\t.:Informacion basica del usuario:."<<endl<<endl;
    UsuarioNormal objUsuario;
    objUsuario.setUsuario();
    objUsuario.setPassword();
    usu = objUsuario.getUsuario();
    pass = objUsuario.getPassword();

    UsuarioNormal usuario1(usu, pass);
    vecUsuarioNormal.push_back(objUsuario);
    system("cls");
}

/**
 * @brief Realiza el registro de un usuario con información completa.
 *
 * @details Solicita y guarda información como usuario, contraseña, nivel de estudios
 * y dirección. Luego, crea un nuevo objeto UsuarioNormal y lo agrega al vector correspondiente.
 */
void RegistroUsuario2()
{
    string usu, pass, estudios, direc;
    system("cls");

    cout<<"\n\n\t\t.:Informacion completa del usuario:."<<endl<<endl;
    UsuarioNormal objUsuario;
    objUsuario.setUsuario();
    objUsuario.setPassword();
    objUsuario.setNivelEstudios();
    objUsuario.setDireccion();
    usu = objUsuario.getUsuario();
    pass = objUsuario.getPassword();
    estudios = objUsuario.getNivelEstudios();
    direc = objUsuario.getDireccion();

    UsuarioNormal usuario2(usu, pass, estudios, direc);
    vecUsuarioNormal.push_back(objUsuario);
    system("cls");
}

/**
 * @brief Menú principal para el Taquillero con diferentes opciones.
 *
 * @details Permite al taquillero realizar diversas operaciones como reservar asientos,
 * actualizar información de películas en salas 1, 2 y 3, y mostrar el estado de cada sala.
 * Además, proporciona la opción de cerrar sesión.
 */
void menuTaquillero()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema de Taquillero....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Reservar asiento\n";
        cout<<"\t2. Actualizar peliculas (salas 1, 2 y 3)\n";
        cout<<"\t3. Mostrar Sala 1\n";
        cout<<"\t4. Mostrar Sala 2\n";
        cout<<"\t5. Mostrar Sala 3\n";
        cout<<"\t0. Cerrar sesion\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            system("cls");
            reserva(peliculasVector, cine);
            system("cls");
            break;
        }
        case 2:
        {
            system("cls");
            menuPeliculas();
            system("cls");
            break;
        }
        case 3:
        {
            system("cls");
            // Acceder a la sala seleccionada
            Salas& salaSeleccionada = cine[0];

            // Mostrar estado de la sala seleccionada
            salaSeleccionada.mostrarEstado(0);
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            system("cls");
            // Acceder a la sala seleccionada
            Salas& salaSeleccionada = cine[1];

            // Mostrar estado de la sala seleccionada
            salaSeleccionada.mostrarEstado(1);
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            system("cls");
            // Acceder a la sala seleccionada
            Salas& salaSeleccionada = cine[2];

            // Mostrar estado de la sala seleccionada
            salaSeleccionada.mostrarEstado(2);
            system("pause");
            system("cls");
            break;
        }
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            system("pause");
            return;
            break;
        default:
            system("cls");
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            system("pause");
            system("cls");
            break;
        }

    }
    while (opc != 0);
}

/**
 * @brief Funcionalidad para realizar una reserva de asientos en las salas de cine.
 *
 * @details Permite al usuario seleccionar una sala, visualizar la información de películas
 * disponibles en esa sala y realizar reservas de asientos. La función interactúa con el vector
 * de películas y el vector de salas de cine. Además, registra pagos y genera informes por sala.
 *
 * @param peliculasVector Vector de películas disponibles.
 * @param cine Vector de salas de cine.
 */
void reserva(vector<Pelicula>& peliculasVector, vector<Salas>& cine)
{
    int opcion;
    do
    {
        // Mostrar opciones al usuario
        if (peliculasVector.size() >= 3)
        {
            for (int i = 0; i < 3; ++i)
            {
                cout<<"\n\t\t.:Sala "<<i + 1<<":.";
                peliculasVector[i].mostrarInformacion();
            }
        }

        cout<<"\n\tSeleccione una sala (0 para salir): ";
        cin>>opcion;

        if (opcion >= 1 && opcion <= cine.size())
        {
            // Acceder a la sala seleccionada
            Salas& salaSeleccionada = cine[opcion - 1];

            // Mostrar estado de la sala seleccionada
            salaSeleccionada.mostrarEstado(opcion - 1);

            // Permitir al usuario reservar asientos
            int fila, columna;
            cout<<"\tIngrese la fila: ";
            cin>>fila;
            cout<<"\tIngrese la columna: ";
            cin>>columna;

            if (salaSeleccionada.reservarAsiento(opcion - 1, fila - 1, columna - 1))
            {
                // Reserva exitosa
                system("cls");
                operacion.mostrarMensaje();

                // Registra pagos de la sala
                operacion.registrarPago(opcion, 1);
                // Genera informes por sala
                system("pause");
                system("cls");
            }
        }

    }
    while (opcion != 0);
    system("cls");
}

/**
 * @brief Menú principal para el Cliente con opciones específicas.
 *
 * @details Permite al cliente realizar acciones como reservar asientos y mostrar el estado de los asientos
 * en las salas de cine. La función interactúa con el vector de películas y el vector de salas de cine.
 * Además, proporciona la opción de cerrar sesión en el sistema.
 */
void menuCliente()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema de cliente....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Reservar asiento\n";
        cout<<"\t2. Mostrar asientos\n";
        cout<<"\t0. Cerrar sesion\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            system("cls");
            reserva(peliculasVector, cine);
            system("cls");
            break;
        }
        case 2:
        {
            system("cls");
            for (int i = 0; i < cine.size(); ++i)
            {
                system("cls");
                // Acceder a la sala seleccionada
                Salas& salaSeleccionada = cine[i];

                // Mostrar estado de la sala seleccionada
                salaSeleccionada.mostrarEstado(i);

                // Esperar la entrada del usuario antes de pasar a la siguiente sala
                system("pause");
            }
            system("cls");
            break;
        }
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            system("pause");
            return;
            break;
        default:
            system("cls");
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            system("pause");
            system("cls");
            break;
        }

    }
    while (opc != 0);
}

/**
 * @brief Muestra la información de todos los administradores registrados.
 *
 * @details Itera a través del vector de administradores e imprime en la consola los detalles de cada uno,
 * incluyendo nombre de usuario, contraseña, nivel de estudios, dirección, tarjeta profesional, estado civil y tipo de contrato.
 * Después de mostrar la información, espera la entrada del usuario antes de limpiar la pantalla.
 */
void MostrarAdmins()
{
    system("cls");
    cout<<endl<<endl;
    UsuarioAdmin objAux;
    for (int i = 0; i < vecUsuarioAdmin.size(); i++)
    {
        cout<<"\t\t.:Datos de admin #"<<(i + 1)<<":."<<endl;
        objAux = vecUsuarioAdmin.at(i);
        cout<<"\tNombre: "<<objAux.getUsuario()<<endl<<
            "\tContraseña: "<<objAux.getPassword()<<endl<<
            "\tNivel de estudios: "<<objAux.getNivelEstudios()<<endl<<
            "\tDireccion: "<<objAux.getDireccion()<<endl<<
            "\tTarjeta Profesional: "<<objAux.getTarjetaProfesional()<<endl<<
            "\tEstado civil: "<<objAux.getEstadoCivil()<<endl<<
            "\tContrato: "<<objAux.getContrato()<<endl<<endl;
    }
    system("pause");
    system("cls");
}

/**
 * @brief Muestra la información de todos los taquilleros registrados.
 *
 * @details Itera a través del vector de taquilleros e imprime en la consola los detalles de cada uno,
 * incluyendo nombre de usuario, contraseña, nivel de estudios, dirección, tarjeta profesional, estado civil, tipo de contrato y número de identificación.
 * Después de mostrar la información, espera la entrada del usuario antes de limpiar la pantalla.
 */
void MostrarTaquilleros()
{
    system("cls");
    cout<<endl<<endl;
    Taquillero objAux;
    for (int i = 0; i < vecTaquillero.size(); i++)
    {
        cout<<"\t\t.:Datos del taquillero #"<<(i + 1)<<":."<<endl;
        objAux = vecTaquillero.at(i);
        cout<<"\tNombre: "<<objAux.getUsuario()<<endl<<
            "\tContraseña: "<<objAux.getPassword()<<endl<<
            "\tNivel de estudios: "<<objAux.getNivelEstudios()<<endl<<
            "\tDireccion: "<<objAux.getDireccion()<<endl<<
            "\tTarjeta Profesional: "<<objAux.getTarjetaProfesional()<<endl<<
            "\tEstado civil: "<<objAux.getEstadoCivil()<<endl<<
            "\tContrato: "<<objAux.getContrato()<<endl<<
            "\tNumero ID: "<<objAux.getNumID()<<endl<<endl;
    }
    system("pause");
    system("cls");
}

/**
 * @brief Muestra la información de todos los usuarios normales registrados.
 *
 * @details Itera a través del vector de usuarios normales e imprime en la consola los detalles de cada uno,
 * incluyendo nombre de usuario, contraseña, nivel de estudios y dirección.
 * Después de mostrar la información, espera la entrada del usuario antes de limpiar la pantalla.
 */
void MostrarUsuarios()
{
    system("cls");
    cout<<endl<<endl;
    UsuarioNormal objAux;
    for (int i = 0; i < vecUsuarioNormal.size(); i++)
    {
        cout<<"\t\t.:Datos del usuario #"<<(i + 1)<<":."<<endl;
        objAux = vecUsuarioNormal.at(i);
        cout<<"\tNombre: "<<objAux.getUsuario()<<endl<<
            "\tContrasena: "<<objAux.getPassword()<<endl<<
            "\tNivel de estudios: "<<objAux.getNivelEstudios()<<endl<<
            "\tDireccion: "<<objAux.getDireccion()<<endl<<endl;
    }
    system("pause");
    system("cls");
}

/**
 * @brief Menú de registro de películas con opciones para cada sala.
 *
 * @details Permite al administrador actualizar la información de las películas para cada sala.
 * Las opciones incluyen la actualización de la película para la sala 1, sala 2 y sala 3.
 * Cada opción invoca una función específica para la actualización de la película en la sala correspondiente.
 * La opción "0" permite volver al menú anterior.
 */
void menuPeliculas()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Actualizacion de peliculas....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Actualizar pelicula de sala 1\n";
        cout<<"\t2. Actualizar pelicula de sala 2\n";
        cout<<"\t3. Actualizar pelicula de sala 3\n";
        cout<<"\t0. Volver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch (opc)
        {
        case 1:
        {
            pelicula1();
            break;
        }
        case 2:
        {
            pelicula2();
            break;
        }
        case 3:
        {
            pelicula3();
            break;
        }
        case 0:
            return;
            break;
        default:
            system("cls");
            cout << "\n\t\t.:OPCION INCORRECTA:.\n\n";
            system("pause");
            system("cls");
            break;
        }

    }
    while (opc != 0);
}

/**
 * @brief Actualiza la información de la película para la Sala 1.
 *
 * @details Verifica si ya existe una película registrada para la Sala 1. Si existe, solicita al administrador
 * ingresar la nueva información de la película, como el título, director, género y duración en minutos. Luego,
 * asigna la Sala 1 a la película y muestra la información actualizada. Si no hay una película registrada, la función
 * informa al administrador que no hay películas registradas para la Sala 1.
 */
void pelicula1()
{
    system("cls");

    // Verificar si ya existe una película registrada para la Sala y actualizarla
    for (int i = 0; i < peliculasVector.size(); ++i)
    {
        if (peliculasVector[i].getSala() == 1)
        {
            peliculasVector[i].setTitulo();
            peliculasVector[i].setDirector();
            peliculasVector[i].setGenero();
            peliculasVector[i].setDuracionMinutos();
            peliculasVector[i].asignarSala(1);
            system("cls");
            peliculasVector[i].mostrarInformacion();
            system("pause");
            system("cls");
            return;  // Salir de la función ya que la película ya fue actualizada
        }
    }

    // Informar al administrador que no hay películas registradas para la Sala 1
    cout<<"\n\t\t.:No hay peliculas registradas para la Sala 1:.\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Actualiza la información de la película para la Sala 2.
 *
 * @details Verifica si ya existe una película registrada para la Sala 2. Si existe, solicita al administrador
 * ingresar la nueva información de la película, como el título, director, género y duración en minutos. Luego,
 * asigna la Sala 2 a la película y muestra la información actualizada. Si no hay una película registrada, la función
 * informa al administrador que no hay películas registradas para la Sala 2.
 */
void pelicula2()
{
    system("cls");

    // Verificar si ya existe una película registrada para la Sala y actualizarla
    for (int i = 0; i < peliculasVector.size(); ++i)
    {
        if (peliculasVector[i].getSala() == 2)
        {
            peliculasVector[i].setTitulo();
            peliculasVector[i].setDirector();
            peliculasVector[i].setGenero();
            peliculasVector[i].setDuracionMinutos();
            peliculasVector[i].asignarSala(2);
            system("cls");
            peliculasVector[i].mostrarInformacion();
            system("pause");
            system("cls");
            return;  // Salir de la función ya que la película ya fue actualizada
        }
    }

    // Informar al administrador que no hay películas registradas para la Sala 2
    cout<<"\n\t\t.:No hay peliculas registradas para la Sala 2:.\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Actualiza la información de la película para la Sala 3.
 *
 * @details Verifica si ya existe una película registrada para la Sala 3. Si existe, solicita al administrador
 * ingresar la nueva información de la película, como el título, director, género y duración en minutos. Luego,
 * asigna la Sala 3 a la película y muestra la información actualizada. Si no hay una película registrada, la función
 * informa al administrador que no hay películas registradas para la Sala 3.
 */
void pelicula3()
{
    system("cls");

    // Verificar si ya existe una película registrada para la Sala y actualizarla
    for (int i = 0; i < peliculasVector.size(); ++i)
    {
        if (peliculasVector[i].getSala() == 3)
        {
            peliculasVector[i].setTitulo();
            peliculasVector[i].setDirector();
            peliculasVector[i].setGenero();
            peliculasVector[i].setDuracionMinutos();
            peliculasVector[i].asignarSala(3);
            system("cls");
            peliculasVector[i].mostrarInformacion();
            system("pause");
            system("cls");
            return;  // Salir de la función ya que la película ya fue actualizada
        }
    }

    // Informar al administrador que no hay películas registradas para la Sala 3
    cout<<"\n\t\t.:No hay peliculas registradas para la Sala 3:.\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Función principal que inicializa la aplicación.
 *
 * @details Esta función establece el color de fondo de la consola y luego llama a la función `UsuariosBase`
 * para inicializar los usuarios base. Después, inicia el menú principal llamando a la función `menu`.
 *
 * @return Valor de salida del programa, generalmente 0 para indicar una terminación exitosa.
 */
int main()
{
    // Establecer el color de fondo de la consola
    system("Color f5");

    // Inicializar usuarios base
    UsuariosBase();

    // Iniciar el menú principal
    menu();

    // Valor de salida del programa
    return 0;
}
