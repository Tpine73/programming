#include <stdio.h>
#include <string.h> 				

// 프로그램시작 
int main()
{																																				
	// 한 칸당 최대 32byte 문자열을 저장할 수 있는 5칸씩 4줄로 구성된 3차원 배열을 선언 및 초기화  
	char seat[4][5][32] = { '\0' };
	// 한 칸당 최대 32byte 문자열을 저장할 수 있는 1차원 배열을 선언 
	char reservedSeat[32] = "A1";

	do
	{																																			
	  // 예약 좌석은 (예약)으로 출력하면서 
	  strcpy( seat[ (int)( reservedSeat[0] - 'A' ) ][ (int)( reservedSeat[1] - '1' ) ], "(예약)" );	

	  // 전체 좌석에 대한 현재 예약 상태 출력 
	  printf( "#   %d %6d %6d %6d %6d\n", 1, 2, 3, 4, 5 ); 
	  printf( "A %6s %6s %6s %6s %6s\n", seat[0][0], seat[0][1], seat[0][2], seat[0][3], seat[0][4] );
	  printf( "B %6s %6s %6s %6s %6s\n", seat[1][0], seat[1][1], seat[1][2], seat[1][3], seat[1][4] );
	  printf( "C %6s %6s %6s %6s %6s\n", seat[2][0], seat[2][1], seat[2][2], seat[2][3], seat[2][4] );
	  printf( "D %6s %6s %6s %6s %6s\n", seat[3][0], seat[3][1], seat[3][2], seat[3][3], seat[3][4] );
		
	  // 사용자에게 예약 좌석 입력 받기 
	  printf( "A2, B4, 0(종료)와 같이, 예약 희망 좌석을 입력하세요 : " );
	  scanf( "%s", reservedSeat ); 

	// 입력 좌석이 유효하면 좌석 예약 및 출력을 반복 
	} while( ( 'A' <= reservedSeat[0] ) && ( reservedSeat[0] <= 'D' ) 		
	    && ( '1' <= reservedSeat[1] ) && ( reservedSeat[1] <= '5' ) );		
	
	// 프로그램 종료 
	return 0;
}																																				

