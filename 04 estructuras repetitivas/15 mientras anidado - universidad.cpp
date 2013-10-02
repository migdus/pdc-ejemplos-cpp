/*
 * Autor: Miguel Dussán
 *
 *
 * Una universidad dicta la materia de Programación de Computadores, que se 
 * compone de 3 cortes, con una ponderación del 30% para el primer corte, 
 * 30% para el segundo corte y 40% para el tercer corte. Esta materia se dicta en 
 * 3 grupos diferentes, cada uno compuesto por 8 estudiantes. Escriba  un programa 
 * que calcule el promedio por corte para cada grupo, y que determine cuál grupo 
 * tuvo el mejor promedio en cada corte.
 *
 * Ejercicios sugeridos
 * 1) Calcule el promedio de la materia para cada grupo.
 * 2) Determine cuál fue el grupo con el mejor promedio de la materia.
 * 3) Determine cuál fue el grupo que tuvo la peor nota para cada corte.
 */

#include <iostream>

using namespace std;

int main() {

//Notas de un estudiante para el corte 1, 2 y 3
    float corte1,corte2,corte3;

    int grupo = 0; //Contador de grupos
    int estudiante; //Contador de estudiantes

//acumulador de notas por corte para un grupo
    float acum_c1,acum_c2,acum_c3;

//promedio de notas por corte para un grupo
    float prom_c1,prom_c2,prom_c3;

//Mejor grupo de cada corte
    int mej_g_c1,mej_g_c2,mej_g_c3;

//Calificación del mejor grupo por corte
    float mej_g_cal_c1,mej_g_cal_c2,mej_g_cal_c3;

//Valores iniciales de las mejores calificaciones
//Se pone un valor negativo para que cuando se tenga la información
//del primer grupo, este sea en principio, quien tuvo mejores calificaciones.
    mej_g_cal_c1=-1;
    mej_g_cal_c2=-1;
    mej_g_cal_c3=-1;

//3 grupos
    while(grupo < 3) {

        cout << "Información para el grupo "<<grupo+1<<endl;

//Inicialización de variables que se usan en el ciclo anidado
        estudiante = 0; //Contador de estudiantes
//Inicialización de acumuladores de notas para los 3 cortes
        acum_c1=0;
        acum_c2=0;
        acum_c3=0;

        while(estudiante < 8) {
            cout << "Ingrese nota del corte 1 para el estudiante "<<estudiante +1<<" : ";
            cin >> corte1; //Captura la nota del corte para el estudiante en cuestión
            acum_c1 += corte1; //Se acumula la nota para ese corte

            cout << "Ingrese la nota del corte 2 para el estudiante "<<estudiante+1<<" : ";
            cin >> corte2;
            acum_c2 += corte2;

            cout << "Ingrese la nota del corte 3 para el estudiante "<<estudiante+1<<" : ";
            cin >> corte3;
            acum_c3 += corte3;

            cout << endl;

            estudiante++;
        }

//Con las notas acumuladas de un grupo de estudiantes, se calcula el promedio
//por cada corte
        prom_c1=acum_c1/8;
        prom_c2=acum_c2/8;
        prom_c3=acum_c3/8;

//Se muestra el promedio por corte para ese grupo
        cout << endl << "Promedio grupo "<<grupo+1<<" corte 1: "<< prom_c1<<endl;
        cout << endl << "Promedio grupo "<<grupo+1<<" corte 2: "<< prom_c2<<endl;
        cout << endl << "Promedio grupo "<<grupo+1<<" corte 3: "<< prom_c3<<endl;

//Se revisa si los promedios del grupo actual son mejores a la información
//que se tiene guardada
        if(mej_g_cal_c1 < prom_c1) {
            mej_g_c1 = grupo + 1; //Se guarda el número de grupo con la mejor calificación del corte
            mej_g_cal_c1 = prom_c1; //Se guarda la calificación de ese corte
        }

        if(mej_g_cal_c2 < prom_c2) {
            mej_g_c2 = grupo +1;
            mej_g_cal_c1 = prom_c2;
        }

        if(mej_g_cal_c3 < prom_c3) {
            mej_g_c3 = grupo + 1;
            mej_g_cal_c3 = prom_c3;
        }

        grupo++;
    }

//Mostrar resultados
    cout << "Mejores promedios por corte"<<endl;
    cout << "Corte 1: Grupo "<<mej_g_c1<<" con nota de "<<mej_g_cal_c1<<endl;
    cout << "Corte 2: Grupo "<<mej_g_c2<<" con nota de "<<mej_g_cal_c3<<endl;
    cout << "Corte 3: Grupo "<<mej_g_c2<<" con nota de "<<mej_g_cal_c3<<endl;

system("pause");
    return 0;
}
