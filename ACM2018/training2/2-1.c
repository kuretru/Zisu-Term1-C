#include <stdio.h>
int number[21], n, r;
void DFS(int index, int start)
{
    if (index == r)
    {
        for (int i = 0; i < r; i++)
            printf("%d%c", number[i], i != r - 1 ? ' ' : '\n');
        return;
    }
    for (int i = start; i <= n; i++)
    {
        number[index] = i;
        DFS(index + 1, i + 1);
    }
}
int main()
{
    number[0] = 1;
    scanf("%d %d", &n, &r);
    DFS(0, 1);
    return 0;
}
