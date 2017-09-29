#include <stdio.h>

int a[100], n, k;

int findMax(int s, int e)
{
    int m = a[s];
    for(int i = s; i <= e; i++) if(a[i] > m) m = a[i];
    return m;
}

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", a+i);
    printf("%d", findMax(0, n));
}
