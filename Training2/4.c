#include <stdio.h>
int main()
{
	int i, j;
	int data[10], insert;
	for(i = 0; i < 9; i++)
		scanf("%d", &data[i]);
	scanf("%d", &insert);
	for(i = 0; i < 8; i++)
	{
		if(data[i] <= insert && data[i + 1] >= insert)
		{
			for(j = 8; j >= i + 1; j--)
			{
				data[j + 1] = data[j];
			}
			data[i + 1] = insert;
			break;
		}
	}
	for(i = 0; i < 10; i++)
		printf("%d\n", data[i]);
	return 0;
}
