#include <stdio.h>
#include main.h
/**
* _isupper - Verifie si un caractere est en majuscule
* @c: Le caractere a verifer
*
*return 1 si c est en majuscule sinon, 0 sinon
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

