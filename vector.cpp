#include <math.h>
#include "vector.h"

Vector::Vector(int i_comp, int j_comp, int k_comp) {
	i = i_comp;
	j = j_comp;
	k = k_comp;
	
}
int Vector::getMagnitude() {
	return pow(i*i + j*j + k*k, 0.5);
}

int Vector::get_i()
{
	return i;
}

int Vector::get_j() {
	return j;
}

int Vector::get_k() {
	return k;
}
