#include <stdio.h> 

// 프로그램시작 
int main()
{
	// 온도 초기화
	int temperature = 0;		

	while ( 1 ) 
	{ 
		// 온도를 입력 
		printf( "섭씨 -100도부터 100도 사이에서 현재 온도는 몇 도인가요 : " );
		scanf( "%d", &temperature );

		// 사용자가 올바르게 입력한 경우만 온도를 출력 
		if ( ( -100 <= temperature ) && ( temperature <= 100 ) ) 
		{
			printf( "현재 기온은 섭씨 %d도입니다.\n", temperature );		
			break; 
		}
	}

	// 프로그램 종료 
	return 0;
}

