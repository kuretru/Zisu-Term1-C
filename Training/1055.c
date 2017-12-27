#include <stdio.h>
int main()
{
    int n, k;
    int data[10000];
    scanf("%d %d", &n, &k);
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
    int number = data[n - k] - data[k - 1];
    int result = 0;
    if (number >= 2)
    {
        for (int i = 2; i <= number; i++)
        {
            if (i == number)
                result = 1;
            if (number % i == 0)
                break;
        }
    }
    if (result)
        printf("YES\n%d", number);
    else
        printf("NO\n%d", number);
    return 0;
}
