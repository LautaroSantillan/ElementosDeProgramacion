/*ejercicio 2.1*/

/*#include <stdio.h>
int main ()
{
    int hstrab, hsvalor, sueldo;
    printf("Ingrese cantidad de horas trabajadas: ");
    scanf("%d", &hstrab);
    printf("Ingrese el valor por hora: ");
    scanf("%d", &hsvalor);
    sueldo = hstrab * hsvalor;
    printf("A partir de los datos ingresados, el sueldo es: %d", sueldo);
    return(0);
}*/

/*ejercicio 2.2*/

/* #include <stdio.h>
int main()
{
    int not1, not2, prom;
    printf("Ingrese su primera nota de examen: ");
    scanf("%d",&not1);
    printf("Ingrese su segunda nota de examen: ");
    scanf("%d", &not2);
    prom = (not1+not2)/2;
    printf("La nota promedio es; %d", prom);
    return(0);
}*/

/*ejercicio 2.3*/

/*#include <stdio.h>
int main ()
{
    int num1,num2,sum,prod,coc,rest;
    printf("Ingrese un numero entero: ");
    scanf("%d",&num1);
    printf("\n ingrese un numero distinto de 0: ");
    scanf("%d",&num2);
    sum = num1 + num2;
    prod = num1 * num2;
    coc = num1 / num2;
    rest = num1% num2;
    printf("\n El resultado de operar %d y %d es:" ,num1,num2);
    printf("\n\n Suma:%d",sum);
    printf("\n Producto:%d",prod);
    printf("\n Cociente:%d",coc);
    printf("\n Resto:%d",rest);
    return(0);
}*/

/*ejerccio 2.4*/

/*#include <stdio.h>
int main ()
{
    float pies;
    printf("Ingrese una medida de pies:");
    scanf("%f", &pies);
    printf("Su medida de pies se mostrara en otras unidades aproximdas");
    printf("\n Yardas = %f", pies / 3);
    printf("\n Pulgadas = %f", pies * 12);
    printf("\n Centimetros = %f", pies * 30.48);
    printf("\n Metros = %f", pies * 0.3048);
}*/

/*ejercicio 2.5*/

/*#include <stdio.h>
int main()
{
    int cantIn = 100, cant1, cant4, cant20;
    cant1 = cantIn * 0.5;
    cant4 = (cantIn * 30)/100;
    cant20 = cantIn * 0.2;
    printf("En el deposito hay %d tarros de 1lt, %d de 4lts y %d de 20lts", cant1, cant4, cant20);
}*/

/*ejercicio 2.6*/

#include <stdio.h>
int main()
{
    int pasVen1, pasVen2, clasT, primC, rec;
    printf("Ingrese cantidad de pasajes vendidos en clase turista: ");
    scanf("%d", &pasVen1);
    printf("Ingrese cantidad de passajes vendidos de primera clase: ");
    scanf("%d", &pasVen2);
    clasT = 8800 * pasVen1;
    primC = (8800 * 1.3) * pasVen2;
    rec = clasT + primC;
    printf("La recaudacion total del vuelo es de: %d", rec);
}
