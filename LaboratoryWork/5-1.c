#include <stdio.h>
int main()
{
	float tax[7] = {0.03, 0.1, 0.2, 0.25, 0.3, 0.35, 0.45};
	int upper[6] = {1500, 4500, 9000, 35000, 55000, 80000};
	int i, lower = 0;
	float wage, result = 0;
	scanf("%f", &wage);
	wage -= 3500;
	for(i = 0; i < 7; i++)
	{
		if (wage < 0)
			break;
		if(wage < upper[i])
		{
			result += (wage - lower) * tax[i];
			break;
		}
		result += (upper[i] - lower) * tax[i];
		lower = upper[i];
	}
	printf("%.0f\n", wage - result + 3500);
	return 0;
}
