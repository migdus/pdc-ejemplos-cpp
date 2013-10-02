/*
 * Autor: Miguel Dussán
 *
 * Escriba un programa que calcule la operación de potenciación entre
 * la base y el exponente, utilizando únicamente adiciones.
 */

#include <iostream>

using namespace std;

int main() {
    /*
     * base, exponente: Argumentos de entrada
     * cont_multip: contadora del ciclo anidado
     */
    int base,exponente,cont_multip;
    long long int multip = 0; //Resultado de una multiplicación
    /*
     * Contadora del ciclo exterior
     * Controla el número de multiplicaciones que se realizan
     */
    int cont_pot = 0;
    long long int pot = 1;//Almacena el resultado de la potenciación

    cout << "Base? ";
    cin >> base;

    cout << "Exponente? ";
    cin >> exponente;

    while(cont_pot < exponente) {

        multip = 0; //Resultado de la multiplicación
        cont_multip = 0; //Control del ciclo

        // Hacer la multiplicación de la base con el resultado
        // de la anterior multiplicación, que se almacena en pot
        while(cont_multip < pot) {
            multip += base; //se acumulan sumas sucesivas
            cont_multip++; //incremento de la variable de control
        }

        pot=multip; //Guarda última multiplicación realizada
        cont_pot++; //Incremento de variable de control de ciclo
    }

    cout <<endl<<"Resultado: "<<pot;
    system("pause");
    return 0;
}
