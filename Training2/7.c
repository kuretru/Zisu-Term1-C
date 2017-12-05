#include <stdio.h>

int isPrime(int number)
{
	if(number % 2 == 0)
		return 0;
	else
		return 1;
}

int main()
{
	int num, result;
	scanf("%d", &num);
	result = isPrime(num);
	if(result == 0)
		printf("not ");
	printf("prime\n");
	return 0;
}
