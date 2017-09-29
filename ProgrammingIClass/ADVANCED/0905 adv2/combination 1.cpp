#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f(int n, int k)
{
    if(k == n) return 1;
    else if (k == 1) return n;
    else return f(n-1, k-1) + f(n-1, k);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    time_t s = clock();
    printf("%d", f(n, k));
    time_t e = clock();
    
    printf("\nresult = %.3f (sec)", (float)(e-s)/CLOCKS_PER_SEC);
    return 0;
}
