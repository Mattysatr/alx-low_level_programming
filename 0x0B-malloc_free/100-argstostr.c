#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concantenate entry
 * @ac: input
 * @av: Array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i, n, k = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
l += ac;

str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
str[k] = av[i][n];
k++;
}
if (str[k] == '\0')
{
str[k++] = '\n';
}
}
return (str);
}
