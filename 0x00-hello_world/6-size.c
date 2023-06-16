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
    printf("Size of an int: %lu byte(s)\n", sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", sizeof(float));

    return 0;
}
