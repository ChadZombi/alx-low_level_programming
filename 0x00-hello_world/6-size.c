#include <stdio.h>

/**
 * main - Entry point of the programme
 *
 * This function uses printf to print a list
 * of the size of various types 
 * on the computer it is run and compiled on
 *
 * Return: always 0 to show success
 */ 

int main() {
    printf("Size of a char: %lu byte(s)\n", sizeof(char));
    printf("Size of an unsigned char: %lu byte(s)\n", sizeof(unsigned char));
    printf("Size of a short: %lu byte(s)\n", sizeof(short));
    printf("Size of an unsigned short: %lu byte(s)\n", sizeof(unsigned short));
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of an unsigned int: %lu byte(s)\n", sizeof(unsigned int));
    printf("Size of a long: %lu byte(s)\n", sizeof(long));
    printf("Size of an unsigned long: %lu byte(s)\n", sizeof(unsigned long));
    printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of an unsigned long long: %lu byte(s)\n", sizeof(unsigned long long));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));
    printf("Size of a double: %lu byte(s)\n", sizeof(double));
    printf("Size of a long double: %lu byte(s)\n", sizeof(long double));

    return 0;
}
