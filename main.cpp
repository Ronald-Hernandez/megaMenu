// Librerias
#include <iostream>
#include <ios>
#include <windows.h>
// Espacio de nombres
using namespace std;
//Funcion que se utilizará para solicitar presionar cualquier tecla para continuar el flujo del programa
void entrar(){
    cout << "Presiones cualquier tecla para continuar" << endl;
    cout << "===================================================\n" << endl;
    cin.exceptions(ios_base::goodbit);
    cin.ignore(10000, '\n');
    cin.get();
    cin.exceptions(ios_base::failbit);
}
//Función principal
int main() {
    // Configuración de consola
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    bool salidaP = false, salidaSec = false;
    int seleccionActual=0, codigo;
    char salida;

    cin.exceptions(ios_base::failbit); // para activas las excepciones de cin
        cout<<"Bienvenido al supermenú para pruebas de lenguaje de programación"<<endl;
        cout<<"Elija una de las opciones que a continuación se le muestra"<<endl;
        cout<<endl;
    while (salidaP==false) {
        try {
            cout<<"Menú Principal"<<endl;
            cout<<"1. Sentencias de Selección (Condicionales)"<<endl;
            cout<<"2. Sentencias Iteración (Bucles)"<<endl;
            cout<<"3. Manejo de Excepciones"<<endl;
            cout<<"4. Vectores y Matrices"<<endl;
            cout<<"5. Salir del super menú"<<endl;
            cin>>seleccionActual;
            cout<<endl;

        switch (seleccionActual) {
            case 1:
                cout<<"1. Sentencias de Selección (Condicionales)"<<endl;

                entrar();
                break;
            case 2:
                cout<<"2. Sentencias Iteración (Bucles)"<<endl;

                break;
            case 3:
                cout<<"3. Manejo de Excepciones"<<endl;
                cout<<endl;
                cout << "=== EJEMPLO INTERACTIVO: MANEJO DE EXCEPCIONES ===" << endl;
                cout << "Tienes una bomba de tiempo. Para desactivarla debes ingresar" << endl;
                cout << "un codigo de seguridad numerico entre el 1 y el 10." << endl;


                cout << "Introduce el codigo: ";
                cin >> codigo;

                try {
                    // Validamos si el usuario rompio las reglas del rango
                    if (codigo < 1 || codigo > 10) {
                        // Lanzamos manualmente una excepcion estandar de fuera de rango
                        throw out_of_range("¡Codigo invalido! El numero no esta entre 1 y 10.");
                    }

                    // Si el codigo es correcto y no se lanzo la excepcion, el juego continua
                    cout << "\n[BOMBA DESACTIVADA] ¡Felicidades! Elegiste el numero seguro: " << codigo << endl;


                }
                catch (const out_of_range& e) {
                    // Capturamos especificamente el error de rango
                    cout << "\n ¡BOOM! La bomba exploto." << endl;
                    cout << "Excepcion capturada: " << e.what() << endl;
                    cout << "[Explicacion: El bloque catch evito que el programa se cerrara por el error]" << endl << endl;
                }


                entrar();
                break;
            case 4:
                cout<<"4. Vectores y Matrices"<<endl;
                break;
            case 5:
                cout<<"¿Está seguro de salir del megamenú?"<<endl;
                cout<<"S"<<endl;
                cout<<"N"<<endl;
                cin>>salida;
                if (salida=='s' || salida=='S') {
                    cout<<"Hasta Pronto"<<endl;
                    salidaP = true;
                }
                break;
            default:
                cout<<"Elija una opción válida"<<endl;
                cout<<endl;
                break;
        }
        }
        catch (const ios_base::failure& e) {
            cin.exceptions(ios_base::goodbit); // apagado de excepciones temporalmente
            cerr << "\n[Error] Ingrese un dato valido (solo numeros)." << endl << endl;
            // limpieza sin lanzar excepciones secundarias
            cin.clear();
            cin.ignore(10000, '\n');

            cin.exceptions(ios_base::failbit); // reactivación de excepciones para volver a las siguiente vuelta del bucle (se lanza nuevamente el menú principal)
        }
    }


    return 0;
}