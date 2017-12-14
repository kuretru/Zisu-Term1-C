#include <stdio.h>
int yearday(int year, int month, int day)
{
    int i;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int result = day;
    for (i = 0; i < month - 1; i++)
        result += days[i];
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        if (month > 2)
            result++;
    }
    return result;
}

int main()
{
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    printf("%d\n", yearday(year, month, day));
    return 0;
}
