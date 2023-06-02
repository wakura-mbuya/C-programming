#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/**
 * main - count lines, words, and characters in input
 * Return: 0
 */
int main(void)
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("Lines : %d\n", nl);
	printf("Words : %d\n", nw);
	printf("Characters : %d\n", nc);

	return (0);
}
