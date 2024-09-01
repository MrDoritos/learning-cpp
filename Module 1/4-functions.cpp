class Box {
    public:
    //Constructors
    Box() {
        width = 0;
        height = 0;
    }
    Box(int w, int h)
    : width(w), height(h) {

    }
    int width, height;
    int getArea() {
        return width * height;
    }
};

//Function
int getNumber() {
    //Return
    return 5;
}

float getDecimal() {
    return 3.14;
}

int getSquare(int number) {
    return number * number;
}

//void
void doNothing() {
    return;
}

void doSomething() {
    getSquare(getNumber());
}

void doSomethingWithSomething(void* pointer) {
    *(char*)pointer = 0;
}

void doSomethingWithNothing(void) {
    return;
}


int main() {
    Box box;
    Box box2(5, 10);

    int number = getNumber();

    int area = box2.getArea();

    area = Box::getArea(); // Error
    area = Box::getArea(box); // Error
    area = box.getArea();
    
    int width = box2.width;
    width = box.width;
    width = Box.width; // Error

    //Scope
    {
        length = 0; // Error
        int length = width;
    }
    number = length; // Error

    int sq;

    sq = getSquare(5);
    sq = getSquare(getNumber());
    sq = getSquare(box.getArea());
    sq = getSquare(box.width);

    return sq;
}