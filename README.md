The project will be about a calculator that does the following operations,
er file (calculator.h) containing function declarations for:
Addition of two numbers
Subtraction of two numbers
Multiplication of two numbers
Division of two numbers
Factorial calculation
Greatest Common Divisor (GCD) calculation
Least Common Multiple (LCM) calculation
Random number generation (within a range)
Evaluating Mathematical expression.
In addition to that, the calculator can take mathematical expressions to evaluate
................
How to build that library:
first create two files .h and .cpp.
Secondly, declare the necessary functions in calculator.h and define it . calculator.cpp.
For the implementation, the trivial ones are presented for the first four. 
The fifth function for the factorial uses recursion.
The GCD function uses Euclid's algorithm, and the LCM function uses GCD function in it.
The random number function uses rand() and srand() functions.
The mathematical expression function uses the Shunting Yard Algorithm by the STL functions stack and queue.
//Note: the program gives an error if a wrong expression is given.
Make a test.cpp to test the functions.