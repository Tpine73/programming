#include <stdio.h> 								

// 프로그램시작 
int main()
{
	// 년, 월, 일 초기화
	int year  = 0;
	int month = 0;
	int day   = 0;

	// 사용자의 생년월일을 입력 
	// 년도를 입력 
	printf( "당신이 태어난 년도를 입력하세요: " );				
	scanf( "%d", &year );							

	// 월을 입력 
	printf( "당신이 태어난 달을 입력하세요: " );				
	scanf( "%d", &month );							

	// 일을 입력 
	printf( "당신이 태어난 날을 입력하세요: " );				
	scanf( "%d", &day );							

	// 사용자의 생년월일을 출력 
	printf( "\n당신은 %d년 %d월 %d일에 태어났군요. \n당신은 ♪~ 사랑받기 위해 ♪~ 태어난 사람 ♬~~ \n", year, month, day ); 

	// 프로그램 종료 
	return 0;
}

