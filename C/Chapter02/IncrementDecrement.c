#include <stdio.h>

// 프로그램 시작 
int main()
{
	// 변수 선언 및 초기화
	int a = 3, b = 3, c = 0, d = 0;

	// 증가연산자 ++의 전위연산자와 후위연산자 실습  
	c = ++a;
	d = b++;

	// 증가연산자의 실습결과 출력 
	printf( "a = 3일 때 c = ++a 적용 후 결과 a = %d, c = %d\n", a, c );		
	printf( "b = 3일 때 d = b++ 적용 후 결과 b = %d, d = %d\n", b, d );		

	// 감소연산자 --의 전위연산자와 후위연산자 실습 
	c = --a;
	d = b--;

	// 감소연산자의 실습결과 출력 
	printf( "a = 4일 때 c = --a 적용 후 결과 a = %d, c = %d\n", a, c );		
	printf( "b = 4일 때 d = b-- 적용 후 결과 b = %d, d = %d\n", b, d );		

	// 프로그램 종료 
	return 0;
}

