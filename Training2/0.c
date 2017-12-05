#include <stdio.h>
int main()
{
	int i;
	int biit = 0, pow = 1, poww = 1;
	int num, tmp;
	int rev = 0;
	scanf("%d", &num);
	tmp = num;
	while(tmp > 0)
	{
		tmp /= 10;
		biit++;
		pow *= 10;
	}
	pow /= 10;
	printf("%d\n", biit);
	for(i = 0; i < biit; i++, pow /= 10, poww *= 10)
	{
		tmp = num / pow;
		num -= tmp * pow;
		rev += poww * tmp;
		printf("%d", tmp);
		if(i != biit - 1)
			printf(" ");
		else
			printf("\n");
	}
	printf("%d\n", rev);
	return 0;
}
