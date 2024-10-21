#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Description: Generates a random number and prints whether it's
* positive, negative, or zero.
* Return: Always 0 (Success)
*/

int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_digit = n % 10;
if (n > 5)
{
printf("the last digit of %d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("the last digit of %d is %d and is 0\n", n, last_digit);
}
else
{
printf("the last digit of %d and is less than 6 and not 0\n", n, last_digit);
}

return (0);
}
