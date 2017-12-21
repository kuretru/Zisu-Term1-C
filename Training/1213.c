#include <math.h>
#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    number *= 2;
    int data[44725];
    int length = sqrt(number);
    for (int i = 0; i < length; i++)
    {
        data[i] = (i + 2) * (i + 1);
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (data[j] == number - data[i])
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
