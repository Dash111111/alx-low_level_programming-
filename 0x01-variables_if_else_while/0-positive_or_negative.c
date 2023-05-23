#include <stdlib.h>
#include <time.h>
/*
 * main - Determine if a random number is a positive, negiative or zero.
 *
 * Return: o on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	else if (n > 0)
		printf("%d is %s\n", n, "positive");
	else
		printf("%d is %d\n", n, "zero");
	return (0);
}
