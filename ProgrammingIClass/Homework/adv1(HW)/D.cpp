#include <stdio.h>

int a[30], cnt, r=0, ans=0;

int min(int a, int b)
{
    return a > b ? b : a;
}
void solve(int n, int k)
{
    if(n == 0 && cnt <= r)
    {
        ans++;
        return;
    }
    for(int i = min(n, k); i >= 1; i--)
    {
        a[cnt++] = i;
        solve(n-i, i);
        cnt--;
    }
}

int main()
{
    int n;
    scanf("%d %d", &n, &r);
    solve(n, n);
    printf("%d", ans);
    return 0;
}
