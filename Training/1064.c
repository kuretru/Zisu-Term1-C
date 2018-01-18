#include <math.h>
#include <stdio.h>
#include <string.h>
int prime(int n)
{
    if (n < 2)
        return 0;
    int length = (int)sqrt((float)n);
    for (int i = 2; i <= length; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    char text[100];
    gets(text);
    int length = strlen(text);
    int data[26] = {0};
    for (int i = 0; i < length; i++)
        data[text[i] - 'a']++;
    int max = data[0], min = 2000000000;
    for (int i = 1; i < 26; i++)
    {
        if (data[i] > max)
            max = data[i];
        if (data[i] > 0 && data[i] < min)
            min = data[i];
    }
    int number = max - min;
    if (prime(number))
        printf("Lucky Word\n%d\n", number);
    else
        printf("No Answer\n0\n");
    return 0;
}
