#include <stdio.h>

bool first = 1;

void solve(int n)
{
    if(n == 0) return;
    
    if(first && (n % 10) == 0) solve(n / 10); //0 감지시 무시, 다음 재귀 호출
    
    else
    {
        printf("%d", n % 10);
        first = 0;
        solve(n / 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
}
