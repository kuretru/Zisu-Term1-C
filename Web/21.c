#include <stdio.h>
int main()
{
	int neg = 0, num, tmp[10] = {0}, i = 0, pow = 1;
	scanf("%d", &num);
	if(num < 0)
	{
		neg = 1;
		num = -num;
	}
	while(1)
	{
		tmp[i] = num % 10;
		num /= 10;
		i++;
		if(num < 1)
			break;
		pow *= 10;
	}
	i = 0;
	num = 0;
	while(1)
	{
		num += tmp[i] * pow;
		pow /= 10;
		i++;
		if(pow < 1)
			break;
	}
	if(neg == 1)
		num = -num;
	printf("%d", num);
	return 0;
}
