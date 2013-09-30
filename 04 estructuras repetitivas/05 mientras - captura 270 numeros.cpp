/*
 * Autor: Miguel Dussán
 *
 * Diseñe un programa que para 270 números ingresados por el usuario,
 * calcule el promedio de estos números.
 */

/*
 * Desarrollo:
 *
 * Se debe calcular la suma de los números que ingresa el usuario, acumulando
 * los valores cada vez que este ingresa un nuevo dato. Luego de que ya ha ingresado
 * todos los números, se calcula el promedio.
 *
*/

#include <iostream>

using namespace std;

int main() {
    int control= 0; // variable de control de ciclo
    float numero; // captura el número ingresado por el usuario
    float acumulador = 0; //variable acumuladora
    int cant_terminos = 270; // cantidad de términos que se deben solicitar
    /* El ciclo se repite 270 veces -
     * dado en las condiciones del enunciado del problema
     */
    while( control < cant_terminos) {
        cout << "Numero? "; //Número ingresado por el usuario
        cin>> numero;
        acumulador = acumulador+numero;
        control++;
    }
    /*
     * Se declara una variable promedio como decimal, y se inicializa con la operación de
     * cálculo del promedio. El numerador corresponde a los números acumulados y el denominador
     * es el número 270, pues fueron capturados 270 números.
     *
     * Recordar que:
     *
     * promedio = (suma de números) / (cantidad de números sumados en el numerador)
     */
    float promedio = acumulador / cant_terminos;

    cout << "El promedio de los números ingresados fue: "<< promedio;

    return 0;
}
