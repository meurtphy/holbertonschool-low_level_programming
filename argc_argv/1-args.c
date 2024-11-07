#include <stdio.h>
#include "main.h"
/**
 * 
 * 
 * 
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
int i;
printf ("%d\n",argc);
for (i=0; i < argc; i++)
{

    printf("%s", *argv[i]);
}

    return(0);
}