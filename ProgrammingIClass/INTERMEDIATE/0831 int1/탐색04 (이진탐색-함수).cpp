#include <stdio.h>

int a[100], n, k;

int findMax(int s, int e)
{
    while(s <= e) //이진 탐색
    {
        int m = (s+e) / 2; //반으로 나눠서 계산
        
        if(a[m] == k) return m+1; //데이터를 찾으면 return (배열은 0부터 시작하므로, 1을 더해서 return)
        if(a[m] > k) e = m - 1; //m번째 위치보다 왼쪽에서 찾기
        else s = m + 1; //m번째 위치보다 오른쪽에서 찾기
    }
    return -1; //데이터를 찾지 못하면 -1을 return
}

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", a+i);
    scanf("%d", &k);
    
    printf("%d", findMax(0, n));
}
