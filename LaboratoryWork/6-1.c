#include <stdio.h>

float power(float base, int n)
{
    int i;
    float result = base;
    for (i = 0; i < n - 1; i++)
        result *= base;
    return result;
}

int main()
{
    int i, groups, n;
    float base;
    scanf("%d", &groups);
    for (i = 0; i < groups; i++)
    {
        scanf("%f %d", &base, &n);
        printf("%.2f\n", power(base, n));
    }
    return 0;
}
