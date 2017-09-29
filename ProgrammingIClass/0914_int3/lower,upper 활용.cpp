/*
 <문제>
 선형자료구조의 탐색 (lower bound, upper bound 활용)
 
 오름차순으로 정렬된 1,000,000 이하의 자연수 n(n <= 100,000) 개와 자연수 a, b를 입력받아 a <= x <= b를 만족하는 x의 개수를 구하시오.
 
 <입력> 
 첫줄의 수의 개수 n와 자연수 a, b를 공백으로 구분하여 입력, 다음 줄에 1,000,000 이하의 자연수 n개를 공백으로 구분하여 입력
 
 <출력> 
 a<=x<=b를 만족하는 x의 개수를 출력
 
*/

#include <stdio.h>

int n, k, A[1000001], arr[1000001], front=0, end=0;

int solve(int s, int e)
{
    int m;
    while(e-s > 0)
    {
        m = (s + e) / 2;
        if(A[m] < arr[0]) s = m + 1;
        else e = m;
    }
    return e+1;
}

int solve1(int s, int e)
{
    int m;
    while(e-s > 0)
    {
        m = (s + e) / 2;
        if(A[m] <= arr[1]) s = m + 1;
        else e = m;
    }
    return e+1;
}

int main()
{
    scanf("%d %d %d", &n, &arr[0], &arr[1]);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", A+i);
    }
    
    front = solve(0, n);
    end = solve1(front-1, n);
    
    printf("%d", (end-1)-front+1);
    
    return 0;
}
