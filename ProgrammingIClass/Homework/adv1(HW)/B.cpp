#include <stdio.h>

int n;

int solve(int r, int c)
{
    if(c == 1 || r == c) return 1;
    else return solve(r-1, c) + solve(r-1, c-1);
    //파스칼의 삼각형 기본 알고리즘
}

void print(int r, int c, int a, int b)
{
    if(a == r && b == c) printf("%d", solve(r, c));
    
    if(r == c)
    {
        if(r == n) return;
        else
        {
            print(r+1, 1, a, b);
        }
    }
    else print(r, c+1, a, b);
}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    n = a;
    print(1, 1, a, b);
}
