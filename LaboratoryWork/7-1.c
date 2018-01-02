#include <stdio.h>
struct worker
{
    char name[20];
    float dailySalary;
    int days;
    float totalSalary;
};
int main()
{
    int i, j;
    struct worker list[10], tmp;
    for (i = 0; i < 10; i++)
    {
        scanf("%s %f %d", list[i].name, &list[i].dailySalary, &list[i].days);
        list[i].totalSalary = list[i].dailySalary * list[i].days;
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (list[j].totalSalary < list[j + 1].totalSalary)
            {
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
    printf("Name\tDaily\tDays\tTotal\n");
    for (i = 0; i < 10; i++)
        printf("%s\t%.2f\t%d\t%.2f\n", list[i].name, list[i].dailySalary, list[i].days, list[i].totalSalary);
    return 0;
}
