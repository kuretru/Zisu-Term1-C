#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int value;
    int sum;
} pair;
int sum(int number)
{
    int result = 0;
    while (number > 0)
    {
        result += (number % 10) * (number % 10);
        number /= 10;
    }
    return result;
}
int qcmp(const void *a, const void *b)
{
    pair *x = (pair *)a;
    pair *y = (pair *)b;
    return x->sum - y->sum;
}
int main()
{
    int count;
    pair data[1000];
    while (1)
    {
        scanf("%d", &count);
        if (count <= 0)
            break;
        for (int i = 0; i < count; i++)
        {
            scanf("%d", &data[i].value);
            data[i].sum = sum(data[i].value);
        }
        qsort(data, count, sizeof(pair), qcmp);
        for (int i = 0; i < count; i++)
            printf("%d ", data[i].value);
        putchar('\n');
    }
    return 0;
}
