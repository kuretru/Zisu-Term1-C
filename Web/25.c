#include <stdio.h>

void quickSort(int data[], int left, int right);

int main()
{
	int i, j, k;
	int n, m;
	int last, count;
	int oneThird, max[2];
	int result[100], data[100000];//change to 1000000
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &m);
		for(j = 0; j < m; j++)
			scanf("%d", &data[j]);
		quickSort(data, 0, m - 1);
		oneThird = m / 3;
		max[0] = max[1] = 0;
		last = data[0];
		count = 1;
		k = 0;
		for(j = 1; j < m; j++)
		{
			if(data[j] == last)
			{
				count++;
				if(j == m - 1 && count > oneThird)
					max[k++] = last;
			}
			else
			{
				if(count > oneThird)
					max[k++] = last;
				last = data[j];
				count = 1;
			}
		}
		if(max[1] > max[0])
			result[i] = max[1];
		else
			result[i] = max[0];
	}
	for(i = 0; i < n; i++)
		printf("%d\n", result[i]);
}

void quickSort(int data[], int left, int right)
{
	if(left >= right)
		return;
	int i = left;
	int j = right;
	int key = data[left];
	while(i < j)
	{
		while(i < j && key <= data[j])
			j--;
		data[i] = data[j];
		while(i < j && key >= data[i])
			i++;
		data[j] = data[i];
	}
	data[i] = key;
	quickSort(data, left, i - 1);
	quickSort(data, i + 1, right);
}
