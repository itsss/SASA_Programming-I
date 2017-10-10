#include <stdio.h>
#include <time.h>

long long int DT[100001];

long long int f(long long int n)
{
    if(n <= 2) return 1;
    if(!DT[n]) DT[n] = f(n-1) + f(n-2);
    return DT[n];
}

int main()
{
    int a;
    scanf("%d", &a);
    time_t s = clock();
    printf("%lld\n", f(a));
    time_t e = clock();
    printf("result = %f (sec)", (float)(e-s)/CLOCKS_PER_SEC);
}
