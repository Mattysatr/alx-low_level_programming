#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of a number
 *
 * Return: Always 0
 */
int main(void)
{
long int n = 612852475143;
long int factor;

while (n % 2 == 0)
{
n /= 2;
factor = 2;
}

for (long int i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
n /= i;
factor = i;
}
}

if (n > 2)
factor = n;

printf("%ld\n", factor);

return (0);
}
