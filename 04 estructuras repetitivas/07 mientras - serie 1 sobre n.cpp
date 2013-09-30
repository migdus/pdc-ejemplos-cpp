/*
 * Autor: Miguel Dussán
 *
 * Diseñe un programa que dado un número entero positivo N calcule el resultado de la serie: 1 - 1/2 + 1/4 - ... +- 1/n
 *
 * Desarrollo:
 *
 * El enunciado muestra que:
 * 1) El número que el usuario ingresa determina el término máximo de la serie.
 * 2) Se alternan los símbolos de operación: suma y resta, arrancando por la substracción
 *
 * Se utilizará una bandera para alternar la operación que se realiza. Los resultados se almacenarán en una variable
 * acumuladora.
 * */

using namespace std;

int main() {
    int n; // Número hasta el cual irá la serie
    float c = 1; // Variable de control de ciclo inicializada en el primer término de la serie
    bool b = true; // Bandera inicializada en Verdadero.
    float acum = 0; // Acumulador de la operación
    /* Captura del número límite de la serie*/
    cout << "numero? " << endl;
    cin>> n;

    while(c <= n) { // Mientras no se llegue al número del término dado por el usuario
        if(b == true) {
            /*
             * Si la bandera es verdadera, se suma el término.
             * El valor del término de la serie está dado por 1/c, donde c
             * es la variable de control.
             *
             * En la primera iteración se acumula el valor del primer término, que es 1/1
             */
            acum += 1/c;
            b = false; // Cambio de la bandera a falso, para que en la próxima iteración el término se reste
        }
        else {
            acum -= 1/c; //Si la bandera es falsa, se resta el término
            b = true; // Cambio de valor de la bandera a verdadero, para que en la próxima iteración el término se sume
        }
        c ++; // Incremento de la variable de control
    }
    cout << "Resultado " << acum;
    system("pause");
    return 0;
}
