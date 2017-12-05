#include <stdio.h>
int main()
{
	int i;
	int data[10];
	for(i = 0; i < 10; i++)
		scanf("%d", &data[i]);
	for(i = 9; i >= 0; i--)
	{
		printf("%d", data[i]);
		if(i != 0)
			printf(" ");
	}
	return 0;
}
