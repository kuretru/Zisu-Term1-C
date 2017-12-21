#include <stdio.h>

void move(int index, char sour, char tmp, char dest)
{
    if (index > 1)
        move(index - 1, sour, dest, tmp);
    printf("%d %c->%c\n", index, sour, dest);
    if (index > 1)
        move(index - 1, tmp, sour, dest);
}

int main()
{
    int n;
    scanf("%d", &n);
    move(n, 'a', 'b', 'c');
    return 0;
}
