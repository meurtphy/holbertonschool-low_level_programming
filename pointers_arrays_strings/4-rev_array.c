#include <stdio.h>
#include "main.h"
/**
* print_array - print an array of integers
* @a: an array of integers
* @n: the number of elements to swap
*
* Return: nothing.
*/
void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int bebemouche;
while (i < j)
{
bebemouche = a[i];
a[i] = a[j];
a[j] = bebemouche;
i++;
j--;
}
}
