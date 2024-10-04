#include <stdio.h>

struct Square {
	Square(float side) {
		this->side = side;
	}

	float getArea() {
		return side * side;
	}

	float side;
};

int main() {
	Square square(10.0f);
	printf("%f\n", square.getArea());
	return 0;
}
