#include <stdio.h>

#define ALPHA 26

// only counts caps words
// need to substitute ASCII value for character

int main()
{
	int i = 0;
	int j = 0;
	int c = EOF;
	int char_freq[ALPHA + 1];

	for(i = 65; i <= 90; ++i) 
	{
		char_freq[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		++char_freq[c];
	}

	for ( i = 65; i <= 90; ++i ) 
	{
		printf("|%2d| ", i);
		for ( j = 0 ; j < char_freq[i]; ++j)
	putchar('*');
		
		putchar('\n');
	}

}