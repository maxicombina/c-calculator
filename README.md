A simple calculator written in C.

Accepts the following operators:
 +: sum
 -: sub
 *: multiplication
 /: division
 %: modulus
 ^: power
 (): used to change precedence

Current implementation is a Proof of Concept, aiming at keeping the code clear.
As such, it has very strong limitations:

 * Only integer artihmetic supported
 * Stack and Queue used are limited in capacity (hardcoded value)
 * Input parser does not recognize negative numbers. However, easy workaround is to write "(0-1)" instead of "-1"
 * It accepts some expressions like "()1+1", whereas tools like "bc" reject those
 * Error messages can be improved

RATIONALE:
I did this implementaion because I did not find a nice implemenation of a "full formula" calculator online: I only found simple examples that support only one operator.
This implementation supports full formulas (limited only by the size of the stack and the queue).

HOW TO USE IT:
Compile and run:
./calculator "expression".

You can use quotes if your expression contains spaces or parenthesis.
Alternatively, you can avoid spaces and scape parenthesis.

EXAMPLES:
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

=============================
To import into Eclipse CDT:
=============================

File -> New -> Project...
Under C/C++ choose "C Project"
Select a Project name
Ensure that the "Use default location" option is not selected because here you need to specify where the resources reside in the file system, in a location other than your workspace.
Select an appropriate Toolchain such as Executable / Linux GCC.
