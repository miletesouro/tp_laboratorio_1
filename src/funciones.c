/*
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
 * @fn float PedirNumero(void)
 * @brief pide un numero
 *
 * @return operadorIngresado
 */
float PedirNumero (void)
{
	float operadorIngresado;
	printf("\n\n\t Ingrese un numero:\n");
	scanf("%f",&operadorIngresado);
	return operadorIngresado;
}
/**
 * @fn float FuncionSuma(float, float)
 * @brief suma el operador1 con el operador2
 *
 * @param operador1
 * @param operador2
 * @return suma
 */
float FuncionSuma (float operador1, float operador2)
{
	float suma;
	suma = operador1 + operador2;
	return suma;
}

/**
 * @fn float FuncionResta(float, float)
 * @brief resta el operador1 con el operador2
 *
 * @param operador1
 * @param operador2
 * @return resta
 */
float FuncionResta (float operador1, float operador2)
{
	float resta;
	resta = operador1 - operador2;
	return resta;
}

/**
 * @fn float FuncionMultiplicacion(float, float)
 * @brief  multiplica el operador1 con el operador2
 *
 * @param operador1
 * @param operador2
 * @return multiplicacion
 */

float FuncionMultiplicacion (float operador1, float operador2)
{
	float multiplicacion;;
	multiplicacion = operador1 * operador2;
	return multiplicacion;
}

/**
 * @fn float FuncionDivision(float, float)
 * @brief divide el operador 1 con el operador2
 *
 * @param operador1
 * @param operador2
 * @return division
 */
float FuncionDivision (float operador1, float operador2)
{
	float division;
	division = operador1 / operador2;
	return division;
}

/**
 * @fn float FuncionFactorialUno(float)
 * @brief efectua el factorial del operador1
 *
 * @param operador1
 * @return factorial1
 */
float FuncionFactorialUno (float operador1)
{
	int i;
	float factorial1;
	factorial1 = 1;

	for (i=1;i<=operador1;i++)
	{
		factorial1*=i;
	}

	return factorial1;

}

/**
 * @fn float FuncionFactorialDos(float)
 * @brief efectua el factorial del operador2
 *
 * @param operador2
 * @return factorial2
 */
float FuncionFactorialDos (float operador2)
{
	int i;
	float factorial2;
	factorial2 = 1;

	for (i=1;i<=operador2;i++)
	{
		factorial2*=i;
	}

	return factorial2;
}

/**
 * @fn void FuncionMostrarResultado(float, float, float, float, float, float, float, float)
 * @brief muestra los resultados de las operaciones
 *
 * @param operador1
 * @param operador2
 * @param suma
 * @param resta
 * @param multiplicacion
 * @param division
 * @param factorial1
 * @param factorial2
 */
void FuncionMostrarResultado (float operador1,float operador2, float suma, float resta, float multiplicacion, float division, float factorial1, float factorial2)
{
    printf("\n\n\t a)El resultado de %.2f+%.2f es: %.2f.\n", operador1, operador2, suma);
    printf("\t b)El resultado de %.2f-%.2f es: %.2f.\n", operador1, operador2, resta);
    printf("\t c)El resultado de %.2f*%.2f es: %.2f.\n", operador1, operador2, multiplicacion);
    if (operador2==0)
    {
        printf("\t Math ERROR. No se puede dividir por cero. \n");
    }
    else
    {
    printf("\t d)El resultado de %.2f/%.2f es: %.2f.\n", operador1, operador2, division);
    }
    if (operador1 == 0 || operador1<0)
    {
        printf("\t e)ERROR. No se puede sacar el factorial de 0 o de un numero negativo.\n\t El factorial de %f es %f.\n", operador2, factorial2);
    }
    else
    {
        if (operador2 == 0 || operador2<0)
        {
            printf("\t El factorial de %f es %f.\n\t e)ERROR. No se puede sacar el factorial de 0 o de un numero negativo.\n", operador1, factorial1);
        }
        else
        {
            printf("\t e)El factorial de %.2f es: %.2f.\n\t El factorial de %.2f es: %.2f.\n", operador1, factorial1, operador2, factorial2);
        }
    }

}
