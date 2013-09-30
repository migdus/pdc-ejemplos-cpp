/* Autor: Miguel Dussan
 *
 * Escriba un programa que muestre los términos de la siguiente serie y calcule su suma:
 * 2, 5, 7, 10, 12, 15, 17, ... 1800
 *
 * Desarrollo:
 *
 * Observando la serie se puede ver que se intercalan los incrementos de un número a otro.
 * Por ejemplo, para generar el segundo término de la serie se suma 3 al primer término
 * (5 = 2 + 3), para calcular el siguiente término se suma al término inmediatamente 2
 * (7 = 5 + 2) y así sucesivamente se va haciendo el incremento, primero de 3 y luego de 2.
 *
 * Este ejercicio hace uso de una variable bandera de tipo lógico, que nos permite alternar
 * entre los valores de incremento de la serie.
*/

#include <iostream>

using namespace std;

int main() {

    int acumulador = 0;

    int control = 2; //primer número de la serie
    /*
     * El valor inicial de la bandera es Verdadero, para que primero sume 3
     */
    bool bandera = true;

    while ( control <= 1800 ) { //Límite - dado por las condiciones del problema
        cout << control << " "; // Mostrar término actual
        acumulador+=control; //Incremento en el acumulador, que guarda la suma de términos
        if ( bandera == true) { //Si la bandera es verdadero, incrementar la variable de control en 3
            control += 3;
            bandera = false; //Cambiar el valor de la bandera a falso para que en la siguiente iteración incremente en 2
        } else { //Si la bandera es falsa, incrementar la variable de control en dos
            control += 2;
            bandera = true; //Cambiar el valor de la bandera a verdadero para que en la siguiente iteración incremente en 3
        }
    }
    cout << endl << "Suma de la serie: " << acumulador << endl; // mostrar el resultado

    system("pause");
    return 0;
}
