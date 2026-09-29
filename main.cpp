// Librerias
#include <iostream>
#include <ios>
#include <windows.h>
#include <cstdlib> // Necesaria para system()
// Espacio de nombres
using namespace std;

// Inicaliación de funciones (modularización)
void selecionCondicionales();
void sentenciaIf();
void sentenciaIfElse();
void sentenciaIfElseIf();
void sentenciaSwitch();
void seleccionBucles();
void iteracionFor();
void iteracionWhile();
void iteracionDoWhile();
void iteracionForRangos();
void seleccionMatricial();
void matrizVectorial();
void matrizAxB();
void seleccionExcepciones();

//Funcion que se utilizará para solicitar presionar cualquier tecla para continuar el flujo del programa (pausa del flujo)
void entrar(){
    cout << "Presiones cualquier tecla para continuar" << endl;
    cout << "===================================================\n" << endl;
    cin.exceptions(ios_base::goodbit);
    cin.ignore(10000, '\n');
    cin.get();
    cin.exceptions(ios_base::failbit);
}
// Menú de sentencias condicionales
void selecionCondicionales(){
    int seleccionActual;
    int salida = false;
    while (salida==false) {

        cout<<"Sentencias de Selección (Condicionales)"<<endl;
        cout<<endl;
        cout<<"1. IF"<<endl;
        cout<<"2. IF ELSE"<<endl;
        cout<<"3. IF ELSE IF"<<endl;
        cout<<"4. SWITCH"<<endl;
        cout<<"5. Regresar a menu principal"<<endl;

        cin>>seleccionActual;
        cout<<endl;
        switch (seleccionActual) {
            case 1:
                sentenciaIf();
                break;
            case 2:
                sentenciaIfElse();
                break;
            case 3:
                sentenciaIfElseIf();
                break;
            case 4:
                sentenciaSwitch();
                break;
            case 5:
                salida = true;
                system("cls");
                break;
            default:
                cout<<"Porfavor elija una opción del menú"<<endl;
                break;
        }
    }
}
// Sentencia if
void sentenciaIf() {
    int numero;
    cout<<"1. SENTENCIA IF:"<<endl;
    cout<<endl;
    cout << "Evalúa una condición. Si la condición resulta ser verdadera (true), el programa ejecuta el bloque de código que está dentro de las llaves {}. Si es falsa, simplemente ignora ese bloque y continúa con el resto del programa."<<endl;
    cout<<endl;
    cout << "=== EJEMPLO INTERACTIVO: SENTENCIA IF ===" << endl;
    cout<<"Elija un numero del 1 al 10" <<endl;
    cout<<"Si el numero está fuera del rango no ocurre nada" <<endl;
    cout<<endl;
    cin >> numero;
    if (numero>0 || numero<=10 ) {
        cout<<"La condición es verdader, por lo tanto ingresaste a la condición"<<endl;
    }
    entrar();
}

//Sentencia IF Else
void sentenciaIfElse() {
    int edad;
    cout<<"2. SENTENCIA IF ELSE"<<endl;
    cout<<endl;
    cout<<"Permite definir dos caminos posibles. Si la condición del if es verdadera, se ejecuta el primer bloque de código. Si la condición es falsa, el programa salta automáticamente al bloque del else y ejecuta lo que está ahí dentro." <<endl;

    cout << "=== EJEMPLO INTERACTIVO: SENTENCIA IF ELSE===" << endl;
    cout<<"Validación de mayoria de edad" <<endl;
    cout<<"Escriba su edad en numero entero" <<endl;
    cout<<endl;
    cin >> edad;
    if (edad<=18 ) {
        cout<<"Ud es menor de edad"<<endl;
    }else {
        cout<<"Ud es mayor de edad"<<endl;
    }
    entrar();
}

//Sentencia IF Else IF
void sentenciaIfElseIf() {
    int color;
    cout<<"2. SENTENCIA IF ELSE IF"<<endl;
    cout<<endl;
    cout<<"Se utiliza cuando tienes más de dos opciones posibles y necesitas evaluar varias condiciones en cadena. El programa revisa la primera condición; si es falsa, pasa a la siguiente (else if); si esa también es falsa, pasa a la que sigue. En el momento en que encuentra una condición verdadera, ejecuta su código y descarta todas las demás. Al final, puedes poner un else opcional para atrapar cualquier caso que no haya cumplido ninguna de las condiciones anteriores." <<endl;

    cout << "=== EJEMPLO INTERACTIVO: SENTENCIA IF ELSE IF===" << endl;
    cout<<"Semaforo" <<endl;
    cout<<"Elija una de las opciones del semaforo" <<endl;
    cout<<"1. Verde" <<endl;
    cout<<"2. Amarillo" <<endl;
    cout<<"3. Rojo" <<endl;
    cout<<endl;
    cin >> color;
    if (color == 1 ) {
        cout<<"Avance"<<endl;
        cout<<"(ingresó al 1er if)"<<endl;
    }else if (color == 2 ) {
        cout<<"Precaución"<<endl;
        cout<<"(ingresó al 2do if)"<<endl;
    }else if (color == 3) {
        cout<<"Detengase"<<endl;
        cout<<"(ingresó al 3er if)"<<endl;
    }else {
        cout<<"Error, no eligió ninguna de las opciones del menú"<<endl;
        cout<<"(ingresó al else)"<<endl;
    }
    entrar();
}

// Sentencia switch
void sentenciaSwitch() {

    int estacion;
    cout<<"2. SENTENCIA IF ELSE IF"<<endl;
    cout<<endl;
    cout<<"La sentencia switch es una estructura de control condicional que se utiliza para agilizar la toma de decisiones múltiples. Funciona como un conmutador: toma el valor de una sola variable o expresión y lo compara, uno a uno, con diferentes casos (case) predefinidos. Es la alternativa ideal, más limpia y ordenada, al uso de un if else if muy largo cuando necesitas evaluar una misma variable frente a muchos valores exactos." <<endl;
    cout<<"Es la base principal de este Megamenu"<<endl;
    cout<<endl;
    cout << "=== EJEMPLO INTERACTIVO: SENTENCIA SWITCH===" << endl;
    cout<<"Menú de estaciones" <<endl;
    cout<<"Elija una de las 4 estaciones del año" <<endl;
    cout<<"1. Primavera" <<endl;
    cout<<"2. Verano" <<endl;
    cout<<"3. Otoño" <<endl;

    cout<<endl;
    cin >> estacion;
    switch (estacion) {
            case 1:
                cout<<"Has elegido el caso 1: Primavera: Las temperaturas se suavizan, las plantas florecen y los dias se alargan" <<endl;
                break;
            case 2:
                cout<<"Has elegido el caso 1: Verano: Es la época más cálida del año, con los días más largos y mayor luz solar." <<endl;
                break;
            case 3:
                cout<<"Has elegido el caso 1: Otoño:Las hojas de los árboles cambian de color y caen, y la temperatura empieza a bajar." <<endl;
                break;
            default:
                cout<<"No has elejido ninguno de los 3 casos anteriore, por lo que ingresaste al default: Invierno: Es la estación más fría, con noches más largas y días más cortos" <<endl;
                break;
    }
    entrar();
}

// Menu de bucles o iteraciones
void seleccionBucles() {
    int seleccionActual;
    int salida = false;
    while (salida==false) {
        cout<<"Sentencias de iteración (Bucles)"<<endl;
        cout<<endl;
        cout<<"1. For (Controlado por Contador)"<<endl;
        cout<<"2. While (Pre-Condicional)"<<endl;
        cout<<"3. Do...While (Post-Condicional)"<<endl;
        cout<<"4. Fol (Basado en rangos)"<<endl;
        cout<<"5. Regresar a menu principal"<<endl;

        cin>>seleccionActual;
        cout<<endl;
        switch (seleccionActual) {
            case 1:
                iteracionFor();
                break;
            case 2:
                iteracionWhile();
                break;
            case 3:
                iteracionDoWhile();
                break;
            case 4:
                iteracionForRangos();
                break;
            case 5:
                salida = true;

                break;
            default:
                cout<<"Porfavor elija una opción del menú"<<endl;
                break;
        }
    }

    entrar();
}

// iteración for (controlado por contador)
void iteracionFor() {

    entrar();
}

//iteracipon Wile (Pre-condición)
void iteracionWhile() {

    entrar();
}

//Iteración do... While (post-condición)
void iteracionDoWhile() {

    entrar();
}

//iteración for (basado en rangos)
void iteracionForRangos() {

    entrar();
}
//Menu matricial
void seleccionMatricial() {
    int seleccionActual;
    int salida = false;
    while (salida==false) {
        cout<<"Manejo de Matrices"<<endl;
        cout<<endl;
        cout<<"1. Matriz Vectorial"<<endl;
        cout<<"2. Matriz de A X B"<<endl;
        cout<<"3. Regresar a menu principal"<<endl;

        cin>>seleccionActual;
        cout<<endl;
        switch (seleccionActual) {
            case 1:
                matrizVectorial();
                break;
            case 2:
                matrizAxB();
                break;
            case 3:
                salida = true;

                break;
            default:
                cout<<"Porfavor elija una opción del menú"<<endl;
                break;
        }
    }


    entrar();
}
//Vector
void matrizVectorial() {

    entrar();
}
// Matriz axb
void matrizAxB() {

    entrar();
}

// Ejemplo de manejo de exepciones
void seleccionExcepciones(){
    int codigo;
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
        cout << " ¡BOOM! La bomba exploto." << endl;
        cout << "Excepcion capturada: " << e.what() << endl;
        cout << "[Explicacion: El bloque catch evito que el programa se cerrara por el error]" << endl << endl;
    }
    entrar();
}
//Función principal
int main() {
    // Configuración de consola
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    bool salidaP = false;
    int seleccionActual=0;
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
            cout<<"3. Vectores y Matrices"<<endl;
            cout<<"4. Manejo de Excepciones"<<endl;
            cout<<"5. Salir del super menú"<<endl;
            cin>>seleccionActual;
            cout<<endl;

        switch (seleccionActual) {
            case 1:
                cout << "===================================================\n" << endl;
                selecionCondicionales();

                break;
            case 2:
                cout << "===================================================\n" << endl;
                seleccionBucles();

                break;
            case 3:
                cout << "===================================================\n" << endl;
                seleccionMatricial();

                break;
            case 4:
                cout << "===================================================\n" << endl;
                seleccionExcepciones();

                break;
            case 5:
                cout << "===================================================\n" << endl;
                cout<<"¿Está seguro de salir del megamenú?"<<endl;
                cout<<"S"<<endl;
                cout<<"N"<<endl;
                cin>>salida;
                if (salida=='s' || salida=='S') {
                    cout << "===================================================\n" << endl;
                    cout<<  "                Hasta Pronto                       "<<endl;
                    cout << "===================================================\n" << endl;
                    salidaP = true;
                }
                break;
            default:
                cout << "===================================================\n" << endl;
                cout<<"Elija una opción válida dentro del Menú"<<endl;
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