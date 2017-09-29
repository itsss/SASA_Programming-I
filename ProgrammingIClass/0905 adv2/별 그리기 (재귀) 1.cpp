#include <stdio.h>

void solve(int n)
{
    if(n == 1) printf("*\n");
    else
    {
        solve(n - 1);
        for(int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
}
