#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned long checksum(char *s)
{
unsigned long sum = 0;
while (*s != 0)
{
	sum += *s;
	s++;
}
return (sum);
}
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	unsigned long sum;
	int i, flag = 0;

	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = alpha[rand() % (sizeof(alpha) - 1)];
		}
		sum = checksum(s);
		if (sum == 2772)
		{
			flag = 1;
			printf("%s", s);
		}
	}
return (0);
}
