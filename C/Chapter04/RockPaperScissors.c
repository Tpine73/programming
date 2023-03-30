#include <stdio.h> 

// 프로그램시작 
int main()
{
	int player = 0;		

	do {	 
		// 사용자가 가위바위보중 하나를 선택 
		printf( "가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
		scanf( "%d", &player );

	// 사용자가 가위바위보를 잘못 입력하면 다시 선택 
	} while ( ( player < 1 ) || ( 3 < player ) );	 
	
	// 사용자가 선택한 결과를 출력 
	printf( "\n%d를 선택했습니다.\n", player ); 
	
	// 프로그램 종료 
	return 0;
}

