#include<stdio.h>
#include<windows.h>
int main(int argc, char const *argv[])
{	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("PROMEDIETOR 3000 v0.1 \n"); 
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("============== \n");
	
	 int numero_de_articulos=0, monto_total=0,costo_de_articulo=0;
   int conteo; /* inicialización de la variable conteo con uno */
   printf("\n\tCalculo del Promedio de unas calificaciones\n\n");
   printf("\tTeclea el numero de Calificaciones:\n\n");
   printf("\t\t");
   scanf("%d",&numero_de_articulos); /* solicitud del dato numerico */
   printf("\n"); /* salto de linea */
   for (conteo=1;conteo<=numero_de_articulos;conteo++)
   {
      printf("\tTeclea la calificacion %3d :\n\n\t\t",conteo);
      scanf("%d",&costo_de_articulo); /* solicitud del dato numerico */
      printf("\n"); /* salto de linea */
      monto_total = monto_total+costo_de_articulo; /* suma iterativa */
   }
   monto_total = monto_total/numero_de_articulos;
   
   printf("\t el promedio es \t\t%d\n",monto_total);
   getch();
	
	
	/*
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("Hola Mundo :v! \n"); 
	*/
	
	
    /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("============== \n");

    return 0;
		
}
