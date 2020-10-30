#include <stdio.h>
#define MAXLINE 1000 // Max input line size

int getmyline(char line[], int maxline); // declare function prototypes. 
void copy(char to[], char from[]);

// print longest input line

int main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = getmyline(line, MAXLINE)) > 0) {
        printf("%d, %s", len, line);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

// read a line and return its length
int getmyline(char s[], int lim)
{
    int c, i, j;
    
    j = 0;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
        if (i < lim-2) {
            s[j] = c;
            ++j;
        }
    if (c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}

// copy 'from' into 'to'; assume it is big enough
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}