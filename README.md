# Armstrong_number
It is a c program to find whether a given number is armstrong number or not.

PROGRAM DESCRIPTION
The program starts by including necessary header files stdio.h for input/output functions .
The main function begins by declaring variables: num to store the input number, Check to store a copy of the input number, rem to store the remainder of each digit, result to store the sum of digits raised to the power of n, and n to store the number of digits.
The user is prompted to input an integer using scanf.
The program then calculates the number of digits in the input number by repeatedly dividing originalNumber by 10 and incrementing n.
The program resets originalNumber to the input number for the next calculation.
Using a loop, the program calculates the sum of digits raised to the power of n. It extracts the last digit (remainder) using the modulus operator % and then adds the digit raised to the power of n to the result.
Finally, the program checks if result is equal to the original number. If they are equal, it prints that the number is an Armstrong number; otherwise, it prints that the number is not an Armstrong number.
The program concludes by returning 0, indicating successful execution.
