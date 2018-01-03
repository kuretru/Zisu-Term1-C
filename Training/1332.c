#include <stdio.h>
int calc(int last, int number, int copies)
{
    if (copies == 1)
        return 1;
    int result = 0;
    int length = number / copies;
    for (int i = last; i <= length; i++)
    {
        result += calc(i, number - i, copies - 1);
    }
    return result;
}
int main()
{
    int groups;
    scanf("%d", &groups);
    while (groups--)
    {
        int number, copies;
        scanf("%d %d", &number, &copies);
        printf("%d\n", calc(1, number, copies));
    }
    return 0;
}
