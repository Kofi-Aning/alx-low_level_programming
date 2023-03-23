#include "main.h"
/**
 *main - Entry point
 *Description: Print int if it is postive,negative or zero
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n)", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
