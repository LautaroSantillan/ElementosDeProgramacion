/*ejercicio 4.1*/

/*#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Ingresar un numero: ");
    scanf("%d", &num1);
    printf("\nIngrese otro numero: ");
    scanf("%d", &num2);
    printf("\nIngrese el ultimo numero: ");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3)
        printf("\n%d es el numero mayor", num1);
    else
    {
        if(num2>num1 && num2>num3)
            printf("\n%d es el numero mayor", num2);
        else
            printf("\n%d es el numero mayor", num3);
    }
}*/

/*ejercicio 4.2*/

/*#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Ingresar un numero: ");
    scanf("%d", &num1);
    printf("\nIngrese otro numero: ");
    scanf("%d", &num2);
    printf("\nIngrese el ultimo numero: ");
    scanf("%d", &num3);
    if(num1<num2 && num1<num3)
        printf("\n%d es el numero menor", num1);
    else
        printf("\nEl primer numero no es menor que los otros 2");
}*/

/*ejercicio 4.3*/

/*#include <stdio.h>
int main ()
{
    int num1, num2, num3;
    printf("Ingresar un numero entero: ");
    scanf("%d", &num1);
    printf("\n Ingresar un numero entero: ");
    scanf("%d", &num2);
    printf("\n Ingresar un numero entero: ");
    scanf("%d", &num3);
    if(num1 == num2 + num3)
        printf("\n %d es igual a la suma entre %d y %d", num1, num2, num3);
    else
    {
        if(num2 == num1 + num3)
            printf("\n %d es igual a la suma entre %d y %d", num2, num1, num3);
        else
        {
            if(num3 == num1 + num2)
                printf("\n %d es igual a la suma entre %d y %d", num3, num1, num2);
            else
                printf("\n Ningun numero es igual a la suma de los otros 2");
        }
    }
}*/

/*ejercicio 4.5*/

/*#include <stdio.h>
int main ()
{
    int num1, num2, num3;
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("\n Ingrese otro numero: ");
    scanf("%d", &num2);
    printf("\n Ingrese el ultimo numero: ");
    scanf("%d", &num3);
    if(num1 > num2 && num1 > num3)
        if(num2 < num3)
            printf("\n %d %d %d", num2, num3, num1);
        else
            printf("\n %d %d %d", num3, num2, num1);
    else
    {
        if(num2 > num3)
            if(num1 < num3)
                printf("\n %d %d %d", num1, num3, num2);
            else
                printf("\n %d %d %d", num3, num1, num2);
        else
        {
            if(num2 < num1)
                printf("\n %d %d %d", num2, num1, num3);
            else
                printf("\n %d %d %d", num1, num2, num3);
        }
    }
}*/

/*ejercicio 4.6*/

/*#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, menor, orden;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    menor=num1;
    orden=1;
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &num2);
    if(num2<menor)
    {
        menor=num2;
        orden=2;
    }
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &num3);
    if(num3<menor)
    {
        menor=num3;
        orden=3;
    }
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &num4);
    if(num4<menor)
    {
        menor=num4;
        orden=4;
    }
    printf("\nSe ingresaron los numeros: %d %d %d %d", num1,num2,num3,num4);
    printf("\nEl menor es %d y se ingreso en el orden %d", menor, orden);
}*/

/*ejercicio 4.9*/

/*#include <stdio.h>
int main()
{
    int car, aux;
    printf("Ingrese un caracter: ");
    scanf("%d", &aux);
    aux=tolower(car);
    if(car=='a'|| car=='e'|| car=='i'|| car=='o'|| car=='u')
    printf("\nIngreso una VOCAL y su valor en ASCII es %d", car);
}*/

/*ejercicio 4.10*/

/*#include <stdio.h>
int main ()
{
    int cod; float val1, result;
    const float pi = 3.1416;
    printf("Ingrese un valor: ");
    scanf("%f", &val1);
    printf("\nIngrese un codigo, 1 o 2: ");
    scanf("%d", &cod);
    if(cod==1)
    {
        result=val1*180/pi;
        printf("\n%f grados", result);
    }
    else
    {
        if(cod==2)
        {
            result=val1*pi/180;
            printf("\%f radianes", result);
        }
    }
}*/

/*ejercicio 4.12*/

/*#include <stdio.h>
int main()
{
    int valorH, horasTr, sueldo;
    printf("Ingrese el valor de la hora trabajada: ");
    scanf("%d", &valorH);
    printf("\nIngrese las horas trabajadas: ");
    scanf("%d", &horasTr);
    sueldo=valorH+horasTr;
    if(horasTr>50)
    {
        sueldo+=500;
        if(horasTr>150)
            sueldo+=1000;
    }
    printf("\nSu sueldo mas premios es de %d\n", sueldo);
}*/

/*ejercicio 4.13*/

/*#include <stdio.h>
int main()
{
    int numcat;
    printf("Ingrese el numero del catalogo: ");
    scanf("%d", &numcat);
    if(numcat>=1200 && numcat<=90000)
    {
        if(12121<=numcat && numcat<=18081 || 30012<=numcat && numcat<=45565 || 67000<=numcat && numcat<=68000)
            printf("\nEl articulo es defectuoso\n");
        else
            printf("\nEl articulo no es defectuoso\n");
    }
    else
        printf("\nFUERA DE CATALOGO\n");
}*/
