#include <stdio.h>

int main()
{
    int n[100], a, max=0;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < a; i++)
    {
        if(n[i] > max) max = n[i];
    }
    printf("%d", max);
}
