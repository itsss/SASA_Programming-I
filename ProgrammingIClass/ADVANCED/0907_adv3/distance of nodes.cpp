#include <stdio.h>

int solve(int a, int b)
{
    if(a==b) return 0;
    else if(b > a) return solve(a, b / 2) + 1;
    else return solve(a / 2, b) + 1;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", solve(a, b));
}
