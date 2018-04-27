#include <stdio.h>
int used[10], number[9];
void DFS(int index)
{
    if (index == used[0])
    {
        for (int i = 0; i < used[0]; i++)
            printf("%d ", number[i]);
        putchar('\n');
        return;
    }
    for (int i = 1; i <= used[0]; i++)
    {
        if (!used[i])
        {
            used[i] = 1;
            number[index] = i;
            DFS(index + 1);
            used[i] = 0;
        }
    }
}
int main()
{
    scanf("%d", &used[0]);
    DFS(0);
    return 0;
}
