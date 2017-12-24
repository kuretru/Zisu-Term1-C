#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int score;
} students[1000];
int cmp(int x, int y)
{
    if (students[x].score != students[y].score)
        return students[x].score < students[y].score;
    else
    {
        int result = strcmp(students[x].name, students[y].name);
        if (result == 1)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int count;
    scanf("%d\n", &count);
    for (int i = 0; i < count; i++)
        scanf("%s %d", students[i].name, &students[i].score);
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (cmp(j, j + 1))
            {
                struct student tmp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < count; i++)
        printf("%s %d\n", students[i].name, students[i].score);
    return 0;
}
