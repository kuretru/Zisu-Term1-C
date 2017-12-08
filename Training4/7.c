#include <stdio.h>

int N, W;
int fcount, ecount, edges[6000][3];

struct tree
{
	int use;
	int count;
	int data[200];
} forest[200];

void addEdge(int a, int b, int lengh);
int kruskal();
int contains(int number);

int main()
{
	int i, j;
	int a, b, length;
	int tmp;
	ecount = 0;
	scanf("%d %d", &N, &W);
	for(i = 0; i < W; i++)
	{
		scanf("%d %d %d", &a, &b, &length);
		if(a > b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		addEdge(a, b, length);
		for(j = 0; j < fcount; j++)
		{
			forest[j].use = 0;
			forest[j].count = 0;
		}
		fcount = 0;
		printf("%d\n", kruskal());
	}
	return 0;
}

int kruskal()
{
	int i, j;
	int r1, r2, tmp;
	int result[100] = {0};
	for(i = 0; i < ecount; i++)
	{
		r1 = contains(edges[i][0]);
		r2 = contains(edges[i][1]);
		if(r1 == r2)
		{
			if(r1 == -1)//都不在树中，新开一个树
			{
				forest[fcount].data[0] = edges[i][0];
				forest[fcount].data[1] = edges[i][1];
				forest[fcount].count = 2;
				forest[fcount].use = 1;
				result[fcount] += edges[i][2];
				fcount++;
			}
			else //在同一个树中，已有更小，不可取
				continue;
		}
		else
		{
			if(r1 == -1) //第2个点在树中，加入第1个点
			{
				forest[r2].data[forest[r2].count++] = edges[i][0];
				result[r2] += edges[i][2];
			}
			else if(r2 == -1) //第1个点在树中，加入第2个点
			{
				forest[r1].data[forest[r1].count++] = edges[i][1];
				result[r1] += edges[i][2];
			}
			else//分属2个树，合并
			{
				if(r1 > r2)
				{
					tmp = r1;
					r1 = r2;
					r2 = tmp;
				}
				for(j = 0; j < forest[r2].count; j++)
				{
					forest[r1].data[forest[r1].count++] = forest[r2].data[j];
				}
				forest[r2].use = 0;
				result[r1] += result[r2] + edges[i][2];
				result[r2] = 0;
			}
		}
	}
	if(forest[r1].count < N)
		result[0] = -1;
	return result[0];
}

int contains(int number)
{
	int i, j;
	int result = -1;
	for(i = 0; i < fcount; i++)
	{
		if(forest[i].use == 1)
		{
			for(j = 0; j < forest[i].count; j++)
				if(forest[i].data[j] == number)
					return i;
		}
	}
	return result;
}

void addEdge(int a, int b, int length)
{
	int i, j;
	for(i = 0; i <= ecount; i++)
	{
		if(edges[i][2] >= length)
		{
			for(j = ecount - 1; j >= i; j--)
			{
				edges[j + 1][0] = edges[j][0];
				edges[j + 1][1] = edges[j][1];
				edges[j + 1][2] = edges[j][2];
			}
			edges[i][0] = a;
			edges[i][1] = b;
			edges[i][2] = length;
			ecount++;
			break;
		}
		if(i == ecount)
		{
			edges[i][0] = a;
			edges[i][1] = b;
			edges[i][2] = length;
			ecount++;
			break;
		}
	}
}
