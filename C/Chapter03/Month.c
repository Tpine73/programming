#include <stdio.h>
 
// 프로그램 시작 
int main(void) 
{
	int month = 0;

	// 사용자에게 달을 입력받기 
	printf( "1월 ~ 12월 사이의 월을 입력하세요: ");
	scanf( "%d", &month );

	// 입력받은 달의 영어이름을 출력 
	switch ( month )								
	{
		// 1월이면 January를 출력 
		case 1:								
			printf( "1월의 영어이름은 January 입니다");
			break;								
		// 2월이면 February를 출력 
		case 2:							
			printf( "2월의 영어이름은 February 입니다");
			break;								
		// 3월이면 March를 출력 
		case 3:								
			printf( "3월의 영어이름은 March 입니다");
			break;								
		// 4월이면 April를 출력 
		case 4:								
			printf( "4월의 영어이름은 April 입니다");
			break;								
		// 5월이면 May를 출력 
		case 5:								
			printf( "5월의 영어이름은 May 입니다");
			break;								
		// 6월이면 June를 출력 
		case 6:								
			printf( "6월의 영어이름은 June 입니다");
			break;								
		// 7월이면 July를 출력 
		case 7:							
			printf( "7월의 영어이름은 July 입니다");
			break;								
		// 8월이면 August를 출력 
		case 8:								
			printf( "8월의 영어이름은 August 입니다");
			break;								
		// 9월이면 September를 출력 
		case 9:								
			printf( "9월의 영어이름은 September 입니다");
			break;								
		// 10월이면 October를 출력 
		case 10:									
			printf( "10월의 영어이름은 October 입니다");
			break;								
		// 11월이면 November를 출력 
		case 11:									
			printf( "11월의 영어이름은 November 입니다");
			break;								
		// 12월이면 December를 출력 
		default:								
			printf( "12월의 영어이름은 December 입니다");
	}

	// 프로그램 종료 
	return 0;
}

