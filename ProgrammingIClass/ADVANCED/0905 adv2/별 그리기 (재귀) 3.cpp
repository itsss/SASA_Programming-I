#include <stdio.h>
#define MAXN 10000

char star[MAXN+1];

void f(int n)
{
    if(n > 0)
    {
        f(n-1);
        star[n] = '*';
        puts(star+1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    f(n);
}
