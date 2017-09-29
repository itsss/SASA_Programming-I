#include <stdio.h>

int s[1<<7][1<<7], n, gray, white;

void f(int a, int b, int n)
{
    bool isOne = 1;
    for(int i = a; i < a + n; i++)
    {
        for(int j = b; j < b + n; j++)
        {
            if(s[a][b] != s[i][j]) isOne = 0;
        }
    }
    if(isOne)
    {
        if(s[a][b] == 1) white++;
        else gray++;
        return;
    }
    else
    {
        f(a, b, n / 2);
        f(a + n / 2, b, n / 2);
        f(a, b + n / 2, n / 2);
        f(a + n / 2, b + n / 2, n / 2);
    }
}

int main()
{
    FILE *in = fopen("in.txt", "r");
    fscanf(in, "%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            fscanf(in, "%d", &s[i][j]);
        }
    }
    f(0, 0, n);
    printf("%d\n%d\n", gray, white);
}
