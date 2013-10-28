// Autor: Miguel Dussán

//Escriba un programa que lea una matriz y determine cuántas veces se repite un
//número, y las posiciones en las que se encuentra

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int filas;
    int columnas;
    int contador = 0;

    cout << "Cuántas filas desea capturar? ";
    cin >> filas;

    cout << "Cuántas columnas desea capturar? ";
    cin >> columnas;

    //Declaración de la matriz con números
    int matriz[filas][columnas];

    //Matriz que indica si ya se ha contabilizado una posición particular
    //true: ya se ha contabilizado la posición
    //false: la posición aún no ha sido contabilizada
    bool visitas[filas][columnas];

    //Declaración de matriz
    //Captura de valores de la matriz
    for(int i = 0; i < filas; i++)
        for(int j = 0; j < columnas; j++) {
            cout << "Valor para m[" << i << "][" << j << "] ? ";
            cin >> matriz[i][j];
            //Inicialización de la matriz de visitas
            visitas[i][j] = false;
        }

    //Para recorrer la matriz, se manejan dos grupos de coordenadas: El
    //primero: i,j representa la posición del elemento fijo de comparación, y
    //El segundo: k,n representa la posición del elemento de la matriz que
    //compara con el elemento fijo.

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            //El elemento fijo de comparación no debió ser visitado antes
            if(visitas[i][j] == false) {
                //Cada vez que se cambia el elemento fijo de comparación se debe
                //inicializar el contador. El valor inicial de este es 1 porque el
                //elemento fijo de comparación también se incluye en los conteos
                contador = 1;

                //Impresión inicial de resultados
                //Se muestra el número fijo de comparación y su posición
                cout << "Conteo para el número: " << matriz[i][j] << endl;
                cout << "  ubicado en matriz[" << i << "][" << j << "]" << endl;

                //Marcar el elemento fijo de comparación como visitado
                visitas[i][j] = true;

                for(int k = 0; k < filas; k++) {
                    for(int n = 0; n < columnas; n++) {

                        //Se revisa si se están comparando dos elementos en
                        //posiciones diferentes; se verifica  si se está
                        //comparando con un elemento que no había sido contabilizado
                        //antes; y se verifica que el valor del elemento fijo de
                        //comparación sea igual al del recorrido con k,n

                        if((i != k || j != n) && visitas[k][n] == false &&
                                matriz[i][j] == matriz[k][n]) {

                            //Incremento del contador
                            contador++;

                            //Se marca la posición como visitada
                            visitas[k][n] = true;

                            //Se muestra la ubicación de la coincidencia
                            cout << "  ubicado en matriz[" << k << "][" << n << "]";
                            cout << endl;

                        }
                    }
                }
                //Mostrar el total de coincidencias
                cout << "Total de coincidencias: " << contador << endl << endl;
            }
        }
    }
    return 0;
}
