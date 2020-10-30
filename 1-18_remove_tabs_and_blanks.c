#include <stdio.h>
#define MAXLINE 1000 // Max input line size

int getmyline(char line[], int maxline); // declare function prototypes. 
void copy(char to[], char from[]);
int myremove(char l[]);
// print longest input line

int main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while (getmyline(line, MAXLINE) > 0) {
        if (myremove(line) > 0)
            printf("%s", line);
    }
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

int myremove(char l[])
{
    int  c, i;

    i = 0;
    while (l[i] !='\n')
        ++i;
    --i;

    while (i >=0 && (l[i] == ' ' || l[i] ==  '\t'))
        --i; // on encoutering a whitespace or tab, move backwards to the end of the line

    if (i > 0) { // is it a non-blank line
        ++i; // move forward a single position
        l[i] = '\n';
        ++i;
        l[i] = '\0';
    }
    return i;
}