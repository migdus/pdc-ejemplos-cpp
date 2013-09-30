/*
 * Autor: Miguel Dussán
 *
 * Diseñe un programa que dados N números enteros ingresados por el usuario,
 * encuentre el mayor y el menor de estos datos.
 *
 * Desarrollo:
 *
 * Este ejercicio debe preguntar por la cantidad de números que debe capturar, 
 * y para cada número capturado debe verificar si corresponde
 * al mayor o menor de los que el usuario ha digitado.
 *
 * La estrategia de resolución involucrará a una bandera que tiene una función 
 * especial: marcar si se ha ejecutado o no un bloque de código. Con esta
 * herramienta, dentro del ciclo se incluye un bloque si-entonces que se ejecutará
 * una sola vez, y dentro de él se inicializarán las variables que tienen los valores
 * menor y mayor; luego de esto se cambiará el valor de la bandera para que este bloque
 * no se ejecute nunca más.
 *
 * EJERCICIOS
 *
 * 1) Modifique el programa para que el programa termine si el usuario indica que quiere
 * ingresar menos de cero números
 */

#include <iostream>

using namespace std;

int main() {
    /*
     * Variables:
     *
     * a: Cantidad de números que el usuario desea ingresar.
     * n: Número que el usuario ingresa para cada iteración del ciclo
     * mayor: Almacena el número más grande de los ingresados por el usuario
     * menor: Almacena el número más pequeño de los ingresados por el usuario
     */

    int n,a,c,mayor,menor;
    c=0; //Variable de control de ciclo
    bool b = true; //Bandera para determinar si se ha fijado un valor inicial para las variables menor y mayor

    cout <<"Cuantos numeros desea ingresar ";
    cin>>a;

    while(c<a) {
        /*
         * Captura un número
         */
        cout << "numero? ";
        cin >> n;
        /*
         * Este si-entonces verifica que sea la primera vez que se realiza una
         * iteración. En caso de que así sea, se da a las variables mayor y menor
         * como valor inicial el número que el usuario digitó. De esta manera, si ingresa
         * más valores, ya se podrán almacenar correctamente como el menor o el mayor.
         *
         * Al final se cambia el valor de la bandera a Falso para que no vuelva a realizar esa
         * operación.
         *
         */

        if (b == true) {
            menor = n;
            mayor = n;
            b = false;
        }
        else {
            //Ejecuta esto a partir de la segunda iteración
            /*
            * Si el número ingresado es más grande al número almacenado en la variable
            * mayor, entonces este es el nuevo número mayor
            */
            if( n > mayor) {
                mayor = n;
            } else {
                /*
                 * Si el número ingresado es más pequeño que el almacenado en la variable menor, entonces
                 * este es el nuevo número menor
                 */
                        if(n<menor) {
                            menor = n;
                        }
                    }
                }

                c++; //Incremento de la variable de control de ciclo
                }

                // Mostrar los resultados
                cout << "Menor :"<<menor<<" Mayor: "<<mayor<<endl;
                system("pause");
                return 0;
                }
