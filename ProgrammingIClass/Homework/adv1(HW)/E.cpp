#include <stdio.h>

int memo[30000];

int solve(int n)
{
    if(n == 1) return 2;
    if(memo[n] == 0) memo[n] = (solve(n-1)+n) % 137;
    return memo[n];
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", solve(a));
}
