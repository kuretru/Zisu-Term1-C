#include <ctype.h>
#include <stdio.h>
#include <string.h>
int htoi(char data[])
{
	int length = strlen(data);
	int result = 0;
	int pow = 1;
	for (int i = length - 1; i >= 0; i--)
	{
		data[i] = tolower(data[i]);
		if (data[i] >= '0' && data[i] <= '9')
		{
			result += pow * (data[i] - '0');
			pow *= 16;
		}
		else if (data[i] >= 'a' && data[i] <= 'z')
		{
			result += pow * (data[i] - 'a' + 10);
			pow *= 16;
		}
	}
	return result;
}
int main()
{
	int groups;
	scanf("%d\n", &groups);
	while (groups--)
	{
		char data[20];
		gets(data);
		printf("%d\n", htoi(data));
	}
	return 0;
}
