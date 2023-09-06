#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to help count the number of words present
 * @s: string evaluation
 *
 * Return: word number count
 */
int count_word(char *s)
{
int flag, a, b;

flag = 0;
b = 0;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
b++;
}
}

return (b);
}
/**
 * **strtow - splits strings into words
 * @str: string split
 *
 * Return: pointer to a strings array (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, d = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (d)
{
end = i;
	
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - d;
k++;
c = 0;
}
}
else if (d++ == 0)
start = i;
}

matrix[k] = NULL;

return (matrix);
}
