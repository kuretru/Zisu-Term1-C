#include <stdio.h>
#define count 10
int main()
{
	int i, j;
	int data[count];
	int min, tmp;
	for(i = 0; i < count; i++)
		scanf("%d", &data[i]);
	for(i = 0; i < count - 1; i++)
	{
		min = i;
		for(j = i + 1; j < count; j++)
		{
			if(data[j] < data[min])
				min = j;
		}
		tmp = data[min];
		data[min] = data[i];
		data[i] = tmp;
	}
	for(i = 0; i < count; i++)
		printf("%d\n", data[i]);
	return 0;
}
