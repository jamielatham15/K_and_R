#include <stdio.h>

int main()
{
	int c, bl, tb, nl;

	bl = tb = nl = 0;

	while ((c = getchar()) != EOF)
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tb;
	        if (c =='\n')
		        ++nl;

	printf("blanks %d\n", bl);
	printf("tabs %d\n", tb);
	printf("new lines %d\n", bl);
}
