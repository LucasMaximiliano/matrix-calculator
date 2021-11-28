#include "util.h"

// Elementare Zeilenoperationen
void zeilen_tauschen(int z1, int z2) {
		double temp1 = 0.0; 
		temp11 = M[z1][0];
		double temp2 = 0.0;
		temp12 = M[z1][1];
		
		M[z1][0] = M[z2][0];
		M[z2][0] = temp1;
			
		M[z1][1] = M[z2][1];
		M[z2][1] = temp2;
	}