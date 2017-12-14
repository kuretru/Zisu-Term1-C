#include <stdio.h>
int sum(int m, int n)
{
    int i, result = 0;
    for (i = m; i <= n; i++)
        result += i;
    return result;
}

int main()
{
    int i, groups, m, n;
    scanf("%d", &groups);
    for (i = 0; i < groups; i++)
    {
        scanf("%d %d", &m, &n);
        printf("%d\n", sum(m, n));
    }
    return 0;
}
