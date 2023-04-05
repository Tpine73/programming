#include <stdio.h> 

// 프로그램 시작 
int main()
{																																			
	// 5칸짜리 배열을 선언하고 초기화  
	char lowercase[5] = { '\0' }; 
	char uppercase[5] = { '\0' };
	int  index = 0;

	// 알파벳 소문자 단어를 입력받기 
	printf("알파벳 소문자 단어를 입력하세요: " );
	scanf( "%s", lowercase );						

	// 알파벳 소문자 단어를 대문자 단어로 변환하기 
	for ( index = 0; lowercase[ index ] != '\0'; index++ )			
	{																																			
		uppercase[ index ] = lowercase[ index ] - 'a' + 'A';		
	}																																			

	// 입력값 출력하기 
	printf("소문자 %s의 대문자는 %s입니다^^", lowercase, uppercase );	

	// 프로그램 종료 
	return 0;
}																																			

