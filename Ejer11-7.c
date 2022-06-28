/*La empresa RED VIAL S.A. desea controlar el flujo vehicular en sus cabinas de peaje a lo largo del mes. Para ello se debe
procesar la información provista por las barreras que se encuentra almacenada en el archivo (BARRERAS.dat) que contiene la
siguiente información:

 •  Día (entero)
 •  Hora (0 a 24)
 •  Número de barrera (entero)

Dentro del archivo la información se encuentra ordenada por día y hora. Determinar:

 a.  La cantidad de vehículos por cada hora.
 b.  La cantidad de vehículos de cada día.
 c.  Ingresar por teclado los precios del peaje para horario normal y horario pico (de 7 a 11 y de 17 a 19). Con esos
 valores guardar un archivo con la recaudación de cada día.*/
 //INCLUDES/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 //ESTRUCTURAS//////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
                int dia; //Ordenado para Corte de Control 1ero
                int hora; //0 a 24 => Ordenado para Corte de Control 2do
                int numBarrera;
                }T_Barre;

typedef struct {
                int dia;
                float recaudacion;
                }T_Recau;
//PROTOTIPADO DE FUNCIONES//////////////////////////////////////////////////////////////////////////////////////////////////
int CargaArch(T_Barre[]);
void ProcesarYGrabarArch(T_Barre[], int);
void GrabarArch(T_Barre[], int);
int IngrDatoVal(int);
//MAIN//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int cant;
    T_Barre VBarre[cant];
    cant=CargaArch(VBarre);
    ProcesarYGrabarArch(VBarre, cant);
    printf("\n\n");

    return 0;
}
//FUNCIONES/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int CargaArch(T_Barre V[])
{
    FILE *pf;
	T_Barre aux;
	int i=0;
	pf= fopen("BARRERAS.dat", "rb");
	if(pf==NULL)
	{
		printf("\nNo se pudo abrir el archivo");
		exit(1);
	}
	fread(&aux, sizeof(T_Barre), 1, pf);
    while(!feof (pf))
    {
        V[i]=aux; // PASAR A MEMORIA
        i++; //CONTADOR DE PRODUCTOS
        fread(&aux, sizeof(T_Barre), 1, pf);
    }
    fclose(pf);
    return i;
}
void ProcesarYGrabarArch(T_Barre V[], int ce)
{
    FILE *pf, *sf;
    int cantDia, cantHora;
    float precioNormal, precioPico;
    //Apertura archivos
	pf=fopen("BARRERAS.dat", "rb"); //LECTURA ARCHIVO BARRERAS
	if(pf==NULL)
	{
		printf("\nNo se pudo abrir el archivo barreras");
		exit(1);
	}
	sf=fopen("RECAUDACION.dat", "wb"); //ESCRITURA ARCHIVO RECAUDACION
	if(sf==NULL)
	{
		printf("\nNo se pudo abrir el archivo recaudacion");
		exit(1);
	}
	//PROCESO
    printf("\nIngresar precio del peaje en horario normal: ");
    precioNormal=IngrDatoVal(0);
    printf("\nIngresar precio del peaje en horario pico: ");
    precioPico=IngrDatoVal(0);
}
//FUNCIONES COMPLEMENTARIAS
int IngrDatoVal(int lim)
{
    float dato;
    do{
        scanf("%f", &dato);
    }while(dato<lim);
    return dato;
}
