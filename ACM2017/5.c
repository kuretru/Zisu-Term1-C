#include <stdio.h>
#include <string.h>
char names[1000][20];
int star[1000];
int index[1000];
int cmp(int x, int y)
{
    if (star[index[x]] != star[index[y]])
        return star[index[x]] < star[index[y]];
    else
    {
        int result = strcmp(names[index[x]], names[index[y]]);
        if (result == 1)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int count;
    scanf("%d\n", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%s %d", names[i], &star[i]);
        index[i] = i;
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (cmp(j, j + 1))
            {
                int tmp = index[j];
                index[j] = index[j + 1];
                index[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < count; i++)
        printf("%s %d\n", names[index[i]], star[index[i]]);
    return 0;
}
