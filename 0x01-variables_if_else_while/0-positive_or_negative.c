#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* given a random number, the system show if is +,_, or 0 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);
	if (n > 0)
	{
	printf("is positive\n");
	}
	else
	{
		if (n == 0)
		{
		printf("is zero\n");
		}
		else
		{
		printf("is negative\n");
		}
	}
return (0);
}
