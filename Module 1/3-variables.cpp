int main() {
    int num = 'O'; // implicit conversion from char literal to int

    char letter = 'a'; // char literal assignment to a char variable
    char *string = "Hello world"; // string literal assignment to a char pointer

    string[1] = letter;
    string[4] = num;

    letter = string[0];

    num = 23409;
    num = 0x1234;
    num = 0123;
    num = 0b01010101;

    float decimal = 3.14f;
    decimal = decimal + num;
    decimal += num;

    decimal += (int)letter;

    // auto type deduction, 'dynamic' typing
    auto var1 = 3.14f; // explicit literal of type float
    auto var2 = 3.14; // implicit literal of an unknown type until compile time


    /*
    
    Below is some more exposure to pointers which have their own casting

    void* is how we dynamically type in C and carries over to C++
    
    */

    // & operator gets the address or pointer type of a variable
    int *pNum = &num;
    float *pDecimal = &decimal;
    
    void *ptr = nullptr;

    // All pointers can be assigned to void pointers without casting
    ptr = &num; 
    ptr = &letter;
    ptr = pNum;

    // void pointers must be cast before dereferencing
    *ptr = 5; // ptr can never be dereferenced directly
    *(int*)ptr = 5; // ptr -> (int*) -> dereference
    *(float*)ptr = 5; // 5 -> 5.0f, ptr -> (float*) -> dereference

    // Dereferencing pointers make them reference types of that type with data at the pointer
    *pNum = 5; // assignment of value type to dereference
    decimal = *pNum; // dereference becomes a value of int and implicitly converted to float
    decimal = *(float*)ptr; // ptr can be null or not float*

    // Pointers are usually not reinterpreted during a cast which can invalidate data
    pNum = pDecimal; // float* to int* is not a valid cast
    pNum = (int*)pDecimal; // explicit cast to int* is valid, but the data is not valid

    // Derefenced pointers become reference types that can be reinterpreted when cast to a value type
    num = *pDecimal;

    return num;
}