#include <stdio.h> 

// 프로그램시작 
int main()
{
	// 점수 초기화
	int score = -1;		

	while( score < 0 ) 
	{
		// 점수를 입력 
		printf( "0점 ~ 100점 사이의 점수를 입력하세요: " );
		scanf( "%d", &score );

		// 사용자가 점수를 잘못 입력하면 다시 입력 안내 
		if ( ( score < 0 ) || ( 100 < score ) )  
		{
			score = -1;	
			continue; 
		}
		
		// 사용자가 입력한 점수를 출력 
		printf( "\n당신의 점수는 %d점입니다.\n", score );		
	} 					
	
	// 프로그램 종료 
	return 0;
}

