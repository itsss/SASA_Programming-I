/*
 가까운 이웃집 찾기
 
 SASA마을에는 도로를 따라 집들이 일렬로 늘어서있다. 가장 가까운 이웃집을 찾아보자.
 
 <입력>
 첫 줄에 집의 수 n 이 입력된다.(1 <= n <= 150)
 둘째 줄에 n개의 집의 위치가 입력된다. (1 <= 위치 <= 10,000)
 
 5
 3 11 1 4 10
 
 <출력>
 가장 가까운 이웃집 쌍을 출력하되, 여러 쌍일 경우 한 줄에 한 쌍씩 출력한다.
 쌍을 출력할 때는 각 집의 위치를 쉼표로 구분하여 출력하고, 앞쪽의 집을 먼저 출력한다.
 
 3,4
 10,11
 */
#include <stdio.h>
#include <algorithm>

using namespace std;

int a, arr[150], m=0;

int main()
{
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, arr+a);
    m = arr[1] - arr[0];
    for(int i = 0; i < a; i++)
    {
        for(int j = i+1; j < a; j++)
        {
            if((arr[j] > arr[i] ? arr[j]-arr[i] : arr[i]-arr[j]) < m)
            {
                m = (arr[j] > arr[i] ? arr[j]-arr[i] : arr[i]-arr[j]);
            }
        }
    }
    
    for(int i = 0; i < a; i++)
    {
        for(int j = i+1; j < a; j++)
        {
            if((arr[j] > arr[i] ? arr[j]-arr[i] : arr[i]-arr[j]) == m) printf("%d,%d\n", arr[i], arr[j]);
        }
    }
}
