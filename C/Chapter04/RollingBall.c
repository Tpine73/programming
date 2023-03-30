#include <stdio.h>
#include <windows.h>  

// 프로그램 시작 
int main() 
{
	int frameLength = 0, frame = 0, blank = 0;

	// 애니메이션 총 프레임 길이 입력 받기 
	printf( "애니메이션 총 프레임 길이를 입력하세요: ");
	scanf( "%d", &frameLength );

	// 첫번째 프레임부터 마지막 프레임까지 
	for( frame = 1; frame <= frameLength; frame ++ )
	{	
		// 0.2초마다 화면 초기화  
		Sleep( 200 );				
		system( "cls" );			

		// 프레임마다 이동거리 1칸씩 증가후  
		for( blank = 1; blank <= frame; blank ++ )
		{
			printf ( " " );
		}
			
		// 굴러가는 공 출력  
		printf ( "O" );
	}

	//프로그램 종료  
	return 0;
}

