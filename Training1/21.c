#include <stdio.h>
#include <math.h>
int main()
{
	float a[3][3] = {{1.3, 2.7, 3.6}, {2, 3, 4.7}, {3, 4, 1.27}};
	float x;
	int i, j;
	for(i = 0; i < 3; i++)
	{
		x = a[i][0];
		for(j = 1; j < 3; j++)
		{
			if(fabs(a[i][j]) > fabs(x))
				x = a[i][j];
		}
		for(j = 0; j < 3; j++)
			a[i][j] /= x;
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%7.3f", a[i][j]);
		printf("\n");
	}
	return 0;
}
