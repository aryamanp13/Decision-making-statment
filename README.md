# Aim:
To study and implement C++ decision making statements

## Theory:
If-else:An if-else statement is a fundamental control flow structure in programming that allows you to execute different code blocks based on whether a specified condition is true or false.

Switch-case:A switch case statement is a control flow structure that allows you to execute different code blocks based on the value of an expression. It's often used as an alternative to multiple if-else statements when you have several possible values for an expression and you want to perform different actions for each value.

## Algorithm(for 5d):

1.Start

2.Declare variables:
choice: Integer to store the user's choice of operation.
a, b: Integers to store the two input numbers.
x, y, z, q: Integers to store the results of calculations.

3.Display menu:
Print options for addition, subtraction, multiplication, and division.

4.Read user choice:
Input the user's choice and store it in choice.
Input numbers:

5.Prompt the user to enter the first number and store it in a.

6.Prompt the user to enter the second number and store it in b.

7.Perform operation based on choice:

Use a switch statement to handle different choices:
Case 1 (Addition):

Case 2 (Subtraction):

Case 3 (Multiplication):

Case 4 (Division):
Check if b is zero:
If b is zero, print a "Divide by zero error" message.
Otherwise, calculate q = a / b and print the quotient q.

8.Default case:
Print an error message for invalid input.

9.End
