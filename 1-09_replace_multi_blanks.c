#include <stdio.h>

int main()
{
	int c, multi;

	multi = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (multi == 0)
			{
				putchar(c);
				multi = 1;
			}
		}
		if (c != ' ')
		{
			putchar(c);
			multi = 0;
		}
	}
}
