#include <stdio.h>

int data[200];
int number[200];
int n, r;

void getNumber(int index, int remain)
{
    if (remain < 0)
        return;
    else if (remain == 0)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d", number[i]);
            if (i != r - 1)
                printf(" ");
            else
                printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (index == 0 || (index > 0 && data[i] > number[index - 1]))
            {
                number[index] = data[i];
                getNumber(index + 1, remain - 1);
            }
        }
    }
}

int main()
{
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &n, &r);
        for (int i = 0; i < n; i++)
            scanf("%d", &data[i]);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (data[j] > data[j + 1])
                {
                    int tmp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = tmp;
                }
            }
        }
        getNumber(0, r);
        printf("\n");
    }
    return 0;
}
