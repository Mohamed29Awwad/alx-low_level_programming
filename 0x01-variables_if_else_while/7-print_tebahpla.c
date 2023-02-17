#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	char low=0;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');

	return (0);
}
