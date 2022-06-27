/*Se dispone de un archivo llamado RATING.dat que guarda la información de los puntos obtenidos de rating
en los distintos programas de canales de cable a lo largo del día.
Cada registro contiene:
 •  Número de canal (entero)
 •  Programa (texto de 35 caracteres máximo)
 •  Rating (float)
El archivo se encuentra ordenado por canal. Se solicita informar:
 a.  Aquellos canales que obtengan menos de 15 puntos en total.
 b.  El canal más visto.
 c.  Generar un archivo con el promedio de rating de cada canal que incluya dos campos:
 •  Número de canal
 •  Promedio*/
 //INCLUDE/////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
//ESTRUCTURAS//////////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
                int numCanal; //Ordenado para Corte de Control
                char programa[36];
                float rating;
                }T_Prog;

typedef struct {
                int nroCanal;
                float prom;
                }T_Rat;
//PROTOTIPADO DE FUNCIONES////////////////////////////////////////////////////////////////////////////////
int CargaArch(T_Prog[]);
void GrabarArch(T_Rat[], int);
//MAIN////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    T_Prog VProg[];
    T_Rat VRat[];
    int cantCanales=0, acumPunto=0;

    cantCanales=CargaArch(VProg);

}
//FUNCIONES///////////////////////////////////////////////////////////////////////////////////////////////
int CargaArch(T_Prog V[])
{
    FILE *pf;
    T_Prog aux;
    int i=0;
    pf=fopen("RATING.dat", "rb");
    if(pf==NULL)
    {
        printf("\nNo abrio el archivo...");
        exit(1);
    }
    fread(&aux, sizeof(T_Prog), 1, pf);
    while(!feof (pf))
    {
        V[i]=aux;
        i++;
        fread(&aux, sizeof(T_Prog), 1, pf);
    }
    fclose(pf);
    return i;
}
