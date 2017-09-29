#include <stdio.h>

long long int n, m;

long long int f(long long int k)
{
    if(k <= 1) return 1 % m;
    else if(k % 2) return(f(k/2) * f(k/2+1) + 2 * f(k/2) * f(k/2-1))%m;
    else return (f(k/2) * f(k/2)+2*f(k/2-1)*f(k/2-1))%m;
}

int main()
{
    scanf("%lld", &n);
    if(n < 50) m = 1000000;
    else m = 100007;
    printf("%lld", f(n));
}
