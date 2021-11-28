// Dieses Programm soll LGS nach den Gauß-Jordan
// Verfahren losen.

#include <stdio.h>

int main()
{
	// V.1: Es soll eine 2x2 Matrix gelöst werden.
	
	printf("\nGeben Sie die Koeffizienten der Reihe nach fuer jede Zeile der Matrix ein: \n");
	
	// Die Variablen für den Koeffizienten werden 
	// deklariert und initializiert.
	
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	
	// Die Werte für die Variablen werden eingelesen.
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	
	// Die Matrix wird kreiert und initializiert.
	
	double M[2][2] = {{a, b},	// Sei M[i][j].
					  {c, d}};	// i: Zeile, j: Spalte
	
	// TEST ======================================================
	printf("\nInitialisierung: \n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("\n%lf", M[i][j]);
		}
	}
	printf("\n");
	// ===========================================================
	
	// zeilen_tauschen(); <-- wird noch bearbeitet
	
	// Falls das Element mit Index 00 Null ist, sollen
	// die Zeilen getauscht werden.
	
	if(M[0][0] == 0) {
		zeilen_tauschen();
	}
	
	// TEST ======================================================
	printf("\nZeilen tauschen: \n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("\n%lf", M[i][j]);
		}
	}
	printf("\n");
	// ===========================================================
	
	// Eine weitere ELZ ist die Multiplikation mit
	// Skalaren.
	
	void mit_skalar_multiplizieren(double skalar) {
		for(int i = 0; i < 2; i++) {
			M[0][i] = M[0][i] * skalar;
		}
	}
	
	// Der führende Eins der ertsen Zeile wird erzeugt.
	
	mit_skalar_multiplizieren( (1/M[0][0]) );
	
	// TEST ======================================================
	printf("\nSkalarmultiplikation: \n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("\n%lf", M[i][j]);
		}
	}
	printf("\n");
	// ===========================================================

	printf("\n");
	
	return 0;
}
