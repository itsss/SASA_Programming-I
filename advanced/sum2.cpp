#include <stdio.h>

int solve(int n)
{
	if(n == 1) return 1;
	return 2 * solve(n / 2) + ((n+1)/2) * ((n+1)/2);
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", solve(a));
}
