#include <stdio.h>

int main()
{
	long long int cnt = 0; 
	//cnt는 1~9999999의 합을 저장해야 하므로 long long int 선언 
	
	for(int i = 1; i < 10000000; i++) cnt = cnt + i; 
	//long long int 변수인 cnt에 i를 매번 더함  
	
	printf("%lld", cnt); 
	//%lld로 출력 (long long int 출력) 
}
