Readability
This is the fifth project of the CS50x course.
The goal is to create a program that calculates the approximate reading grade level of a given text using the Coleman-Liau index.

This version is implemented in plain C and does not use the CS50 library, so it can be compiled and run with any standard C compiler.

What it does
- Prompts the user to input a text
- Counts letters, words, and sentences in the text
- Calculates the Coleman-Liau index to estimate reading grade level
- Prints the grade level, or “Before Grade 1” if below grade 1, or “Grade 16+” if 16 or above

How to use

- Compile the code with gcc -o readability readability.c -lm
- Run the program with ./readability
- Enter the text when prompted

About
This project helps practice working with strings, character functions, arithmetic operations, and control flow in C.

CS50x — Introduction to Computer Science by Harvard University
Project by Davi Teodoro

