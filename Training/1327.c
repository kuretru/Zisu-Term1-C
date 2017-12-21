#include <stdio.h>
int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        char result[8] = {0};
        int length = 0;
        int number;
        scanf("%d", &number);
        while (number > 0)
        {
            int x = number % 16;
            if (x < 10)
                result[length++] = x + '0';
            else
                result[length++] = x + 'A' - 10;
            number /= 16;
        }
        for (int j = length - 1; j >= 0; j--)
            printf("%c", result[j]);
        printf("\n");
    }
    return 0;
}
