#include <stdio.h>
#include <math.h>
#include <time.h>

int DT[100001];

int main()
{
    int n, i;
    scanf("%d", &n);
    time_t s = clock();
    for(i=1; i<=n; i++)
    {
        if(i<10) DT[i] = i;
        else DT[i] = DT[i/10] + (i%10) * (int)pow(10, (int)log10(i));
    }
    time_t e = clock();
    printf("%d\n", DT[n]);
    printf("result = %f (sec)", (float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}

// 상향식 설계 (숫자 뒤집기)
