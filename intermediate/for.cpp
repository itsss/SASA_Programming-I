#include <stdio.h>

int main()
{
	long long int cnt = 0; 
	//cnt�� 1~9999999�� ���� �����ؾ� �ϹǷ� long long int ���� 
	
	for(int i = 1; i < 10000000; i++) cnt = cnt + i; 
	//long long int ������ cnt�� i�� �Ź� ����  
	
	printf("%lld", cnt); 
	//%lld�� ��� (long long int ���) 
}
