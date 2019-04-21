#include <cmath>
#include "../include/Functions.h"

bool solve (double a, double b, double c, double &x1, double &x2) {
	double ruutjuureAll = sqrt(pow(b,2) - 4 * a * c);
	if (ruutjuureAll < 0){
		return false;
	}
	x1 = ((0-b) + ruutjuureAll) / (2*a);
	x2 = ((0-b) - ruutjuureAll) / (2*a);
	return true;
}
