#pragma once
class Vector {
public:
	Vector(int i_comp, int j_comp, int k_comp);
	int getMagnitude();
	int get_i();
	int get_j();
	int get_k();
private:
	int i;
	int j;
	int k;
};