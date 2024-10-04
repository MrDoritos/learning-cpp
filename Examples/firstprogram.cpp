#include <stdio.h>

float square(float x) {
	return x * x;
}

int main() {
	float area = square(5);
	printf("%f\n", area);
	return 0;
}
