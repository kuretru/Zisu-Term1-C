#include <stdio.h>
#define size 100
int main()
{
	char c, str[size], word[26];
	int i, j,  len = 0,  count[26] = {0};
	while((c = getchar()) != '#')
		str[len++] = c;
	for(i = 0; i < len; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			count[str[i] - 'a']++;
	}
	for(i = 0; i < 26; i++)
		word[i] = i + 'a';
	for(i = 0; i < 26; i++)
	{
		for(j = 25; j > i; j--)
		{
			if(count[j - 1] < count[j])
			{
				len = count[j - 1];
				count[j - 1] = count[j];
				count[j] = len;
				c = word[j - 1];
				word[j - 1] = word[j];
				word[j] = c;
			}
		}
		if(count[i] > 0)
			printf("%c\t%d\n", word[i], count[i]);
	}
	return 0;
}
