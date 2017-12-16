/*
 몇 개의 데이터가 일치할까?(L)
 
 세종이는 2개의 정수 목록을 가지고 있다. 2개의 정수 목록 중에서 일치하는 값이 몇 개인지 출력하는 프로그램을 작성하시오.
 단, 첫번째 목록은 오름차순으로 정렬되어 있고, 두번째 목록은 정렬되어 있지 않다.
 또한 각 목록에는 중복된 값이 존재하지 않는다.
 
 <입력>
 첫줄에 각 목록의 데이터의 개수 n과 m이 공백으로 구분되어 입력된다.
 다음 n줄 동안 첫번째 목록의 데이터 d1이 입력되고, 그 다음 m줄 동안 두번째 목록의 데이터 d2가 입력된다.
 (1<=n,m<=100,000, 1<=d1,d2<=2,000,000,000)
 
 3 3
 10
 20
 30
 11
 22
 30
 
 <출력>
 첫번째 목록과 두번째 목록의 데이터 중에서 양쪽 모두 존재하는 데이터의 개수를 출력한다.
 일치하는 데이터가 없으면 0을 출력한다.
 
 1
 */

#include <stdio.h>

int arr1[100001], arr2[100001];

int bs(int start, int end, int k)
{
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr1[mid] == k) return mid + 1;
        else if(arr1[mid] > k) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main()
{
    int a, b, cnt=0;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++) scanf("%d", &arr1[i]);
    for(int i = 0; i < b; i++) scanf("%d", &arr2[i]);
    
    for(int i = 0; i < a; i++)
    {
        int result = bs(0, a, arr2[i]);
        if(result != -1) cnt++;
    }
    printf("%d", cnt);
}