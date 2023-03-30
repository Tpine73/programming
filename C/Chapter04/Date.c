#include <stdio.h> 

// 프로그램 시작 
int main(void) 
{
	// 날짜 및 요일 초기화
	int day = 0;
	int lastDay = 0;
	int week = 0;
	int sunday = 0;		
	int firstDay = 0;

	// 시작요일 및 말일 입력 받기 
	// 시작요일을 입력 받기
	printf( "일(0),월(1),화(2),수(3),목(4),금(5),토(6) 중에서 \n이번달 1일은 무슨요일인가요 : " );
	scanf("%d", &firstDay );
	
	// 말일 입력 받기 
	printf( "이번달 말일은 언제인가요 : " );
	scanf("%d", &lastDay );

	// 1일 이전은 공백 출력 
	for( week = sunday; week < firstDay; week++ )
	{
		printf( "     " );
	}
	
	// 1일부터 말일까지 출력 
	for ( day = 1; day <= lastDay; week++, day++ )
	{
		// 새로운 일주일은 새 줄에 출력 
		if ( ( week > 0 ) && ( ( week % 7 ) == sunday ) )
		{
			printf( "\n");
		}
		// 일주일을 한줄에 출력 
		printf( "%5d", day );									
	}

	// 프로그램 종료 
	return 0;
}

