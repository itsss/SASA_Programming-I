//거스름돈 - 숙직 선생님과 거의 같음

#include <stdio.h>

int DT[10001], coin[10], n, m;

int min(int a, int b)
{
    return a > b ? b : a;
}

int f(int c)
{
    for(int i = 0; i < n; i++)
    {
        if(coin[i] == c) return 1;
    }
    if(DT[c] == 0)
    {
        DT[c] = 987654321;
        for(int i = 0; i < n; i++)
        {
            if(c - coin[i] > 0) DT[c] = min(DT[c], f(c-coin[i])+1);
        }
    }
    return DT[c];
}

int main()
{
    scanf("%d %d", &m, &n);
    for(int i = 0; i < n; i++) scanf("%d", coin+i);
    printf("%d\n", f(m));
    return 0;
}
