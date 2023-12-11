#include<stdio.h>
#include<windows.h>
main(int argc, char const *argv[])
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
	float suma = 0;
	int contador = 0;
	printf("Ingrese los números (ingrese 0 para finalizar):n");
	float numero;
	scanf("%f", &numero);
	while (numero != 0) {
	suma += numero;
	contador++;
	scanf("%f", &numero);
	}
	float promedio = suma / contador;
	printf("El promedio es: %.2fn", promedio);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("============== \n");
    return 0;
}		
