#include <string>

//Template type
template<typename T>
struct MyArray {
    //Memory created in the constructor must be deleted in the destructor
    MyArray(int length) : length(length), data(new T[length]) {

    }
    MyArray() {
        length = 0;
        data = nullptr;
    }
    MyArray(const MyArray &other) {
        length = other.length;
        data = new T[length];
        for (int i = 0; i < length; i++) {
            data[i] = other.data[i];
        }
    }
    ~MyArray() {
        delete[] data;
    }
    
    //Static functions
    static size_t maxSize();
    static int someNumber() {
        return 5;
    }
    static int maxLength() {
        return maxSize() / sizeof(T);
    }

    //Member functions
    void set(int index, T value) {
        if (index >= 0 && index < length) {
            data[index] = value;
        }
    }
    T get(int index) {
        if (index >= 0 && index < length) {
            return data[index];
        }
        return T();
    }

    int length;
    T *data;
};

//Implement function outside of class
template<typename T>
size_t MyArray<T>::maxSize() {
    return sizeof(size_t) * 8 * sizeof(T);
}

//Define your own types
using MyIntArray = MyArray<int>;
typedef MyArray<int> intArray;

template<typename T>
void doWithArray(T array) { //Value
    //Without the copy constructor, this will cause a double delete when the function ends and the parameter is destroyed
}

template<typename T>
void doWithArray(T *array) { //Pointer
    //Avoids the double delete, but the parameter could be null
}

template<typename T>
void doWithArray(T &array) { //Reference
    //Avoids the double delete and the null pointer, but we can't pass a pointer
    //Passes the reference to the original object, similar to a pointer
}

template<typename T>
void oneValueType(T value) {
    //Uses a copy constructor, values passed are not changed
}

void noTemplateRequired(intArray array) {

}

int main() {
    double regularArray[10];

    //This is how you get the length of an array. Length is not stored in real arrays.
    int length = sizeof(regularArray) / sizeof(double);

    //This becomes a problem when you pass an array as a pointer
    int length = sizeof(&regularArray[0]) / sizeof(double); //Undefined behavior

    //Just make sure to have a length variable
    int length = 10;
    MyIntArray myIntArray[length]; //This is a variable length array. Which is not standard C++ but is supported by some compilers
    


    MyArray<double> myDoubleArray;
    MyArray<double> &myArrayRef = myDoubleArray;

    {
        intArray myIntArray(5);
        noTemplateRequired(myIntArray);
        doWithArray(myIntArray); //Ambiguous overload
        doWithArray(&myIntArray); //One pointer overload
        oneValueType(myIntArray);
    }

    doWithArray(&myDoubleArray);
    doWithArray(myArrayRef); //Ambiguous overload
    oneValueType(myDoubleArray);

    MyIntArray myIntArray2(50);
    {
        //Has variables from parent scope
        for (int i = 0; i < myIntArray2.length; i++) {
            //Index array
            myIntArray2.data[i] = i;
        }
    }

    {
        //Only difference is whether or not the value is passed to a new variable (like in a function)
        //However a function does not have access to whatever the parent scope is
        MyIntArray myIntArray3 = myIntArray2;
    }

    doWithArray(&myIntArray2);

    //You can define types in a scope
    typedef MyArray<char> StringImpl;
    StringImpl myString(20);
    myString.data = "Hello World!";

    char c_string[] = "World, Hello!";
    myString.data = (char*)&c_string[0]; //Warning: This is a pointer to a local variable

    using namespace std;

    //String is already implemented by the standard library, it just needs to be included
    string stl_string = "Hello World!";

    //Proper namespace usage when you omit the using directive
    std::string stl_string2 = "Hello World!";
}