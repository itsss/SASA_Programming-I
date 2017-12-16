/*
 약수의 합 (L)
 한 정수 n을 입력받아서 1부터 n까지의 모든 약수의 합을 구하는 프로그램을 작성하시오.
 예) 10의 약수는 1, 2, 5, 10이고, 이 값들의 합은 18이다.
 
 <입력>
 정수 n(1 <= n <= 10,000,000,000)
 10
 
 <출력>
 1부터 n까지의 모든 약수들의 합
 18

 */
#include <stdio.h>

long long n, sum;
int main()
{
    scanf("%lld", &n);
    for(long long i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            sum += i + n / i;
            if(i == n / i) sum -= i;
        }
    }
    printf("%lld", sum);
}
