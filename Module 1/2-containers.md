# Containers

Containers allow you to have similar ideas, concepts, or variables to be stored in a single object. There are many different concepts that derive from containers, but that is the brief definition.

Containers are used in almost all programs larger than a single file with a function or two. I would say all of them, but functional[^1] and procedural[^2] programming exists which does allow a large program to be created without containers. We will return to programming paradigms later as they are not important to understand yet.

C++ has two types of containers you will see: `struct` and `class`. They are nearly identical except for the default visibility their contents. Visibility refers to who is able to access what from where in the program.

Visibility modifier|Goal
---|--
`public`|Accessed by anyone
`private`|Accessed only by the same object
`protected`|Objects that inherit protected objects are able to access them in the same object
`friend`|Member objects with friend can access protected and private members

`struct` has all members `public` by default, `class` has all members `private` by default. When focusing on rapid development, `struct` may be preferred, but it is up to personal preference and paradigm. `class` can be used later to hide member objects where their state should only be modified internally or by calling a function that gets and sets the value instead. Those are referred to as getters and setters.

C++ allows containers to have variables, functions, and inheritance, in addition to providing the ability to create generic objects which will be discussed later. This is in contrast to C which only allows `struct` with variables. That is why C++ is so much more powerful than C especially with zero-cost abstractions.

[^1]: Functional programming is a declarative type of programming style that treats computation as the evaluation of mathematical functions. https://deepsource.com/glossary/functional-programming

[^2]: Procedural programming is a programming paradigm built around the idea that programs are sequences of instructions to be executed. They focus heavily on splitting up programs into named sets of instructions called procedures, analogous to functions. https://deepsource.com/glossary/procedural-programming
