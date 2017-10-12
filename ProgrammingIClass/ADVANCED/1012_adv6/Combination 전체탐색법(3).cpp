#include <stdio.h>
#include <time.h>

int N, K, ans;

void solve(int n, int k)
{
    if(k == K)
    {
        ans++;
        return;
    }
    if(n == N) return;
    solve(n+1, k+1);
    solve(n+1, k);
}

int main()
{
    scanf("%d %d", &N, &K);
    time_t s = clock();
    solve(0, 0);
    time_t e = clock();
    printf("%d\n", ans);
    printf("result = %f (sec)\n", (float)(e-s)/CLOCKS_PER_SEC);
}

//Combination 전체탐색법
