#include <stdio.h>
#include <string.h>

char letter[10], data[11], result[11] = {0};
int llen = 0, lcount[10];
int n, count = 0;

int contains(char c)
{
	int i, result = -1;
	for(i = 0; i < llen; i++)
	{
		if(letter[i] == c)
		{
			result = i;
			break;
		}
	}
	return result;
}

void setLetter(int index)
{
	int i, j;
	for(i = 0; i < llen; i++)
	{
		if(lcount[i] > 0)
		{
			lcount[i]--;
			result[index] = letter[i];
			if(index < n - 1)
				setLetter(index + 1);
			else
			{
				for(j = 0; j < n; j++)
				{
					printf("%c", result[j]);
				}
				printf("\n");
				count++;
			}
			lcount[i]++;
		}
	}
}

int main()
{
	int i, j;
	scanf("%d", &n);
	scanf("%c", &data[0]);//还有个回车读入
	gets(data);
	for(i = 0; i < n; i++)
	{
		j = contains(data[i]);
		if(j > -1)
			lcount[j]++;
		else
		{
			letter[llen] = data[i];
			lcount[llen++] = 1;
		}
	}
	setLetter(0);
	printf("%d\n", count);
	return 0;
}
