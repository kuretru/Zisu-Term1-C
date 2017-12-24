#include <stdio.h>
struct node
{
    int parent;
    int value;
} tree[10000];
int tCount, max[3];
void addNode(int parent)
{
    for (int i = 0; i < 3; i++)
    {
        if (tree[parent].value > max[i])
        {
            for (int j = 1; j >= i;j--)
                max[j + 1] = max[j];
            max[i] = tree[parent].value;
            break;
        }
    }
    for (int i = 1; i < tCount; i++)
    {
        if (tree[i].parent == parent)
            addNode(i);
    }
}
int main()
{
    int questions, parent;
    while (scanf("%d", &tCount) != EOF)
    {
        tree[0].parent = -1;
        scanf("%d", &tree[0].value);
        for (int i = 1; i < tCount; i++)
            scanf("%d %d", &tree[i].parent, &tree[i].value);
        scanf("%d", &questions);
        while (questions--)
        {
            scanf("%d", &parent);
            for (int i = 0; i < 3; i++)
                max[i] = -1;
            addNode(parent);
            if (max[0] > -1 && max[1] > -1 && max[2] > -1)
                printf("%d %d %d\n", max[0], max[1], max[2]);
            else
                printf("-1\n");
        }
    }
    return 0;
}
