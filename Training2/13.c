#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, tmp;
	char data[3][100];
	int order[3] = {0, 1, 2};
	for(i = 0; i < 3; i++)
		gets(data[i]);
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2 - i; j++)
			if(strcmp(data[order[j]], data[order[j + 1]]) > 0)
			{
				tmp = order[j];
				order[j] = order[j + 1];
				order[j + 1] = tmp;
			}
	}
	for(i = 0; i < 3; i++)
		puts(data[order[i]]);
	return 0;
}
