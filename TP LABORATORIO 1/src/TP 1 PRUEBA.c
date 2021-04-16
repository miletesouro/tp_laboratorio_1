/*
 ============================================================================
                        ALUMNA: TESOURO REY MILENA.
                        AÑO Y DIVISION: PRIMERO C.
                        TRABAJO PRACTICO 1.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {

	setbuf(stdout,NULL);
	float operadorNumeroUno;
	float operadorNumeroDos;
	int flagOperadorUno;
	int flagOperadorDos;
	int opcion;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	float factorialOperadorUno;
	float factorialOperadorDos;
	int flagOpcionTres;

	flagOperadorUno =0;
	flagOperadorDos =0;
	flagOpcionTres =0;

do {
    printf("\n\n|-----------------------------------------------------------|\n");
    printf("\t -BIENVENIDO/A A LA CALCULADORA! \n");
    printf("\t   ****Menu de opciones:****\n");
    printf("|-----------------------------------------------------------|\n");
    if (flagOperadorUno == 0)
    {
        printf("\t 1) Ingrese primer operando: (A=x)\n");
    }
    else
    {
        printf("\t 1) Ingrese primer operando: (A=%.2f)\n",operadorNumeroUno);
    }
    printf("|-----------------------------------------------------------|\n");
    if (flagOperadorDos== 0)
    {
        printf("\t 2) Ingrese segundo operando: (B=y)\n");
    }
    else
    {
        printf("\t 2) Ingrese segundo operando: (B=%.2f)\n", operadorNumeroDos);
    }
    printf("|-----------------------------------------------------------|\n");
    printf("\t 3) Calcular todas las operaciones\n");
    printf("|-----------------------------------------------------------|\n");
    printf("\t 4) Informar resultados\n");
    printf("|-----------------------------------------------------------|\n");
    printf("\t 5) Salir\n");
    printf("|-----------------------------------------------------------|\n");
    printf("\t Ingrese opcion: \n");
    scanf("%d", &opcion);

	switch(opcion)
	{

    case 1:
        system("@cls||clear");
        printf("\n\t Estas por ingresar el primer operando.\n");
        operadorNumeroUno = PedirNumero();
        flagOperadorUno = 1;
    break;

    case 2:
        system("@cls||clear");
        if (flagOperadorUno==0)
        {
            printf("\n\n\t -ERROR!\n");
            printf("\t Primero debes ingresar el primer operando.\n");
        }
        else
        {
        printf("\n\t Estas por ingresar el segundo operando. \n");
        operadorNumeroDos = PedirNumero ();
        flagOperadorDos = 1;
        }
    break;

    case 3:
        system("@cls||clear");
        if (flagOperadorUno == 1 && flagOperadorDos ==1)
        {
            printf("\n\n\t Calculando operaciones...\n");
            printf("\t Vuelva a menu e ingrese opcion 4 para ver los resultados. \n");
            resultadoSuma = FuncionSuma(operadorNumeroUno, operadorNumeroDos);
            resultadoResta = FuncionResta (operadorNumeroUno, operadorNumeroDos);
            resultadoMultiplicacion = FuncionMultiplicacion (operadorNumeroUno, operadorNumeroDos);
            resultadoDivision = FuncionDivision (operadorNumeroUno, operadorNumeroDos);
            factorialOperadorUno = FuncionFactorialUno (operadorNumeroUno);
            factorialOperadorDos = FuncionFactorialDos (operadorNumeroDos);
        }
        else
        {
            printf("\n\n\t -ERROR!\n");
            printf("\t Primero se deben ingresar los dos operandos.\n");
        }
        flagOpcionTres=1;
    break;

    case 4:
        system("@cls||clear");
        if (flagOperadorUno == 1 && flagOperadorDos ==1 && flagOpcionTres==1)
        {
            FuncionMostrarResultado (operadorNumeroUno,operadorNumeroDos,resultadoSuma,resultadoResta,resultadoMultiplicacion,resultadoDivision,factorialOperadorUno,factorialOperadorDos);
        }
        else
        {
            printf("\n\n\t -ERROR!\n");
            printf("\t Primero se deben ingresar los dos operandos y luego elegir opcion 3 para poder informar resultados.\n");
        }
		break;

		case 5:
			system("@cls||clear");
			printf("\n\n\t Estas saliendo de la calculadora. \n\t Tesouro Milena te saluda!! \n");
			break;
		break;

		default:
			system("@cls||clear");
			printf("\n\n\t Esta opcion no es valida, volve a ingresar: \n");
			scanf("%d",&opcion);
		break;
	}


} while (opcion!=5);

	return EXIT_SUCCESS;
}
