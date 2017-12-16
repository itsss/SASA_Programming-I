#include <stdio.h>

int DT[102][10002];
int W, n, i, j, w[102], v[102];

int max(int a, int b)
{
    return a > b ? a : b;
}

int f(int i, int r)
{
    if(DT[i][r] != -1) return DT[i][r];
    if(i == n + 1) return DT[i][r] = 0;
    else if(r < w[i]) return DT[i][r] = f(i+1, r);
    else return DT[i][r] = max(f(i+1, r), f(i+1, r-w[i])+v[i]);
}

int main()
{
    scanf("%d %d", &n, &W);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d", &w[i], &v[i]);
    }
    for(i = 0; i <= 100; i++)
    {
        for(j = 0; j <= 10000; j++)
        {
            DT[i][j] = -1;
        }
    }
    printf("%d", f(1, W));
}
