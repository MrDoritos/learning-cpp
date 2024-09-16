# Variables

*Var*iables allow us to store *var*ying data. When we specify a variable in C++, we are specifying data of varying type, size, and value. Types are like primitives and containers, they describe what the data held by the variable is and what it can be used for. Our variables in C++ always have a type but we can cast or *convert* them to other types even if the underlying types are different.

```
type_name variable_name;

int a = 1;
int b = 2;
char c = 'a';

a = b;
a = c;
```

## Typing systems

Types and *typing* systems are an important aspect of any programming language. These are the general definitions of typing systems in any programming language:

Key Word|Description
---|---
Strong|The type of a variable is defined.
Weak|The type of a variable is not defined.
Dynamic|The type of a variable is not defined and will change.
Static|The type of a variable is defined and will not change.
Generic|The type of a variable is not defined but implied while maintaining type safety.

Typing systems are usually a combination of the above, each language is different and can represent a spectrum but these categories are the main dichotomies for type systems.

## C++ Typing

C++ is very flexible which makes defining its typing system difficult. Despite this it is still easy to understand.

As a broad definition, C++ is statically typed with strong typing and allows generic typing when specified.

The C++ compiler will know the type of a variable when the program is compiled even if it is not explicitly defined in the source code which means that all variables are eventually statically typed. The compiler only understands static typing. 

`auto` is a keyword that is used to tell the compiler to infer the type of a variable which can give the illusion of dynamic typing even though `auto` is the type and the variable's type cannot change from the initial type assigned to an `auto` variable.

```
auto a = 1; //a can be long, int, short, char
auto b = 1.0; //b can be float, double, long double
auto c = (int)1; //c will be int
auto d = std::chrono::system_clock::now(); //d will be std::chrono::time_point<std::chrono::system_clock> and we avoided extra typing
void *e; //e can be any pointer type
```

C++ is strongly typed because two variables of different types cannot be assigned to each other without an explicit cast or a defined implicit cast.

C++ is weakly typed in comparison to Java which would not allow adding a `char` and `int` without explicitly casting between the types. Java only allows character literals and other chars to be assigned to `char` variables. C++ allows this and will implicitly cast between types. This is because the actual data of the variable is the same regardless of what the intended interpretation of the data is.

An implicit cast means we do not need to write a conversion of types. An explicit cast means we do write the conversion.

```
C++:
int i; char c = 'a';

i = c; //Implicit
i = (int)c; //Explicit
i = int(c); //Explicit

i = std::static_cast<int>(c); //Explicit C++ style cast
```

```
Java:
char c = 'a';
int i = c; //Error (Implicit cast which fails)
int i = (int)c; //OK (Explicit cast)

C++:
char c = 'a';
int i = c; //OK (Implicit cast)
int i = (int)c; //OK (Explicit cast)
```

Containers will be able to specify their own implicit and explicit casts which we will learn later on that can make some programs hard to interpret. Their data flow can be a source of bugs.

Pointers introduce different typing rules because they only refer to a memory address. Pointers still have a type but all pointers serve the same purpose which is to point to a memory address. They can be cast to each other using explicit casts but the data they represent is not reinterpreted. This allows `void*` to be used to represent a pointer of any type. `void*` can't be dereferenced without a cast to a specific type. This how C can be used to write generic code.

Generic typing in C++ will be covered later.