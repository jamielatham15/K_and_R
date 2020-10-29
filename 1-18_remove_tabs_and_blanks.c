#include <stdio.h>
#define MAXLINE 1000

int process_line(char line[], int lim);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = process_line(line, MAXLINE)) > 0)
        if (line[1] != '\n')
            printf("%s", line);
}

int process_line(char line[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        //  for i less than the max size of the line minus 1
        //  increment i such that the character c is not the end
        //  of the file nor a new line
        if (c != '\t')
            line[i] = c;
        else
            --i;
    }

    if (c == '\n')
    {
        // if we encounter a new line, add the final character
        // to the array
        line[i] = c;
        ++i;
    }

    // append a null character to mark the end of the line

    line[i] = '\0';

    return i;
}