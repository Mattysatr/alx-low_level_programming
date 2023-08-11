#include <stdio.h>

/**
* main - prints the alphabets lowercase, and then in uppercase,
* followed by anew line
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
purchar('\n');
return (0);
}
