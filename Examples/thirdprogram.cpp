#include <stdio.h>

struct Polygon {
	virtual float getArea() = 0;
};

struct Rectangle : public Polygon {
	Rectangle(float x, float y) {
		this->x = x;
		this->y = y;
	}
	float getArea() override {
		return x * y;
	}
	float x,y;
};

struct Circle : public Polygon {
	Circle(float r) {
		this->r = r;
	}

	float getArea() override {
		return 3.14159f * r * r;
	}

	float r;
};

void printArea(Polygon *poly) {
	printf("%f\n", poly->getArea());
}

int main() {
	Polygon *poly = new Rectangle(5.0f,10.0f);
	poly = new Circle(5.0f);
	printArea(poly);
	return 0;
}
