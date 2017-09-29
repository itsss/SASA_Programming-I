#include <stdio.h>

int a[100], n, k;

int findMax(int s, int e)
{
    if(s > e) return 1;
    int m = (s + e) / 2;
    
    if(a[m] == k) return m + 1;
    else if(a[m] > k) return findMax(s, m-1);
    else return findMax(m+1, e);
}

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", a+i);
    scanf("%d", &k);
    
    printf("%d", findMax(0, n));
}
