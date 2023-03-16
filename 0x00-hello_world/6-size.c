#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("The size of char is %d bytes\n", sizeof(char));
    printf("The size of int is %d bytes\n", sizeof(int));
    printf("The size of long is %d bytes\n", sizeof(long));
    printf("The size of long long is %d bytes\n", sizeof(long long));
    printf("The size of float is %d bytes\n", sizeof(float));
    return 0;
}
