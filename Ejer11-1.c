/*Se dispone de un archivo llamado RATING.dat que guarda la informaci�n de los puntos obtenidos de rating en los distintos programas de canales de cable a lo largo del d�a. Cada registro contiene:

 �  N�mero de canal (entero)
 �  Programa (texto de 35 caracteres m�ximo)
 �  Rating (float)

El archivo se encuentra ordenado por canal. Se solicita informar:

 a.  Aquellos canales que obtengan menos de 15 puntos en total.
 b.  El canal m�s visto.
 c.  Generar un archivo con el promedio de rating de cada canal que incluya dos campos:

 �  N�mero de canal
 �  Promedio*/
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 #include <stdio.h>
 #include <strings.h>
 typedef struct{int numcanal;
                char prog[36];
                float rating;
                }T_Puntostv;
 typedef struct {int Numcan;
                 float prom;}T_Archrating;
void corte ();
void main()
 {
    corte();

 }
void corte ()
{
    int i=0,puntosob,band=0,cPrograma;

    FILE *pf;

    T_Puntostv aux;
    T_Archrating aux2;
    int canalant,visto,canal,masvisto;
    pf=fopen("RATING.dat","rb");
    if(pf==NULL)
    {
        printf("\n No se pudo abrir el archivo...");
        exit(1);
    }
    FILE *pEscribir = fopen("promedio.dat","wb");
    if(pEscribir==NULL)
    {
        printf("\n No se pudo abrir el archivo...");
        exit(1);
    }
    fread(&aux,sizeof(T_Puntostv),1,pf);
    while(!feof(pf))
    {
        canalant=aux.numcanal;
        puntosob=0;
        cPrograma=0;
        while(canalant==aux.numcanal && !feof(pf))
        {
            puntosob+=aux.rating;
            cPrograma++;
            fread(&aux,sizeof(T_Puntostv),1,pf);
        }

        if(puntosob<15)
        {
            printf("\n\nEl canal %d no alcanzo los 15 puntos de rating\n",canalant);
        }
        if(band==0||puntosob>masvisto)
        {
            band=1;
            masvisto=puntosob;
            canal=canalant;
        }
        aux2.prom=(float)puntosob/cPrograma;
        aux2.Numcan=canalant;
        fwrite(&aux2,sizeof(T_Archrating),1,pEscribir);
    }
    printf("\n\nEl canal mas visto es %d",canal);
}
