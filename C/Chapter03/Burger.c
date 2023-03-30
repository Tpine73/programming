#include <stdio.h>
 
// 프로그램 시작 
int main() 
{
	int favoriteBurger = 0;

	// 사용자에게 햄버거 입력받기 
	printf( "햄버거(1), 치즈버거(2), 더블패티버거(3) 중 하나를 숫자로 입력하세요: ");
	scanf( "%d", &favoriteBurger );

	// 햄버거 그림 출력 
	switch ( favoriteBurger )							
	{
		// 1을 선택하면 초록 야채와 빨간 패티의 햄버거를 출력 
		case 1:					
		  printf( " \033[33m  (@@@@@@@@)\033[0m\n" );
		  printf( " \033[33m (@@@@@@@@@@)\033[0m\n" );
		  printf( " \033[32m ************\033[0m\n" );
		  printf( " \033[31m $$$$$$$$$$$$\033[0m\n" );
		  printf( " \033[38;5;94m (@@@@@@@@@@)\033[0m\n" );
		  break;								
		// 2를 선택하면 노란 치즈가 추가된 치즈버거를 출력 
		case 2:					
		  printf( " \033[33m  (@@@@@@@@)\033[0m\n" );
		  printf( " \033[33m (@@@@@@@@@@)\033[0m\n" );
		  printf( " \033[32m ************\033[0m\n" );
		  printf( " \033[38;5;226m ############\033[0m\n" );
		  printf( " \033[31m $$$$$$$$$$$$\033[0m\n" );
		  printf( " \033[38;5;94m (@@@@@@@@@@)\033[0m\n" );
		  break;								
		// 3을 선택하면 빨간 패티가 두 개인 더블패티버거를 출력 
		default:					
		  printf( " \033[33m  (@@@@@@@@)\033[0m\n" );
		  printf( " \033[33m (@@@@@@@@@@)\033[0m\n" );
		  printf( " \033[31m $$$$$$$$$$$$\033[0m\n" );
		  printf( " \033[32m ************\033[0m\n" );
		  printf( " \033[31m $$$$$$$$$$$$\033[0m\n" );
		  printf( " \033[38;5;94m (@@@@@@@@@@)\033[0m\n" );
	}

	// 프로그램 종료 
	return 0;
}
