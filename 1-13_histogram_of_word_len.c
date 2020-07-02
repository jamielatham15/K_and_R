#include <stdio.h>

#define MAXWORDLEN 10
#define IN 1
#define OUT 0

int main() {

int c = EOF;
int i = 0;
int j = 0;
int nchar[MAXWORDLEN + 1];
int state = IN;
int word_len = 0;

for(i = 0; i <= MAXWORDLEN; ++i) 
{
	nchar[i] = 0;
}


while ((c = getchar()) != EOF) 
{
	++word_len;

	if ( c == ' ' || c == '\t' || c == '\n' ) 
	{
		state = OUT;
		--word_len;
	}

	if ( state == OUT ) 
	{
		if(word_len != 0 && word_len <= MAXWORDLEN) 
			++nchar[word_len];
		
		state = IN;
		word_len = 0;
	}
	
}

	for ( i = 1; i <= MAXWORDLEN; ++i ) 
	{
		printf("|%2d| ", i);
		for ( j = 0 ; j < nchar[i]; ++j)
	putchar('*');
		
		putchar('\n');
	}

	return 0;
}
