#include <stdio.h>

void solve(int n)
{
    if(n == 0) return;
    printf("%d ", n % 10); //n % 10해서 수의 첫번째 자리 출력
    printf("recursion : %d\n", n/10); //앞으로 재귀 호출될 값
    solve(n / 10); // n / 10 (첫번째 자리 제거) 재귀 호출
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
}

//단, 이 프로그램은 유효숫자를 제거하지 못하는 문제가 있다. ex) 12300 -> 00321
