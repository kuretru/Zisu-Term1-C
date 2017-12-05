#include <stdio.h>
int main()
{
	int i, j, temp, n = 0;
	int a[10] = {7, 6, 20, 3, 14, 88, 53, 62, 10, 29}, b[10];
	for(i = 0; i < 10; i++)
	{
		if(a[i] % 2 == 0)
			b[n++] = a[i];
	}
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(b[j] > b[j + 1])
			{
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%3d", b[i]);
		if(i % 3 == 2)
			printf("\n");
	}
	return 0;
}
