#include <stdio.h>
#include <string.h>

int getIndex(char c[]);
double calc(int old, int target, double money);

struct rate
{
	int old;
	int new;
	double rate;
	int used;
} rtable[200];

char currency[30][20];
int ccount, rcount;

int main()
{
	int i;
	int oindex, nindex;
	int index = 0;
	char old[20], new[20];
	double rate, result;
	scanf("%d", &ccount);
	while(ccount > 0)
	{
		for(i = 0; i < ccount; i++)
			scanf("%s", currency[i]);
		scanf("%d", &rcount);
		for(i = 0; i < rcount; i++)
		{
			scanf("%s %lf %s", old, &rate, new);
			oindex = getIndex(old);
			nindex = getIndex(new);
			rtable[i].old = oindex;
			rtable[i].new = nindex;
			rtable[i].rate = rate;
			rtable[i].used = 0;
		}
		printf("Case %d: ", ++index);
		for(i = 0; i < rcount; i++)
		{
			rtable[i].used = 1;
			result = calc(rtable[i].new, rtable[i].old, 1 * rtable[i].rate);
			rtable[i].used = 0;
			if(result > 1)
			{
				printf("Yes\n");
				break;
			}
			if(i == rcount - 1)
				printf("No\n");
		}
		scanf("%d", &ccount);
	}
	return 0;
}

double calc(int old, int target, double money)
{
	int i;
	double tmp, result = 0;
	for(i = 0; i < rcount; i++)
	{
		if(rtable[i].old == old)
		{
			if(rtable[i].new == target) //找到了
				tmp = money * rtable[i].rate;
			else if(rtable[i].used == 0)
			{
				rtable[i].used = 1;
				tmp = calc(rtable[i].new, target, money * rtable[i].rate);
				rtable[i].used = 0;
			}
			if(tmp > result)
				result = tmp;
		}
	}
	return result;
}

int getIndex(char c[])
{
	int i;
	for(i = 0; i < ccount; i++)
		if(strcmp(currency[i], c) == 0)
			return i;
	return -1;
}
