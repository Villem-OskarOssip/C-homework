/*  See funktsioon tagastab kahe sisendi miinimumi
CPP failis on funktsiooni keha. */ 
#include "functions.h"  /* Kui funktsioon kasutab teist, peab teise */ 
			/* deklaratsioon sellele eelnema. */ 

#include<cmath>
#include <stdlib.h>     /* abs */
#include <math.h>       /* pow */

long minimum (long a, long b) { 
    if (a > b) return b; 
    else return a; 
};

long maximum (long a, long b) {
	if (a > b) return a;
	else return b;
};

long product (long a, long b) {
	return a * b;
};

long gcd (long a, long b) {
	if ((a == 0) || (b == 0)) return 0;
    while ( b != 0) {
        unsigned r = a % b;
        a = b;
        b = r;
    } return a;
};

long power (long a, long b) {
	double vaste = pow(a, b);
    //floor ja ceil idee sain kursakaaslaselt
	if (floor(vaste) == ceil(vaste)) {
		return lround(vaste);
	}
	else return 0;
};
