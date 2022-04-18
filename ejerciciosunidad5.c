/*ejercicio 5.1.1*/

/*#include <stdio.h>
int main ()
{
    int i;
    for(i = 100; i <= 500; i++)
    {
        printf("\nLos numeros entre 100 y 500: %d", i);
    }
}*/

/*ejercicio 5.1.2*/

/*#include <stdio.h>
int main()
{
    int i, suma = 0;
    for(i = 100; i >= 50; i+=-5)
    {
        suma += i;
    }
    printf("El resultado final es: %d",suma);
}*/

/*ejercicio 5.1.3*/

/*#include <stdio.h>
int main ()
{
    int numpar = 0, i, num;
    for(i = 0; i <= 50; i++)
    {
        printf("\nIngrese un numero entero: ");
        scanf("%d", &num);
        if(num%2==0)
        {
            numpar += 1;
        }
    }
    printf("\nHay %d numeros pares.\n", numpar);
}*/

/*ejercicio 5.1.7*/

/*#include <stdio.h>
int main ()
{
    int i, nota, cont = 0;
    for(i = 1; i <= 20; i++)
    {
        printf("Ingrese la nota del alumno: ");
        scanf("%d", &nota);
        if(nota < 4)
            cont++;
        else
        {
            if(nota > 7)
                printf("\nEl alumno con legajo %d ha promocionado\n\n", i);
        }
    }
    printf("\nLa cantidad de alumnos aplazados es de: %d\n", cont);
}*

/*ejercicio 5.1.11*/

/*#include <stdio.h>
int main ()
{
    int i, valortemp = 0, tempPos = 0, tempNeg = 0, ternapos = 0, ternaneg = 0;
    for(i = 1; i <= 18; i++)
    {
        printf("\nIngrese un valor de temperatura distinto de cero: ");
        scanf("%d", &valortemp);
        if(valortemp > 0)
        {
            tempPos ++;
            tempNeg = 0;
            if(tempPos == 3)
            {
                ternapos++;
                tempPos = 0;
            }
        }
        else
        {
            tempNeg++;
            tempPos = 0;
            if(tempNeg == 3)
            {
                ternaneg++;
                tempNeg = 0;
            }
        }
    }
    printf("\nHay %d ternas positivas y %d ternas negativas\n", ternapos, ternaneg);
}*/

/*ejercicio 5.1.13*/

/*#include <stdio.h>
int main ()
{
    int i, num=2, cantprimos=4;
    printf("2 3 5 7");
    for(i=1; i<100; i++)
    {
        if(num%2==0 || num%3==0 || num%5==0 || num%7==0)
            num++;
        else
        {
            if(num%1==0 || num%num==0)
            {
                printf("\n%d",num);
                cantprimos++;
                num++;
            }
        }
    }
    printf("\nSe contaron %d numeros primos", cantprimos);
}*/

/*ejercicio 5.1.20*/

#include <stdio.h>
int main()
{
    int num, i, j,k;
    printf("Ingrese un numero entero mayor a 0: ");
    scanf("%i", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1;j<=num-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
    }
}
