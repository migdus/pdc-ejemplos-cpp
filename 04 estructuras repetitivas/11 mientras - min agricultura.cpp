/*
 * Autor: Miguel Dussan
 *
 *
 * El Ministerio de Agricultura colombiano tiene los datos resumidos en miles de toneladas de cosecha recolectada en los pisos términos cálido, templado y frío del país para los trimestres del año anterior. Diseñe un programa que utilizando estructuras repetitivas permita al ministerio calcular:
 *
 * a) El promedio trimestral de cosecha recolectada para el piso térmico templado.
 * b) El mejor y peor trimestre en cantidad de cosecha recolectada para todo el país.
 * c) El piso término que tuvo la mayor cantidad de toneladas recolectadas en el último trimestre del año.
 * d) (Ejercicio) El piso término que tuvo la menor cantidad de toneladas recolectadas en el segundo trimestre del año.
 * e) (Ejercicio) El promedio del tercer trimestre de cosecha recolectada para el piso térmico templado.
 *
 */

#include <iostream>

using namespace std;

int main() {
    int calido, templado, frio; //Toneladas recolectadas en un trimestre dado
    int control = 0; //Variable de control del ciclo
    int prom_frio = 0; // Promedio de recolección para el clima frío

    /*
     * Guarda el número del mejor y del peor trimestre.
     * El valor inicial es 1, asumiendo que el primero será el peor. Si existe
     * un trimestre peor que este, el programa lo modificará
     */
    int mejor_trim=1;
    int peor_trim=1;

    /*
     * Cantidad recolectada para el mejor y peor trimestre
     */
    int mejor_trim_cant_recol = 0;
    int peor_trim_cant_recol = 0;

    /*
      * Esta bandera permite detectar si es el primer bucle que se está ejecutando. Si es verdadero,
      * entonces se inicializan las variables de cantidad recolectada para el mejor y peor trimestre.
      * Este bloque se ejecuta una sola vez
      */
    int band_primera_iter = true;

    int total_trim = 0; // Total recolectado en un trimestre

    /*
     * Indica el piso térmico que tuvo la mayor recolección en el último trimestre
     * 1 para cálido, 2 para templado y 3 para frío
     */
    int mayor_recol_ultimo_trim = 0;

    // El año tiene 4 trimestres
    while (control < 4) {

        //Solicitud de toneladas recolectadas en un trimestre
        cout << "Toneladas recolectadas para el clima calido para el trimestre " << control + 1 << " ?: ";
        cin >> calido;
        cout << "Toneladas recolectadas para el clima templado para el trimestre " << control + 1 << " ?: ";
        cin >> templado;
        cout << "Toneladas recolectadas para el clima frio para el trimestre " << control + 1 << " ?: ";
        cin >> frio;

        prom_frio += frio;

        total_trim = calido + templado + frio;

        if( band_primera_iter == true) {
            mejor_trim_cant_recol = total_trim;
            peor_trim_cant_recol = total_trim;
            band_primera_iter = false;
        } else {
            if( total_trim > mejor_trim_cant_recol) {
                mejor_trim = control + 1;
                mejor_trim_cant_recol = total_trim;
            }
            else if (total_trim < peor_trim_cant_recol) {
                peor_trim = control + 1;
                peor_trim_cant_recol = total_trim;
            }
        }

        if(control == 3) {
            if(calido > templado && calido > frio) {
                mayor_recol_ultimo_trim = 1;
            }
            else if(templado > calido && templado > frio) {
                mayor_recol_ultimo_trim = 2;
            }
            else if(frio > calido && frio > templado) {
                mayor_recol_ultimo_trim = 3;
            }
        }
        control++;
    }
    cout << endl << "Resultados"<<endl<<endl;
    cout << "El promedio trimestral de cosecha recolectada para el piso térmico templado es: ";
    cout << prom_frio / 4 << endl << endl;

    cout << "El mejor trimestre fue el numero: "<< mejor_trim << " con un total de " << mejor_trim_cant_recol << "e3 toneladas"<<endl;
    cout << "El peor trimestre fue el numero: "<< peor_trim << " con un total de " << peor_trim_cant_recol << "e3 toneladas"<<endl<<endl;

    cout << "El piso termico con mayor recoleccion en el ultimo trimestre fue: ";
    switch(mayor_recol_ultimo_trim) {
    case 1:
        cout << "calido";
        break;
    case 2:
        cout << "templado";
        break;
    case 3:
        cout << "frio";
        break;
    }
    system("pause");
    return 0;
}
