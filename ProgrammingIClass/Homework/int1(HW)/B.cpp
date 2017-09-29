#include <stdio.h>
int n, k, A[1000001], c, arr[1000001];

int solve(int s, int e, int i)
{
	int m;
	while(e-s > 0)
	{
		m = (s + e) / 2;
		if(A[m] < arr[i]) s = m + 1;
		else e = m;
	}
	return e+1;
}

int main()
{
	scanf("%d %d", &n, &c);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", A+i);
	}
	for(int i = 0; i < c; i++)
	{
		scanf("%d", &arr[i]);
		printf("%d ", solve(0, n, i));
	}
	
	//printf("%d\n", solve(0, n));
	return 0;
}
