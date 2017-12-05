#include <stdio.h>
long f(int n);
int main()
{
	printf("%ld", f(30));
	return 0;
}
long f(int n)
{
	if(n == 2 || n == 1) return 1;
	else
		return f(n - 1) + f(n - 2);
}
