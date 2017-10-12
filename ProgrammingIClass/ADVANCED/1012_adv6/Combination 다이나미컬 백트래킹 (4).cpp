#include <stdio.h>
#include <time.h>

int N, K, DT[31][31];

int f(int n, int k)
{
    if(k == K) return 1;
    if(n == N) return 0;
    if(!DT[n][k]) DT[n][k] = f(n+1, k+1) + f(n+1, k);
    return DT[n][k];
}

int main()
{
    scanf("%d %d", &N, &K);
    
    time_t s = clock();
    int ans = f(0, 0);
    time_t e = clock();
    
    printf("%d\n", ans);
    printf("result = %f(sec)\n", (float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}

//Combination (다이나미컬 백트래킹)
