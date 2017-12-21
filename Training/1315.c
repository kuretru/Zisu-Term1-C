#include <stdio.h>
int main()
{
    int groups, times;
    int data[1000];
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        scanf("%d", &times);
        data[0] = 1;
        for (int j = 1; j < 1000; j++)
            data[j] = -1;
        for (int j = 2; j <= times; j++)
        {
            int carry = 0;
            for (int k = 0; k < 1000; k++)
            {
                if (data[k] == -1)
                {
                    int l = k;
                    while (carry > 0)
                    {
                        data[l] = carry % 10;
                        carry /= 10;
                        l++;
                    }
                    break;
                }
                int number = data[k] * j + carry;
                data[k] = number % 10;
                carry = number / 10;
            }
        }
        for (int j = 999; j >= 0; j--)
        {
            if (data[j] == -1)
                continue;
            printf("%d", data[j]);
        }
        printf("\n");
    }
    return 0;
}
