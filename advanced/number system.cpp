#include <stdio.h>

void f(int n, int k)
{
	if(n < k) printf("%d", n);
	else
	{
		f(n / k, k);
		printf("%d", n % k);
	}
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	f(n, k);
	return 0;
}
