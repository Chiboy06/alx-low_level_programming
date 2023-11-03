#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_args - checks if the number of arguments is correct.
 *
 * @argc: the number of arguments.
 *
 * Return: 1 if the number of arguments is correct, 0 otherwise.
 */
int check_args(int argc)
{
    /* Check if the number of arguments is correct. */
    if (argc != 3) {
        printf("Error\n");
        return 0;
    }

    return 1;
}

/**
 * check_nums - checks if the numbers are positive and composed of digits only.
 *
 * @num1: the first number.
 * @num2: the second number.
 *
 * Return: 1 if the numbers are positive and composed of digits only, 0 otherwise.
 */
int check_nums(char *num1, char *num2)
{
    int i;

    /* Check if the numbers are positive. */
    if (num1[0] == '-' || num2[0] == '-') {
        printf("Error\n");
        return 0;
    }

    /* Check if the numbers are composed of digits only. */
    for (i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            return 0;
        }
    }

    for (i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            return 0;
        }
    }

    return 1;
}

/**
 * multiply - multiplies two numbers.
 *
 * @num1: the first number.
 * @num2: the second number.
 *
 * Return: the product of the two numbers.
 */
int multiply(int num1, int num2)
{
    return num1 * num2;
}

int main(int argc, char **argv)
{
    int num1;
    int num2;
    int product;

    /* Check if the number of arguments is correct. */
    if (!check_args(argc)) {
        exit(98);
    }

    /* Get the numbers from the command line arguments. */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Check if the numbers are positive and composed of digits only. */
    if (!check_nums(argv[1], argv[2])) {
        exit(98);
    }

    /* Multiply the numbers. */
    product = multiply(num1, num2);

    /* Print the result. */
    printf("%d\n", product);

    return 0;
}

