/*
 약수의 합
 
 n을 1~n 사이의 모든 수로 나누어 보고, 나누어 떨어지면 n의 약수이므로 합에 누적함
 */

#include <stdio.h>

int main()
{
    int n, ans=0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0) ans += i;
    }
    printf("%d", ans);
}
