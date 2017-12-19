#include <stdio.h>
int main()
{
    int m, n, p, q;
    int data1[100][100], data2[100][100];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &data1[i][j]);
    scanf("%d %d", &p, &q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &data2[i][j]);
    if (n != p)
        printf("Error!\n");
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                    sum += data1[i][k] * data2[k][j];
                printf("%d", sum);
                if (j != q - 1)
                    printf(" ");
                else
                    printf("\n");
            }
        }
    }
    return 0;
}
