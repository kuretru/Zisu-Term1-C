#include <stdio.h>

int data[9], flag[9] = {0};
int n;
int num[9];

void getNumber(int start)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		if(flag[i] == 0)
		{
			flag[i] = 1;
			num[start] = data[i];
			if(start < n - 1)
			{
				getNumber(start + 1);
			}
			else
			{
				for(j = 0; j < n; j++)
				{
					printf("%d", num[j]);
					if(j != n - 1)
						printf(" ");
					else
						printf("\n");
				}
			}
			flag[i] = 0;
		}
	}
}

int main()
{
	int i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		data[i] = i + 1;
	getNumber(0);
	return 0;
}
