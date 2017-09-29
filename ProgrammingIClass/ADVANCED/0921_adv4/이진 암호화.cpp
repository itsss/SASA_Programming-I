#include <stdio.h>

char arr[1<<19];

int n;

void solve(int k, int s)
{
    int sum = 0;
    if(s == 1)
    {
        printf("%c", arr[k]);
        return;
    }
    for(int i = k; i < k + s; i++)
    {
        sum += (arr[i]-'0');
    }
    if(sum ==0 || sum==s) printf("%d", (bool)sum);
    else
    {
        printf("-");
        solve(k, s/2);
        solve(k+s/2, s/2);
    }
}

int main()
{
    scanf("%d %s", &n, arr);
    solve(0, n);
    return 0;
}
