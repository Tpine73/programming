#include <stdio.h> 

// 프로그램 시작 
int main()
{
	int lowercase = 0;

	do {									
		// 알파벳 소문자에 해당하는 ASCII 코드 숫자를 입력받기  
		printf("ASCII 코드에서 알파벳 소문자에 해당하는 97 ~ 122 사이의 숫자를 입력하세요: " );
		scanf( "%d", &lowercase ); 

		// ASCII 코드 숫자 및 문자 출력하기 
		printf("숫자 %d는 문자 %c에 해당합니다^^\n", lowercase, lowercase );

	// 이 때, 입력값이 알파벳 소문자가 아니면 다시 입력 안내 
	} while( !( ( 'a' <= lowercase ) &&  ( lowercase <= 'z' ) ) );			
	
	// 프로그램 종료 
	return 0;
}

