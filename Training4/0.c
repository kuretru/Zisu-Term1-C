#include <stdio.h>
#define max 1000000000

int data[115], len;//1000/9

void add(int number)// + number
{
	int i;
	for(i = 0; i <= len; i++)
	{
		if(i == 0)
			data[i] += number;
		if(data[i] > max)//处理进位
		{
			data[i] -= max;
			if(i == len)
			{
				data[i + 1] = 1;
				len++;
			}
			else
				data[i + 1] += 1;
		}
	}
}

void multiply(int number)// * number
{
	int i;
	int bit;
	int carry = 0;
	for(i = 0; i <= len; i++)
	{
		data[i] *= number;
		if(carry > 0)
			data[i] += carry;
		carry = 0;
		if(data[i] > max)
		{
			bit = data[i] / max;
			data[i] -= bit * max;
			if(i == len)
			{
				data[i + 1] = bit;
				len++;
				break;
			}
			else
				carry = bit;
		}
	}
}

void print()
{
	int i, j;
	int tmp, biit;
	for(i = len; i >= 0; i--)
	{
		if(i != len)
		{
			biit = 0;
			tmp = data[i];
			while(tmp > 0)
			{
				tmp /= 10;
				biit++;
			}
			for(j = 0; j < 9 - biit; j++)
				printf("0");
		}
		printf("%d", data[i]);
	}
}

int main()
{
	int i, j;
	int groups, n;
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		scanf("%d", &n);
		data[0] = 1;
		len = 0;
		for(j = 0; j <= n; j++)
			multiply(2);
		data[0] -= 2;
		print();
		printf("\n");
	}
	return 0;
}
