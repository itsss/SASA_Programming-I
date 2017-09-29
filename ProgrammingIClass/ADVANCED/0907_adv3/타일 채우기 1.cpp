#include <stdio.h>
#include <time.h>

int n, m;

int f(int a)
{
    if(a <= 1) return 1 % m;
    else return ( f(a-1) + 2 * f(a-2) ) % m;
}

int main()
{
    time_t s = clock();
    scanf("%d %d", &n, &m);
    printf("%d\n", f(n));
    time_t e = clock();
    printf("result = %f (sec)\n", (float)(e-s) / CLOCKS_PER_SEC);
}
