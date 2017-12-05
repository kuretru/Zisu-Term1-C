#include <stdio.h>
int main()
{
	int i, repeat;
	float lengh, hour, minute;
	float result;
	scanf("%d", &repeat);
	for(i = 0; i < repeat; i++)
	{
		scanf("%f %f %f", &lengh, &hour, &minute);
		result = 10;
		lengh += (hour + minute / 60) / 5;
		if(lengh > 3)
		{
			if(lengh <= 10)
				result += (lengh - 3) * 2;
			else
				result += (lengh - 10) * 3 + 14;
		}
		printf("cost = %.0f\n", result);
	}
	return 0;
}
