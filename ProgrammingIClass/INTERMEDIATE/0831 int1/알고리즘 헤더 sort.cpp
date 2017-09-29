#include <stdio.h>
#include <algorithm>

int main()
{
    int a[100], n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) scanf("%d", a+i);
    std::sort(a, a+n);
    
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
}
