#include <stdio.h>
int n, k, A[1000001], arr[1000001], ans[100001], front=0, end=0;

int solve(int s, int e, int w)
{
	int m;
	while(e-s > 0)
	{
		m = (s + e) / 2;
		if(A[m] < w) s = m + 1;
		else e = m;
	}
	return e+1;
}

int solve1(int s, int e, int w)
{
	int m;
	while(e-s > 0)
	{
		m = (s + e) / 2;
		if(A[m] <= w) s = m + 1;
		else e = m;
	}
	return e+1;
}

int main()
{
	int p;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", A+i);
	}
	scanf("%d", &p);
	
	for(int i = 0; i < p; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		
		front = solve(0, n, a);
		end = solve1(front-1, n, b);
		
		ans[i] = (end-1)-front+1;
		//ans[i] = end - front + 1;
	}
	for(int i = 0; i < p; i++) printf("%d\n", ans[i]);
	//printf("%d\n", solve(0, n));
	return 0;
}
