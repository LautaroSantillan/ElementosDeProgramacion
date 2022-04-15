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
    return(0);
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
    return(0);
}*/

/*ejercicio 2.6*/

/*#include <stdio.h>
int main()
{
    int pasven1, pasven2, clast, primc, rec;
    printf("Ingrese cantidad de pasajes vendidos en clase turista: ");
    scanf("%d", &pasven1);
    printf("Ingrese cantidad de passajes vendidos de primera clase: ");
    scanf("%d", &pasven2);
    clast = 8800 * pasven1;
    primc = (8800 * 1.3) * pasven2;
    rec = clast + primc;
    printf("La recaudacion total del vuelo es de: %d", rec);
    return(0);
}*/

/*ejercicio 2.7*/

/*#include <stdio.h>
int main ()
{
    int numin, cent, dec, unid, aux;
    printf("Ingresar un numero de 3 cifras: ");
    scanf("%d", &numin);
    cent = numin / 100;
    aux = numin % 100;
    dec = aux / 10;
    unid = aux % 10;
    printf("Su numero ha sido descompuesto:");
    printf("\n Centena: %d", cent * 100);
    printf("\n Decenas: %d", dec * 10);
    printf("\n Unidad: %d", unid);
    return(0);
}*/

/*ejercicio 2.9*/

/*#include <stdio.h>
int main ()
{
    float kib, mib, gib, tib;
    printf("Ingrese un valor expresado en KIB: ");
    scanf("%f", &kib);
    mib = kib / 1024;
    gib = mib / 1024;
    tib = gib / 1024;
    printf("\n El valor ingresado se mostrara en otras unidades: ");
    printf("\n mib: %f", mib);
    printf("\n gib: %f", gib);
    printf("\n tib: %f", tib);
    return(0);
}*/

/*ejercicio 2.10*/

/*#include <stdio.h>
int main ()
{
    float r;
    const float pi = 3.1416;
    printf("Ingrese el valor del radio de un circulo: ");
    scanf("%f" , &r);
    printf("\n Superficie del circulo: %f", pi * r * r);
    printf("\n Longitud de la circunferencia o perimetro: %f", 2 * pi * r);
    printf("\n Volumen de la esfera: %f", 4/3 * pi * r);
    return(0);
}*/

/*ejercicio 2.11*/

/*#include <stdio.h>
int main ()
{
    int cantemp, docena, indiv, prectot;
    int precdoc = 300;
    int precind = 30;
    printf("Ingresar cuantas empanadas quiere: ");
    scanf("%d", &cantemp);
    docena = cantemp / 12;
    indiv = cantemp % 12;
    prectot = (docena * precdoc) + (indiv * precind);
    printf("\n El precio total de la compra es de: %d", prectot);
    return(0);
}*/

/*ejercicio 2.12*/

#include <stdio.h>
int main ()
{
    int desc, precior;
    float preciof;
    printf("Ingrese el precio del producto: ");
    scanf("%d", &precior);
    printf("\n Ingresar codigo 0 o 1.\n  0 no aplica descuento, \n 1 aplica un descuento del 20%: ");
    scanf("%d", &desc);
    preciof = precior - desc * precior * 0.2;
    printf("\n El precio final es de: %f", preciof);
    return(0);
}

/*ejercicio 2.13*/

/*#include <stdio.h>
int main()
{
    int num, sum;
    printf("Ingrese un numero de 4 cifras: ");
    scanf("%d", &num);
    sum = num / 1000;
    num = num % 1000;
    sum += num / 100;
    num = num % 100;
    sum += num / 10 + num % 10;
    sum = sum / 10 + sum % 10;
    sum = sum / 10 + sum % 10;
    printf("\n El resultado es: %d", sum);
    return(0);
}*/
