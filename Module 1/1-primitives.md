
# Primitives

Primitives are the first thing you will encounter when you begin programming, from the first variable you use or the return type on main. Primitives and other basic data types are important in a language because it defines the size of and how the data is represented. The definitions of the primitives may stay the same across compilers, libraries, and platforms, but not always.

Primitive|Data|Minimum Value|Maximum Value
---|---|---|---|---
`int`|signed 32 bits, 4 bytes total|-2,147,483,648|2,147,483,647
`long`|signed 64 bits, 8 bytes total|-9,223,372,036,854,775,808|9,223,372,036,854,775,807
`long long`|signed 128 bits, 16 bytes total|-2^63|2^63-1
`short`|signed 16 bits, 2 bytes total|-32,768|32,767
`char`|signed 8 bits, 1 byte total|-128|127
`bool`|signed 8 bits, 1 byte total|-128|127
`float`|32 bits|3.4E +/- 38 (7 digit precision)|
`double`|64 bits|1.7E +/- 308 (15 digit precision)|
`void`|placeholder| |
`size_t`|Pointer size, on a 64 bit system, it's 64 bits| |
`void*`|Pointer size, should be same as size_t| |
`char*`|C string| |

These are some of the primitives you may encounter. Using `int` and `float` are very common. Only use `float` where you do not need values to be completely the same. Due to your error or floating point math you may not get expected values due to rounding errors.

Some examples

Data|Primitive
--|--
Player position|`float`
Loop iterator|`int`
Keyboard character|`char`
`True` or `False`|`bool`

`char` can be used interchangeably with `byte`, as they are the same primitive type. Eventually you will see how defining your own types still means they represent the same data even if they use a different name.

You will also see some programs use `True` or `False` or the numbers `1` or `0`. They are the same value. You will see them sometimes assigned to `bool` or `char`. Even though `bool` is supposed to have 2 values, you can still assign data to it from `char`.
