#include <stdio.h>
#include <string.h>
int main()
{
	char list[100], c;
	int i, j;
	gets(list);
	for(i = 0; i < strlen(list); i++)
	{
		for(j = 0; j < strlen(list) - i - 1; j++)
		{
			if(list[j] > list[j + 1])
			{
				int t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
			}
		}
	}
	puts(list);
	return 0;
}
