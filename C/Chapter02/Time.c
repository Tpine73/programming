#include <stdio.h>

// 프로그램 시작 
int main()
{
	int totalSeconds=0, change=0;						
	int hours=0, minutes=0, seconds=0;					

	// 사용자에게 전체 초를 입력받기 
	printf( "초를 입력하세요 : " );
	scanf( "%d", &totalSeconds ); 							
	change = totalSeconds;								

	// 시, 분, 초를 계산 
	// 전체 초가 몇 시간인지 계산 
	hours  = change / ( 60 * 60 );							

	// 남은 시간 재조정
	change = change % ( 60 * 60 );							

	// 남은 시간이 몇 분인지 계산 
	minutes = change / 60;								

	// 남은 시간이 몇 초인지 계산 
	seconds = change % 60;								

	// 시, 분, 초를 출력 
	printf( "%d초는 %d시간 %d분 %d초입니다.", totalSeconds, hours, minutes, seconds );

	// 프로그램 종료 
	return 0;
}

