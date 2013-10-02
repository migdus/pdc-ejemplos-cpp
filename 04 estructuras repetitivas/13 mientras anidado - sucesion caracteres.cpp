/*
 * Autor: Miguel Dussán
 *
 * Escriba un programa que capture un número n, y a partir de este imprima una
 * sucesión de caracteres tal que en la primera línea aparezca #, en la
 * segunda línea ##, en la tercera ###, y así sucesivamente hasta llegar a la
 * línea n, donde se imprimirán n caracteres #.
 */

#include <iostream>

using namespace std;

int main() {
    /*
     * n: Variable para guardar el número de líneas que se deben mostrar
     * control_lin: control del ciclo que cuenta le número de líneas
     * control_car: control de caracteres que se imprimen en el ciclo
     * anidado.
     */

    int n,control_lin,control_car;
    control_lin = 0;

    cout << "Numero de lineas? ";
    cin >> n;

    while (control_lin < n) {
        /*
         * Ciclo anidado que se usa para imprimir los caracteres.
         *
         * La condición de control involucra tanto a la variable control_car
         * como a control_lin, pues si es la primera línea que se imprime, deberá
         * mostrarse un caracter; si es la segunda, dos; si es la tercera, tres, y
         * así sucesivamente hasta llegar al límite estipulado por el usuario.
         *
         * Cada vez que se vaya a iniciar este ciclo, se debe dar un valor
         * inicial a la variable de control.
         */
        control_car = 0;
        while(control_car < control_lin + 1) {
            cout << "#";//Se imprime un caracter a la vez
            control_car++; //incremento de variable de control del ciclo anidado
        }
        cout << endl;//Nueva línea
        control_lin++;//Incremento de variable de control del ciclo exterior
    }
    system("pause");
    return 0;
}
