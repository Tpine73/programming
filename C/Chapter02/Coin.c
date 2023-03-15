#include <stdio.h>

// 프로그램 시작 
int main()
{
	int payment=0, change=0;								
	int coin500=0, coin100=0, coin50=0, coin10=0;					

	// 사용자에게 돈을 입력받기 
	printf( "돈을 입력하세요: " );
	scanf( "%d", &payment ); 								
	change = payment;									

	// 동전 개수를 계산 
	// 잔액에서 500원짜리 동전 개수 계산하고, 잔액 재조정 
	coin500 = change / 500;								
	change = change % 500;								

	// 잔액에서 100원짜리 동전 개수 계산하고, 잔액 재조정 
	coin100 = change / 100;								
	change = change % 100;								

	// 잔액에서 50원짜리 동전 개수 계산하고, 잔액 재조정 
	coin50  = change / 50;									
	change = change % 50;									

	// 잔액에서 10원짜리 동전 개수 계산하고, 잔액 재조정 
	coin10  = change / 10;									
	change = change % 10;									

	// 동전 개수를 출력 
	printf( "%d원을 ", payment );
	printf( "\n500원짜리 동전 %d개, ", coin500 );
	printf( "\n100원짜리 동전 %d개,",  coin100 );
	printf( "\n 50원짜리 동전 %d개,",  coin50 );
	printf( "\n 10원짜리 동전 %d개로", coin10 ); 
	printf( "\n 거슬러 드립니다." );

	// 프로그램 종료 
	return 0;
}

