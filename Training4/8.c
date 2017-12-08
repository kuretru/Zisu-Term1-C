#include <stdio.h>
#include <string.h>

struct node
{
	int low;
	int high;
	int data;
} tree[200001];

void startParser();
void create(int index, int left, int right);
void add(int index, int number, int position);
void sub(int index, int number, int position);
int select(int index, int left, int right);

int main()
{
	int i, j;
	int T, N;
	int tmp;
	scanf("%d", &T);
	for(i = 1; i <= T; i++)
	{
		scanf("%d", &N);
		create(1, 1, N);
		for(j = 1; j <= N; j++)
		{
			scanf("%d", &tmp);
			add(1, tmp, j);
		}
		printf("Case %d:\n", i);
		startParser();
	}
	return 0;
}

void startParser()
{
	int a, b;
	char cmd[6];
	scanf("%s", cmd);
	while(strcmp(cmd, "End"))
	{
		scanf("%d %d", &a, &b);
		if(strcmp(cmd, "Add") == 0)
			add(1, b, a);
		else if(strcmp(cmd, "Sub") == 0)
			sub(1, b, a);
		else
			printf("%d\n", select(1, a, b));
		scanf("%s", cmd);
	}
}

int select(int index, int left, int right)
{
	int mid, result = 0;
	if(tree[index].low == left && tree[index].high == right)
		return tree[index].data;
	mid = (tree[index].low + tree[index].high) / 2;
	if(right <= mid)
		result += select(2 * index, left, right);
	else if(left > mid)
		result += select(2 * index + 1, left, right);
	else
	{
		result += select(2 * index, left, mid);
		result += select(2 * index + 1, mid + 1, right);
	}
	return result;
}

void add(int index, int number, int position)
{
	int mid;
	if(tree[index].low == tree[index].high)
	{
		tree[index].data += number;
		return;
	}
	mid = (tree[index].low + tree[index].high) / 2;
	if(position <= mid)
		add(index * 2, number, position);
	else
		add(index * 2 + 1, number, position);
	tree[index].data = tree[index * 2].data + tree[index * 2 + 1].data;
}

void sub(int index, int number, int position)
{
	add(index, -number, position);
}

void create(int index, int left, int right)
{
	int mid;
	tree[index].low = left;
	tree[index].high = right;
	tree[index].data = 0;
	if(left == right)
		return;
	mid = (left + right) / 2;
	create(index * 2, left, mid);
	create(index * 2 + 1, mid + 1, right);
}
