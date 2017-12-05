#include <stdio.h>
int main()
{
	int i, n;
	int number[10];
	int min, max, tmp;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &number[i]);
	min = 0;
	for(i = 1; i < n; i++)
	{
		if(number[i] < number[min])
			min = i;
	}
	tmp = number[min];
	number[min] = number[0];
	number[0] = tmp;
	max = 0;
	for(i = 1; i < n; i++)
	{
		if(number[i] > number[max])
			max = i;
	}
	tmp = number[max];
	number[max] = number[n - 1];
	number[n - 1] = tmp;
	printf("After swap: ");
	for(i = 0; i < n; i++)
	{
		printf("%d", number[i]);
		if(i != n - 1)
			printf(" ");
	}
	return 0;
}
