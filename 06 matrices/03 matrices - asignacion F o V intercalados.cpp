/*
 * Autor: Miguel Dussán
 */

/*
 * Escriba un programa que capture el número de filas y columnas, cree una
 * matriz y asigne los valores de falso y verdadero de forma intercalada,
 * empezando por la posición n-1,m-1, hacia la izquierda, donde n y m son el
 * número de filas y de columnas, respectivamente.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int filas;
    int columnas;

    /*
     * Dirección en el que se llena la matriz: si es verdadero, la matriz se
     * llena de izquierda a derecha. Si es falso, se llena de derecha a
     * izquierda.
     */

    bool direccion = false;

    //Valor con el que se llena una posición de la matriz
    bool valor = false;

    //Captura de dimensiones de la matriz

    cout << "Ingrese el número de filas ? ";
    cin >> filas;

    cout << "Ingrese el número de columnas ? ";
    cin >> columnas;

    bool m[filas][columnas]; //Declaración de la matriz


    //Fila que se está escribiendo en un momento dado. Debido al requerimiento
    //del ejercicio, se empieza por la última fila
    int fila_actual = filas - 1;

    do {
        if(direccion == true) //Dirección: derecha a izquierda
            //Se recorre fila a fila por columnas
            for(int j = 0; j < columnas; j++) {
                m[fila_actual][j] = valor;//Asignación de valor actual
                //Una vez se asigna el valor a la posición respectiva, este se
                //debe cambiar; si es verdadero, se cambia a falso y viceversa.
                if(valor == true)
                    valor = false;
                else
                    valor = true;
            }
        else
            //Si la dirección es de izquierda a derecha, se recorre fila a
            //fila por columnas pero arrancando por la última columna haciendo
            //decrementos de a uno.
            for(int j = columnas - 1; j >= 0; j--) {
                m[fila_actual][j] = valor;
                /*Siguiente línea equivalente a:
                * if(valor == true)
                *    valor = false;
                * else
                *    valor = true;
                */
                valor = (valor == true) ? false : true;
            }
        //Se decrementa el índice de la fila que se está recorriendo
        fila_actual--;
        /*
         * Se cambia el valor de la dirección
         * La línea a continuación es equivalente a escribir:
         * if ( direccion == true)
         *  direccion = false;
         * else
         *  direccion = true;
         */

        direccion = (direccion == true) ? false : true;
    }
    //Hacer mientras la fila actual tenga índice válido
    while(fila_actual >= 0);

    //Mostrar la matriz
    cout << endl << endl << "Matriz Resultado: 1(true); 0(false)";
    cout << setw( 5) << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++)
            cout << m[i][j] << setw(5);
        cout << endl;
    }

    cin.get();
    return 0;
}
