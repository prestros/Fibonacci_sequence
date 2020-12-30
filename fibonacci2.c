// Programm zum Erzeugen von Fibonacci-Folgen
// Autor: Fabian Prestros
// Datum: 30.12.2020
#include <stdio.h>

#define LAENGE 97

unsigned long long int einlesen(unsigned long long int fibonacci[LAENGE])
{
	int x = (LAENGE - 5);

	do
	{
		printf("Bitte geben sie die Anzahl der Zahlen ein: ");
		scanf_s("%lld", &fibonacci[4]);
		if (fibonacci[4] > x)
			printf("Sie duerfen nicht mehr als %d stellen eingeben!\n", x);
	} while (fibonacci[4] > x);
	
	fibonacci[4] = fibonacci[4] + 5;
}

unsigned long long int erzeugen(unsigned long long int fibonacci[LAENGE])
// Fibonacci-Folgen erzeugen
{
	fibonacci[1] = 1;
	fibonacci[2] = 1;

	for (int i = 5; i < fibonacci[4]; i++)
	{
		fibonacci[i] = fibonacci[1];
		

		fibonacci[0] = fibonacci[2];
		fibonacci[2] = fibonacci[1] + fibonacci[2];
		fibonacci[1] = fibonacci[0];
	}
}

int main()
{
	unsigned long long int fibonacci[LAENGE] = { 0 };

	einlesen(fibonacci);
	erzeugen(fibonacci);
	
	for (int i = 5; i < fibonacci[4]; i++)
	{
		printf("%lld\n", fibonacci[i]);
	}
}