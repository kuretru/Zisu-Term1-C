#include <stdio.h>
#define N 100
void mystrcat(char s[], char t[])
{
    int i, j;
    i = 0;
    while (t[i++])
        ;
    j = 0, i -= 1;
    while (s[j])
        t[i++] = s[j++];
    t[i] = '\0';
    return;
}

int main()
{
    char s[N] = "string1";
    char t[N] = "string2";
    mystrcat(s, t);
    puts(t);
    return 0;
}
