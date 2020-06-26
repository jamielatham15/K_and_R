#include <stdio.h>

int main()
{
	printf("press a key\n\n");
	printf("%d\n\n", getchar() != EOF);

	printf("the value of EOF is %d\n\n", EOF);
}
