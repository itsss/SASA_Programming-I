#include <stdio.h>

int n, m, a[101], b[101];
int DT[101][10001];

int max(int a, int b) { return a > b ? a : b; }

int main()
{
    int ans=100000;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= 100 * n; j++)
        {
            if(j >= b[i]) DT[i][j] = max(DT[i-1][j], DT[i-1][j-b[i]]+a[i]);
            else DT[i][j] = DT[i-1][j];
        }
    }
    for(int j = 0; j <= 100*n; j++)
    {
        if(DT[n][j] >= m && ans > j) ans = j;
    }
    printf("%d", ans);
}
