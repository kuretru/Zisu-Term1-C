#include <stdio.h>
int main()
{
	int i, j, t;
	char c;
	int count[26] = {0}, letter[26];
	scanf("%c", &c);
	for(i = 0; i < 26; i++)
		letter[i] = i;
	while(c != '#')
	{
		if(c >= 'a' && c <= 'z')
			c -= 32;
		if(c >= 'A' && c <= 'Z')
			count[c - 'A']++;
		scanf("%c", &c);
	}
	for(i = 0; i < 25; i++)
	{
		for(j = 0; j < 25 - i; j++)
		{
			if(count[j] < count[j + 1])
			{
				t = count[j];
				count[j] = count[j + 1];
				count[j + 1] = t;
				t = letter[j];
				letter[j] = letter[j + 1];
				letter[j + 1] = t;
			}
		}
	}
	for(i = 0; i < 26; i++)
	{
		if(count[i] > 0)
			printf("%c  %d\n", letter[i] + 'A', count[i]);
	}
	return 0;
}
