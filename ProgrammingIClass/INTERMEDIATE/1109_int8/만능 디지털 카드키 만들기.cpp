/*
 만능 디지털 카드키 만들기
 
 XX사에서 만든 디지털 도어락은 내부적으로 보안키 값을 가지고 있고, 이 값은 1,000이하의 자연수로 이루어져 있다.
 각 카드키들은 ID값을 가지고 있는데, 이 값이 도어락의 내부 보안키 값의 약수이면 이 도어락을 열 수 있다.
 길동이는 ∆∆사에서 근무하고, ∆∆사는 XX사에서 만든 디지털 도어락을 쓴다.
 길동이가 자신의 사무실로 가기 위해서는 3개의 문을 통과해야 한다.
 길동이는 자신이 통과해야하는 3개의 문의 내부 보안키 값을 알고 있을 때, 이 3개의 문을 모두 열 수 있는 만능 보안키를 여러분에게 의뢰했다.
 길동이를 도와주자. 단, 보안키의 ID값이 클수록 제작비용이 적다.
 최소한의 비용을 만능보안키를 만드는 프로그램을 작성하시오.
 
 <입력>
 1) 세 자연수가 입력된다.
 2) 각 값들은 도어락의 내부 보안키값을 의미한다.
 3) 각 값은 1,000이하의 자연수이다.
 
 10 20 30
 
 <출력>
 가장 가격이 저렴한 만능보안키의 ID값을 출력한다.
 
 10
 */

#include <stdio.h>

int gcd(int i, int j, int k)
{
    int least;
    least = i;
    while(!( (i == j) && (j == k) ) )
    {
        i = (i == 0 ? least : i);
        j = (j == 0 ? least : j);
        k = (k == 0 ? least : k);
        if(i <= j)
        {
            if(i <= k) least = i;
            else least = k;
        }
        else
        {
            if(j <= k) least = j;
            else least = k;
        }
        i = i % least;
        j = j % least;
        k = k % least;
    }
    return least;
}

int main()
{
    int a, b, c, ans;
    scanf("%d %d %d", &a, &b, &c);
    
    ans = gcd(a, b, c);
    printf("%d", ans);
    
    return 0;
}
