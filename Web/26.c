#include <stdio.h>
#include <string.h>
int getNumber(char data[])
{
	int result = 0;
	int length = strlen(data);
	int pow = 1;
	for (int i = length - 1; i >= 0; i--)
	{
		if (data[i] >= '0' && data[i] <= '9')
		{
			result += pow * (data[i] - '0');
			pow *= 10;
		}
	}
	return result;
}
int main()
{
	int a, b;
	char texta[200], textb[200];
	gets(texta);
	gets(textb);
	a = getNumber(texta);
	b = getNumber(textb);
	printf("%d %d", a / b, a % b);
	return 0;
}
