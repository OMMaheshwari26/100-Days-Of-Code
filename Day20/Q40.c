/*
Question Q40: Write a program to find the 1’s complement of a binary number and print it.

Official sample test cases:
Sample input: 1010\nSample output: 0101
Sample input: 1111\nSample output: 0000
*/

/* Question Q40 | Day 20 | Topic: Loops */

#include <stdio.h>

int main(void)
{
    char binary[1001];
    int index;

    if (scanf("%1000s", binary) != 1)
    {
        return 1;
    }

    for (index = 0; binary[index] != '\0'; index++)
    {
        if (binary[index] != '0' && binary[index] != '1')
        {
            puts("Invalid binary number");
            return 0;
        }
    }

    for (index = 0; binary[index] != '\0'; index++)
    {
        putchar(binary[index] == '0' ? '1' : '0');
    }
    putchar('\n');

    return 0;
}
