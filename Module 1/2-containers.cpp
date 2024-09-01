class MyForwardDeclaredClass;

class MyClass;
struct MyStruct;

class MyClass {
    public:
    
    MyClass() {
        data = 0;
    }

    int data;
};

struct MyStruct {
    MyStruct() {
        data = 0;
    }

    int data;
};


int main() {
    MyClass myClass;
    MyStruct myStruct;

    myClass.data = 5;

    myClass = MyClass();
}