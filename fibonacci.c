// Programm zum Erzeugen von Fibonacci-Folgen
// Autor: Fabian Prestros
// Datum: 16.04.2020

#include <stdio.h>

int main(void)
{
	int chk;
	unsigned int i;
	unsigned int n;
	double x[50];

	// Eingabe prüfen
	do
	{
		printf("n = ");
		chk = scanf_s("%d", &n);
		while (getchar() != '\n'); // Tastaturpuffer leeren.
		if ((chk == 0) || (n > 49))
			printf("Bitte geben Sie eine nat\x81rliche Zahl kleiner 50 ein!\n");
	} while ((chk == 0) || (n > 49));

	// Fibonacci-Folgen erzeugen
	x[0] = 1;
	x[1] = 1;
	for (i = 2; i <= n; i++)
		x[i] = x[i - 1] + x[i - 2];
	
	// Ausgabe
	for (i = 0; i <= n; i++)
		printf("%.0lf ", x[i]);
	printf("\n");
}