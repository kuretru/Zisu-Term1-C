#include <stdio.h>
struct people
{
	int number;
	int year;
	int month;
	int day;
} data[100];
int main()
{
	int count, questions;
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
		scanf("%d %d %d %d", &data[i].number, &data[i].year, &data[i].month, &data[i].day);
	scanf("%d", &questions);
	while (questions--)
	{
		int number;
		scanf("%d", &number);
		for (int i = 0; i < count; i++)
		{
			if (data[i].number == number)
			{
				printf("%d %d %d %d\n", data[i].number, data[i].year, data[i].month, data[i].day);
				break;
			}
			if (i == count - 1)
				printf("%d NONE\n", number);
		}
	}
	return 0;
}
