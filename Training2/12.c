#include <stdio.h>

void calc(int number)
{
	int i;
	int tmp, pow = 1, time = 0;
	tmp = number;
	while(tmp > 0)
	{
		pow *= 10;
		tmp /= 10;
		time++;
	}
	pow /= 10;
	for(i = 0; i < time; i++)
	{
		tmp = number / pow;
		printf("%d ", tmp);
		number -= tmp * pow;
		pow /= 10;
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	calc(num);
	return 0;
}
