#include <stdio.h>

int data[10];

void getData()
{
	int i;
	for(i = 0; i < 10; i++)
		scanf("%d", &data[i]);
}

void calc()
{
	int i;
	int min, max;
	min = max = 0;
	for(i = 1; i < 10; i++)
	{
		if(data[i] < data[min])
			min = i;
	}
	i = data[0];
	data[0] = data[min];
	data[min] = i;
	for(i = 1; i < 10; i++)
	{
		if(data[i] > data[max])
			max = i;
	}
	i = data[9];
	data[9] = data[max];
	data[max] = i;
}

void putData()
{
	int i;
	for(i = 0; i < 10; i++)
		printf("%d ", data[i]);
}

int main()
{
	getData();
	calc();
	putData();
	return 0;
}
