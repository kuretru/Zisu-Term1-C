#include <math.h>
#include <stdio.h>
int data[44725];
int root(int n)
{
    return (int)sqrt((float)n);
}
int prime(int n)
{
    int i, bound;
    if (n % 2 == 0)
        return (n == 2);
    if (n % 3 == 0)
        return (n == 3);
    if (n % 5 == 0)
        return (n == 5);
    bound = root(n);
    for (i = 7; i <= bound; i = i + 2)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int count = 0;
    for (int i = 2; i < 44725; i++)
    {
        if (prime(i))
            data[count++] = i;
    }
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        int number;
        scanf("%d", &number);
        for (int j = 0; j < count; j++)
        {
            if (number % data[j] == 0)
            {
                int n = number / data[j];
                if (prime(n))
                {
                    printf("%d", n);
                    if (i != groups - 1)
                        printf(" ");
                    break;
                }
            }
        }
    }
    return 0;
}
