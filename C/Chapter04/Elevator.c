#include <stdio.h>

// 프로그램 시작 
int main()
{
	int currentFloor = 1;								
	int destinationFloor = 0;						

	// 사용자에게 엘리베이터에서 내릴 층수 입력받기 
	printf( "1층~5층 중 몇 층으로 가시나요 : " );
	scanf( "%d", &destinationFloor ); 

	// 엘리베이터 문이 닫히면서 안내 메시지 출력 
	printf( "%d층으로 올라갑니다. 문이 닫힙니다.\n", destinationFloor );						

	// 사용자가 1층부터 내릴 층수까지 엘리베이터가 한 층씩 이동하기 
	while( currentFloor <= destinationFloor )					
	{
		// 현재 층수 출력하고 한층 이동하기 
		printf( "%d↑\n", currentFloor );
		currentFloor++;							
	}

	// 엘리베이터 문이 열리면서 도착 메시지 출력 
	printf( "딩~동~댕~동~~ ♪~♬~♩~~ %d층입니다. 문이 열립니다", destinationFloor )						

	// 프로그램 종료 
	return 0;
}

