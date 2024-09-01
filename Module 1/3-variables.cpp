int main() {
    int num = 'O';

    char letter = 'a';
    char *string = "Hello world";

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

    return num;
}