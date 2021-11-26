// Dieses Programm soll LGS nach den Gauß-Jordan verfahren losen

#include <stdio.h>

int main()
{
	// V.1: Es soll eine 2x2 Matrix gelöst werden.
	
	
	printf("Geben Sie die Koeffizienten der Reihe nach fuer jede Zeile der Matrix ein: ");
	
	double a = 0;							// Die Variablen für den Koeffizienten werden deklariert und initializiert.
	double b = 0;
	double c = 0;
	double d = 0;
	
	scanf("%lf", &a);						// Die Werte für die Variablen werden eingelesen.
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	
	double M[2][2] = {{a, b}, 
			  {c, d}};					// Die Matrix wird kreiert und initializiert.
	
	printf("\nDie eingestellte Matrix hat folgende Elemente: \n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("\n%lf", M[i][j]);
		}
	}
	
	// Die elementare Zeilenoperationen werden als Funktionen definiert.
	
	void zeilen_tauschen() {
		double temp11 = 0.0; 
		temp11 = M[0][0];
		double temp12 = 0.0;
		temp12 = M[0][1];
		
		M[0][0] = M[1][0];
		M[1][0] = temp11;
			
		M[0][1] = M[1][1];
		M[1][1] = temp12;
	}
	
	if(M[0][0] == 0) {						// Falls das Element mit Index 00 Null ist, sollen die Zeilen getauscht 
		zeilen_tauschen();					// werden.
	}
	
	printf("\nDie eingestellte Matrix hat folgende Elemente: \n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("\n%lf", M[i][j]);
		}
	}
	
	void mit_skalar_multiplizieren() {
		for(int i = 0; i < 2; i++) {
			M[0][i] = M[0][i] / M[0][0];			// !!! FUNKTION GEHT NICHT !!!
		}
	}
	
	mit_skalar_multiplizieren();					// Der führende Eins der ertsen Zeile wird erzeugt.
	
	printf("\nDie eingestellte Matrix hat folgende Elemente: \n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("\n%lf", M[i][j]);
		}
	}
	
	
	printf("\n");
	
	return 0;
}
