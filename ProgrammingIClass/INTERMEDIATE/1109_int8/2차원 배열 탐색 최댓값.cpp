/*
 
 2차원 배열의 최댓값(S)

 2차원 배열을 탐색하여 최댓값과 최댓값이 있는 행과 열을 구하는 프로그램을 작성하시오.

 <입력>
 첫째 줄에 정수 n(3<=n<=100)을 입력받고,
 다음 줄부터 n줄 동안 n개의 정수가 입력된다.
 
 3
 1 2 3
 9 3 2
 2 8 3
 
 <출력>
 배열에 있는 값 중에서 최댓값을 출력하고,
 다음 줄에 값이 위치하는 행과 열을 구분하여 출력한다.
 
 9
 2 1
 
 
 */

#include <stdio.h>

int a, arr[100][100], max=0, pathi=0, pathj=0;

int main()
{
    scanf("%d", &a);
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    max = arr[0][0]; //max를 arr[0][0]으로 설정
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(max < arr[i][j])
            {
                max=arr[i][j];
                pathi=i+1;
                pathj=j+1;
            }
        }
    }
    printf("%d\n%d %d", max, pathi, pathj);
}
