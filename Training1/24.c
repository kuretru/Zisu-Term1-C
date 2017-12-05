#include <stdio.h>
int main()
{
	int x, y, z, k = 0;
	for(x = -44; x < 45; x++)
		for(y = -44; y < 45; y++)
			for(z = -44; z < 45; z++)
			{
				if(x * x + y * y + z * z == 2000)
					k++;
			}
	printf("%d", k);
	return 0;
}
