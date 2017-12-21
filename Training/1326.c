#include <stdio.h>
int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        int number, result = 0, pow = 1;
        scanf("%d", &number);
        int tmp = number;
        while(tmp>0)
        {
            pow *= 10;
            tmp /= 10;
        }
        pow /= 10;
        while (number > 0)
        {
            result += (number % 10) * pow;
            pow /= 10;
            number /= 10;
        }
        printf("%d\n", result);
    }
    return 0;
}
