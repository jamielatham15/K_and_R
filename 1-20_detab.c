#include <stdio.h>
#define TABSIZE 4
#define MAXLINE 1000

int getmyline(char line[], int lim);
int detab(char line[]);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getmyline(line, MAXLINE)) > 0)
    {
        detab(line);
        printf("%s", line);
    }
}

int getmyline(char line[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

int detab(char line[])
{

    int i, j;
    char result[MAXLINE];

    i = 0;
    while (line[i] != '\n')
    {
        if (line[i] == '\t')
        {
            j = 0;
            while (j < TABSIZE)
            {
                line[i] = ' ';
                ++j;
                ++i;
            }
        }
        else
        {
            result[i] = line[i];
            ++i;
        }
    }
}