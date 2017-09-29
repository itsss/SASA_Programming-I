#include <cstdio>
#include <cmath>

int f(int n)
{
    if(n < 10) return n;
    int T = (int)powf(10.0, ((int)log10(n)));
    return (n % 10) * T + f((n%T) / 10) * 10 + n / T;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
