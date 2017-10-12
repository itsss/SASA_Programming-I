#include <stdio.h>
#include <time.h>

long long int DT[100009][100009] = {};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    clock_t s = clock();
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k && j <= i; j++)
        {
            if(i == j) DT[i][j] = 1;
            else if(j == 1) DT[i][j] = i;
            else DT[i][j] = DT[i-1][j-1] + DT[i-1][j];
        }
    }
    clock_t e = clock();
    printf("%lld\n", DT[n][k] % 1000009);
    printf("result = %f (sec)\n", (float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}

//Combination 동적표 (반복문)
