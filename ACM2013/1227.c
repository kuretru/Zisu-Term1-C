#include <stdio.h>
char data[12][8] = {"Dragon", "Rabbit", "Tiger", "Ox", "Rat", "Pig",
                    "Dog", "Rooster", "Monkey", "Ram", "Horse", "Snake"};
int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        int year;
        scanf("%d", &year);
        printf("%s\n", data[year % 12]);
    }
    return 0;
}
