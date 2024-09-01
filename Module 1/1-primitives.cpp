int main() {
    //number 5
    int number;

    //character "a"
    char character;

    //string "Hello World"
    char *string;

    //boolean true
    bool boolean;

    //floating point or decimal 3.14
    float decimal;


    //More numbers
    char _8bits; // -128 to 127
    short _16bits; // -32,768 to 32,767
    int _32bits; // -2,147,483,648 to 2,147,483,647
    long _64bits; // -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    long long _128bits; // -2^63 to 2^63-1

    //More floating point numbers
    float _32bits_float; // 3.4E +/- 38 (7 digits)
    double _64bits_double; // 1.7E +/- 308 (15 digits)
    long double _80bits_double; // 1.1E +/- 4932 (19 digits)

    //Signed and unsigned
    unsigned int _32bits_unsigned; // 0 to 4,294,967,295
    signed int _32bits_signed; // -2,147,483,648 to 2,147,483,647

    //Similar types (same number of bits)
    bool _8bits_bool = 'a';
    char _8bits_char = 97;
    int _32bits_int = 'b';
    char _8bits_char_bool = false;
    bool _bool_false = 0;
}