#include <stdio.h>
int main()
{
	int i, groups;
	float result[20] = {0};
	float last;
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		int j, stations, gg = 0;
		float max, remain, cost;
		scanf("%d", &stations);
		scanf("%f %f %f", &max, &remain, &cost);
		for(j = 0; j < stations; j++)
		{
			float distance, price;
			scanf("%f %f", &distance, &price);
			if((remain - cost * distance) < 0)
			{
				gg = 1;
				break;
			}
			result[i] += (max - (remain - cost * distance)) * price;
			remain = max;
		}
		scanf("%f", &last);
		if(last > remain)
			gg = 1;
		if(gg == 1)
			result[i] = -1;
	}
	for(i = 0; i < groups; i++)
	{
		if(result[i] == -1)
			printf("NO\n");
		else
			printf("%.2f\n", result[i]);
	}
	return 0;
}
