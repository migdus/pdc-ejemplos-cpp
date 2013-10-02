/*
 * Autor: Miguel Dussán
 *
 * Una compañía de seguridad ofrece guardaespaldas para altos perfiles
 * (empresarios, políticos, estrellas de farándula y cualquier otra persona
 * que pueda permitirse pagar estos servicios). Cada vez que un guardaespaldas
 * asiste a uno de estos clientes, el cliente firma una planilla donde se
 * registra el número de horas y la jornada en la que el guardaespaldas lo
 * estuvo acompañando. Al final del mes, el guardaespaldas entrega la planilla
 * a la empresa para que esta le pague las horas trabajadas, discriminadas en
 * las siguientes jornadas: diurno, nocturno y festivo, cada una con una tarifa
 * diferente por hora, como se muestra al final. Diseñe un programa que permita
 * ingresar cuántas horas trabajó por jornada cada guardaespaldas, y calcule:
 * cuántas horas trabajó el empleado en ese mes, cuál es el total que se le
 * debe pagar al empleado, qué porcentaje de lo que se le debe pagar
 * corresponde a cada jornada, y cuánto dinero pagarán los clientes a la
 * empresa de seguridad en ese mes.
 *
 *
 * Tarifa pagada por horas al guardaespaldas según la jornada
 * ==========================================================
 * diurno              $10.000/hora
 * nocturno          $15.000/hora
 * festivo             $20.000/hora
 *
 * Tarifa cobrada al cliente por hora y jornada
 * ============================================
 * diurno                $30.000/hora
 * nocturno            $50.000/hora
 * festivo               $70.000/hora
 *
 *
 * Ejercicios sugeridos
 *
 * 1. ¿Cuál es el total que recibe la empresa después de pagarle a todos sus
 * empleados?
 *
 * 2. ¿Cuál de las jornadas generó mayores ingresos para la empresa?
 */

#include <iostream>
using namespace std;

int main() {
    /*
     * cantidad: número de empleados
     * control: variable de control del ciclo
     * diurno, nocturno, festivo: horas trabajadas para un empleado dado
     * total: total de horas trabajadas para un trabajador
     * pagar: total a pagar a un empleado
     * recibido: acumuladora, dinero cobrado a los clientes
     */
    int cantidad, control,diurno,nocturno,festivo,total,pagar,recibido;

    control = 0;
    recibido = 0;

    cout << "Digite la cantidad de empleados cuyas horas quiere registrar"<<endl;
    cin >> cantidad;

    while(control < cantidad) {

        cout << "Registro de horas para el empleado No. "<<control+1<<endl;

        cout << "Horas diurnas trabajadas? ";
        cin >> diurno;

        cout << "Horas nocturas trabajadas? ";
        cin >> nocturno;

        cout << "Horas en dia festivo trabajadas? ";
        cin >> festivo;

        total = diurno+nocturno+festivo; //total de horas trabajadas

        /*
         * total a pagar, de acuerdo a la tabla del enunciado
         */
        pagar=(diurno*10+nocturno*15+festivo*20)*1000;

        cout << endl << "Resultados para el empleado No. "<<control+1<<endl;

        cout << "Horas trabajadas en el mes: "<<total<<endl;

        cout << "Se le debe pagar: $"<<pagar<<endl;
        /*
         * Cálculo de porcentaje para cada jornada.
         * Se calcula con base en el tiempo trabajado por jornada y el total
         * de horas trabajadas en el mes
         */
        cout << "Porcentaje correspondiente a jornada diurna: "<<diurno*100/total<<"%"<<endl;
        cout << "Porcentaje correspondiente a jornada noctura: "<<nocturno*100/total<<"%"<<endl;
        cout << "Porcentaje correspondiente a jornada festa: "<<festivo*100/total<<"%"<<endl;

        /*
         * Se acumulan los valores para las tarifas que la empresa cobra al cliente,
         * de acuerdo a la tabla del enunciado
         */
        recibido += (diurno*30+nocturno*50+festivo*70)*1000;

        control++;
    }
    cout << "El total pagado por los clientes a la empresa fue: $"<<recibido<<endl;
    system("pause");
    return 0;
}
