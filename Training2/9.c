#include <stdio.h>
#include <string.h>

void rev(char (*data)[100])
{
	int i, j;
	int len;
	char c;
	len = strlen(*data);
	for(i = 0, j = len - 1; i < j; i++, j--)
	{
		c = (*data)[i];
		(*data)[i] = (*data)[j];
		(*data)[j] = c;
	}
}

int main()
{
	char data[100];
	gets(data);
	rev(&data);
	puts(data);
	return 0;
}
