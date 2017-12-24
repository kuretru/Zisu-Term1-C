#include <stdio.h>

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c), a || b || c)
    {
        if (a > b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        if (a > c)
        {
            int tmp = a;
            a = c;
            c = tmp;
        }
        if (b > c)
        {
            int tmp = b;
            b = c;
            c = tmp;
        }
        if (a * a + b * b == c * c)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
