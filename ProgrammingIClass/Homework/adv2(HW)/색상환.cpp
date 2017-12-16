#include <stdio.h>
#include <memory.h>
#define MOD 1000000003

int n, k;
int DT[1001][1001];

int solve(int a, int b)
{
    if(a >= n || b == k) return (int)(b==k);
    else if(DT[a][b] == -1) DT[a][b]=(solve(a+1, b) + solve(a+2, b+1)) % MOD;
    return DT[a][b];
}

int main()
{
    memset(DT, -1, sizeof(DT));
    scanf("%d %d", &n, &k);
    printf("%d\n", (solve(1, 0) + solve(3, 1)) % MOD);
    return 0;
}
