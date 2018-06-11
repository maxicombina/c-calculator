# A simple calculator written in C

### RATIONALE:
I did this implementaion because I did not find a nice implemenation of a "full formula" calculator online: I only found simple examples that support only one operator.
This implementation supports full formulas (limited only by the size of the stack and the queue).

### FEATURES / KNOWN ISSUES
Accepts the following operators:
 * +: sum
 * -: sub
 * *: multiplication
 * /: division
 * %: modulus
 * ^: exponentiation
 * (): used to change default precedence

Current implementation is a Proof of Concept, aiming at keeping the code clear.
As such, it has very strong limitations:

 * Only integer artihmetic supported
 * Stack and Queue used are limited in capacity (hardcoded value)
 * It accepts some expressions like "()1+1", whereas tools like "bc" reject those
 * Error messages can be improved
 * Input parser does not recognize negative numbers. However, easy workaround is to write "(0-1)" instead of "-1"
 * Acually, it does not support any unary operator (-, +, ! ...). Adding support is tricky and error-prone
   * For instance, if we accept "~" as the unary minus, expressions like "\~1" and "1\~" would both produce "-1"
   * To avoid this more logic needs to be added, and this is beyond the scope of this project
 * In order to add correct support for unary operators, a grammar definition and parser should be used (think of lex + yacc)


### HOW TO USE IT:
Compile and run:
./calculator "expression".

You can use quotes if your expression contains spaces or parenthesis.
Alternatively, you can avoid spaces and scape parenthesis.

EXAMPLES:
```
./calculator 1+1+2-3
result: 1

./calculator 16/2/2
result: 4

./calculator 16/\(2/2\)
result: 16

./calculator " 1 + 2 * (3 - 5) * 6"
result: -23

./calculator "16/(2/2)"
result: 16

/calculator "16 % 2 % 1"
result: 0

./calculator "16 % (2 % 1)"
Modulo by zero

./calculator "2^3"
result: 8
```


### BUILDING

#### To import into Eclipse CDT:

* File -> New -> Project...
* Under C/C++ choose "C Project"
* Select a Project name
  * Ensure that the "Use default location" option is not selected because here you need to specify where the resources reside in the file system, in a location other than your workspace.
* Select an appropriate Toolchain such as Executable / Linux GCC.
* Include the math library for linking ("-lm")

#### Manual build
Compile and link using gcc, remember to link with "-lm". Makefile is left as an excercise to the reader.
