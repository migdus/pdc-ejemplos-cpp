/*
 * Autor: Miguel Dussán
 *
 *
 * Diseñe un programa que calcule el término número n de la serie de Fibonacci de
 * acuerdo a la elección del usuario. La serie de Fibonacci tiene como primero y
 * segundo término 0 y 1, respectivamente, y cada término adicional de la serie
 * corresponde a la suma de los dos números anteriores.
 *
 * Ejemplo de la serie: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
 *
 */

#include <iostream>

using namespace std;

int main() {
    int num_termino; // Número del término que se debe encontrar
    int control = 3; // Variable de control del ciclo
    int term_a = 0; // Primer término de la serie
    int term_b = 1; // Segundo término de la serie
    int temp;

    cout << "Ingrese el termino que desea averiguar ";
    cin >> num_termino;

    if ( num_termino >= 3 ) {
        while ( control <= num_termino) {
            temp = term_b;
            term_b = term_a + term_b;
            term_a = temp;
            control++;
        }
        cout << "El termino "<<num_termino<<" de la serie es: "<<term_b;
    } else {

        switch(num_termino) {
        case 1:
            cout << "El termino "<<num_termino<<" de la serie es: 0"<<endl;
            break;
        case 2:
            cout << "El termino "<<num_termino<<" de la serie es: 1"<<endl;
            break;
        default:
            cout << "El termino solicitado es invalido"<<endl;
        }
    }
    system("pause");
    return 0;

}
