#include <stdio.h>
#define size 100
int main()
{
	int i, j, count = 0, num, list[size];
	while(1)
	{
		scanf("%d", &num);
		if(num < 0)
			break;
		list[count] = num;
		count++;
	}
	for(i = 0; i < count - 1; i++)
	{
		for(j = 0; j < count - 1 - i; j++)
		{
			if(list[j] < list[j + 1])
			{
				num = list[j];
				list[j] = list[j + 1];
				list[j + 1] = num;
			}
		}
	}
	for(i = 0; i < count - 1; i++)
		printf("%d ", list[i]);
	return 0;
}
