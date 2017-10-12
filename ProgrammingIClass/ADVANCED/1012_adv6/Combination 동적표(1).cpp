#include <stdio.h>
#include <time.h>

int DT[40][40];

int f(int n, int k)
{
    if(k==n) DT[n][k] = 1;
    if(k==1) DT[n][k] = n;
    else
    {
        if(!DT[n][k])
        {
            DT[n][k] = f(n-1, k-1) + f(n-1, k);
        }
    }
    return DT[n][k];
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    time_t s = clock();
    printf("%d\n", f(a, b)%1000009);
    time_t e = clock();
    printf("result = %f (sec)\n", (float)(e-s)/CLOCKS_PER_SEC);
}

//Combination 동적표
