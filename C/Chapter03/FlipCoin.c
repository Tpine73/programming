#include <stdio.h>
#include <stdlib.h>							
#include <time.h>							

// 프로그램 시작 
int main()
{
	int headsOrTails = 0;
	int user = 0;

	// 먼저, 사용자는 동전의 앞면과 뒤면 중 하나를 선택	 
	printf("동전 던지기 게임을 시작합니다.\n");
	printf("앞면(0), 뒤면(1) 중 하나를 선택하세요 : ");
	scanf( "%d", &user );
	
	// 사용자가 선택한 동전 상태 출력		 
	( user == 0 )	? printf( "동전 앞면을 선택했습니다." ) : printf( "동전 뒤면을 선택했습니다.");

	// 동전을 임의로 던져서 받기		 
	srand( time( NULL ) );						
	// 동전의 상태는 1(뒤면)이 나왔다고 가정
	headsOrTails = rand() % 2;					

	// 동전 던져서 받은 결과  출력		 
	( headsOrTails == 0 )	? printf( "결과는 동전 앞면입니다. " ) : printf("결과는 동전 뒤면입니다. ");

	// 사용자가 동전의 상태를 맞추었는지 결과 출력	 
	( headsOrTails == user ) ? printf( "맞췄습니다.\n" ) : printf("틀렸습니다.\n");

	// 프로그램 종료 
	return 0;
}

