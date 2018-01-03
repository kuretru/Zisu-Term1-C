#include <stdio.h>
long long data[50] = {1};
void calc(int number)
{
    if (number == 0 || number == 2)
        printf("%d", number);
    else
    {
        while (number > 0)
        {
            int times = 0;
            for (int i = 0; i < 50; i++)
            {
                if (data[i] > number)
                {
                    times = i - 1;
                    break;
                }
            }
            if (times == 1)
                printf("2");
            else
            {
                printf("2(");
                calc(times);
                printf(")");
            }
            if (number != data[times])
                printf("+");
            number -= data[times];
        }
    }
}
int main()
{
    for (int i = 1; i < 50; i++)
        data[i] = data[i - 1] * 2;
    int groups, number;
    scanf("%d", &groups);
    while (groups--)
    {
        scanf("%d", &number);
        calc(number);
        printf("\n");
    }
    return 0;
}
