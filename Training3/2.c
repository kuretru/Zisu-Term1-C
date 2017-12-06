#include <stdio.h>
#include <stdlib.h>

int star[200010], skill[200010], rank[200010];
int win[100010], los[100010], wcount, lcount;
int N, R, Q;

int cmp(int x, int y)//分高在前，同分小的在前
{
	if(star[x] != star[y])
		return star[x] > star[y];
	else
		return x < y;
}

void mergesort()
{
	int j, k, index;
	j = k = 1;
	index = 1;
	while(j <= wcount && k <= lcount)
	{
		if(cmp(win[j], los[k]))
			rank[index++] = win[j++];
		else
			rank[index++] = los[k++];
	}
	while(j <= wcount)
		rank[index++] = win[j++];
	while(k <= lcount)
		rank[index++] = los[k++];
}

int qcmp(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;
	if(star[x] != star[y])
		return star[y] - star[x];
	else
		return x - y;
}

int main()
{
	int i, j;
//	int tmp;
	int debug = 0;
	scanf("%d %d %d", &N, &R, &Q);
	N *= 2;
	for(i = 1; i <= N; i++)
		scanf("%d", &star[i]);
	for(i = 1; i <= N; i++)
	{
		scanf("%d", &skill[i]);
		rank[i] = i;
	}
	qsort(rank + 1, N, sizeof(int), qcmp);
//	for(i = 1; i < N; i++)
//	{
//		for(j = 1; j <= N - i; j++)
//		{
//			if(star[rank[j]] < star[rank[j + 1]])
//			{
//				tmp = rank[j];
//				rank[j] = rank[j + 1];
//				rank[j + 1] = tmp;
//			}
//		}
//	}
	for(i = 1; i <= R; i++)
	{
		if(debug)
		{
			printf("------%d------\n", i);
			for(j = 1; j <= N; j += 2)
				printf("%d(%d)---%d(%d)\n", rank[j], star[rank[j]], rank[j + 1], star[rank[j + 1]]);
			for(j = 1; j <= N; j++)
				printf("%d %d %d\n", star[j], skill[j], rank[j]);
			printf("-------------\n");
		}
		wcount = lcount = 0;
		for(j = 1; j < N; j += 2)
		{
			if(skill[rank[j]] > skill[rank[j + 1]])
			{
				star[rank[j]]++;
				win[++wcount] = rank[j];
				los[++lcount] = rank[j + 1];
			}
			else
			{
				star[rank[j + 1]]++;
				win[++wcount] = rank[j + 1];
				los[++lcount] = rank[j];
			}
		}//加分完成
		mergesort();
	}
	printf("%d", rank[Q]);
	return 0;
}
