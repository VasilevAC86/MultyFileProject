#include "Functions.h"

double sum(double num1, double num2) {
	return num1 + num2;
}

void range(int A, int B) {
	for (int i = A; i <= B; i++)
		std::cout << i << ' ';
	std::cout << std::endl;
}
