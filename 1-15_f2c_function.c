#include <stdio.h>

double convert(int f);

int main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, convert(fahr));
}

double convert(int f)
{
    return (5.0 / 9.0) * (f - 32);
}