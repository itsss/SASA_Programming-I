#include <stdio.h>

char arr[1<<19], arr2[1<<19];
int n, p;

void solve(int k, int s)
{
    char val = arr[p++];
    if(val == NULL) return;
    if(val == '-')
    {
        solve(k, s/2);
        solve(k+s/2, s/2);
    }
    else
    {
        for(int i = k; i < k + s; i++) arr2[i] = val;
    }
}

int main()
{
    scanf("%d %s", &n, arr);
    solve(0, n);
    printf("%s", arr2);
}
