#include <stdio.h>
#define MAXLINE 1000 // Max input line size

int getmyline(char line[], int maxline); // declare function prototypes. 
int reverse(char l[]);
// print longest input line

int main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while (getmyline(line, MAXLINE) > 0) {
            reverse(line);
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

int reverse(char l[])
{
    int  j, i;
    char rev[MAXLINE], tmp;

    i = 0;
    while (l[i] !='\n')
        ++i;
    --i;

    while (i >=0 && (l[i] == ' ' || l[i] ==  '\t'))
        --i; // on encoutering a whitespace or tab, move backwards to the end of the line

    j = 0;
    while (i>j) {
        tmp = l[j];
        l[j] = l[i];
        l[i] = tmp;
        ++j;
        --i;
    }

    return i;
}