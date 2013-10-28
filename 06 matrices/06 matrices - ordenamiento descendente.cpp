/*
 * Autor: Miguel Dussán
 */

/*
 * Este programa captura una matriz de números y los ordena de forma
 * descendente.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int filas = 0;
    int columnas = 0;
    int aux = 0; //Variable auxiliar, utilizada para hacer intercambios

    //Captura de filas y columnas
    cout << "Número de filas?";
    cin >> filas;

    cout << "Número de columnas?";
    cin >> columnas;

    int m[filas][columnas]; //Declaración de la matriz

    //Captura de los elementos de la matriz
    for(int i = 0; i < filas; i++)
        for(int j = 0; j < columnas; j++) {
            cout << "Valor para m[" << i << "][" << j << "] ? ";
            cin >> m[i][j];
        }

    //Mostrar la matriz original
    cout << endl << endl << "Matriz original" << setw(5) << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++)
            cout << m[i][j] << setw(5);
        cout << endl;
    }

    /*
     * La variable se utiliza para saber si los datos se encuentran
     * organizados de forma descentente en la matriz
     */
    bool organizada;
    do { //Empieza Hacer Mientras
        //De entrada se asume que la matriz está organizada
        organizada = true;
        for(int i = 0; i < filas; i++) {
            for(int j = 0; j < columnas; j++) {
                /*
                * Si nos encontramos dentro del límite de las columnas...
                  * Observe que se partió la condicional if en dos
                  * subcondicionales, para que exista una ejecución alternativa
                  * en el caso de que no exista una columna válida siguiente.
                              */

                if(j + 1 < columnas) {
                    /*
                    * Si la posición siguiente a la actual tiene un número
                    * mayor al que estamos evaluando
                     */
                    if(m[i][j + 1] > m[i][j]) {
                        //Se realiza el intercambio del contenido
                        aux = m[i][j + 1];
                        m[i][j + 1] = m[i][j];
                        m[i][j] = aux;
                        /*
                        * En caso de realizarse al menos un intercambio de
                                 * valores en la matriz, se debe asignar el valor de
                                 * falso a la bandera. Así, cuando se recorra toda la
                                 * matriz y no se requieran cambios de posiciones, la
                                 * bandera seguirá siendo verdadera y se terminará la
                                 * ejecución del código dentro del Do-While
                                             */
                        //Se asigna falso a la bandera, pues hemos hecho un
                        //intercambio
                        organizada = false;
                    }
                }
                else {
                    /*
                    * Si la columna siguiente es inexistente, entonces
                    * comparamos los valores de la posición actual con el de la
                    * siguiente fila, primera columna, si esta existe.
                     */
                    if(i + 1 < filas && m[i + 1][0] > m[i][j]) {
                        aux = m[i + 1][0];
                        m[i + 1][0] = m[i][j];
                        m[i][j] = aux;
                        organizada = false;
                    }
                }
            }
        }
        /*
        * Termina Hacer-Mientras: El código se ejecuta mientras la bandera sea
        * falsa, es decir, mientras se ha hecho al menos un intercambio de
        * posiciones de los valores.
               */
    }
    while(organizada == false);

    //Mostrar la matriz organizada
    cout << endl << endl << "Matriz organizada" << setw(5) << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++)
            cout << m[i][j] << setw(5);
        cout << endl;
    }

    cin.get();
    return 0;
}
