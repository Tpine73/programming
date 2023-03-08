#include <stdio.h> 					

// 프로그램 시작 
int main()
{
	// 알파벳 변수 초기화
	char letter = '\0';

	// 알파벳을 입력받기  
	printf("알파벳 한 글자를 입력하세요: " );	
	scanf( "%c", &letter );				

	// 입력값 출력하기 
	printf( "%c를 입력했군요^^", letter );		

	// 프로그램 종료 
	return 0;
}

