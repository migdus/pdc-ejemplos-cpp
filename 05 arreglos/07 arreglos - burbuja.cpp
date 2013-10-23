// Autor: Miguel Dussán

// Algoritmo de ordenamiento burbuja ascendente con arreglos

#include <iostream>

using namespace std;

int main() {
    int tam; // cantidad de elementos / tamaño del arreglo
    int temp; // variable para guardar información de forma temporal
    /*
    Bandera que indica si se hizo al menos un intercambio durante el
    recorrido del arreglo.
    */
    bool hubo_intercambio;
    
    /*
    Hacer mientras el usuario no especifique un tamaño
    de al menos un elemento
    */
    do {
        cout << "Cantidad de elementos? ";
        cin >> tam;
    } while(tam < 1);

    int arreglo[tam]; //Le arreglo

    // captura de valores
    for(int i=0; i<tam; i++) {
        cout << "Numero para posicion " << i+1 << ": ";
        cin >> arreglo[i];
    }

    // Hacer mientras se haya hecho intercambio
    do {
        //El ciclo arranca asumiendo que no va a haber intercambios
        hubo_intercambio = false;

        //Se recorre todo el arreglo
        for(int i=0; i<tam; i++) {

            /*
            Se verifican dos cosas:
            1. Que exista una posición a continuación de la
            posición i-ésima, es decir, que exista una posición en
            la ubicación i + 1. Esto se verifica con la primera parte
            de la condición, que involucra el límite del arreglo, pues
            no existe un elemento i + 1 mayor o igual al tamaño del arreglo.

            2. Que el contenido del arreglo en la posición actual sea mayor al
            contenido en la posición siguiente.
            */
            if(i+1 < tam && arreglo[i] > arreglo[i+1]) {
                //Se realiza el intercambio
                temp = arreglo[i+1]; // se salvaguarda el valor siguiente
                //Se guarda el valor actual en la siguiente posición
                arreglo[i+1] = arreglo [i];
                //Se guarda el valor de la variable temporal en la posición
                //actual
                arreglo[i] = temp;
                //Se marca la bandera en verdadero porque se hizo un intercambio
                hubo_intercambio = true;
            }
        }
        /*
        Si al terminar el recorrido por el arreglo no hubo intercambios,
        significa que el arreglo se encuentra organizado. En ese caso,
        la bandera debe encontrarse en falso, y el do-while termina.
        */
    } while(hubo_intercambio == true);

    // Se muestra el resultado
    cout << "Arreglo ordenado: " << endl;

    for(int i=0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }

    cin.get();

    return 0;

}