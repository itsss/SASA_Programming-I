#include <stdio.h>
#include <math.h>
#include <time.h>

int DT[100001];

int f(int n)
{
    if(n < 10) return n;
    if(!DT[n]) DT[n] = f(n/10)+(n%10)*powf(10.0, (int)log10((double)n));
    return DT[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    time_t s = clock();
    printf("%d\n", f(n));
    time_t e = clock();
    printf("result = %f(sec)\n", (float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}

//하향식 설계 (숫자 뒤집기)
