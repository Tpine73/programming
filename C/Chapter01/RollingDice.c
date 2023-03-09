#include <stdio.h> 					
#include <unistd.h>

// 프로그램 시작 
int main()
{
	// 1번 주사위 출력  
	printf(" \033[H\033[J");
	printf(" +-------+ \n");
	printf(" |       | \n");
	printf(" |   O   | \n");
	printf(" |       | \n");
	printf(" +-------+ \n");
	
	// 잠시 후 2번 주사위 출력  
	sleep(2);
	printf(" \033[H\033[J");
	printf(" +-------+ \n");
	printf(" | O     | \n");
	printf(" |       | \n");
	printf(" |     O | \n");
	printf(" +-------+ \n");
	
	// 잠시 후 3번 주사위 출력  
	sleep(2);
	printf(" \033[H\033[J");
	printf(" +-------+ \n");
	printf(" | O     | \n");
	printf(" |   O   | \n");
	printf(" |     O | \n");
	printf(" +-------+ \n");
	
	// 잠시 후 4번 주사위 출력  
	sleep(2);
	printf(" \033[H\033[J");
	printf(" +-------+ \n");
	printf(" | O   O | \n");
	printf(" |       | \n");
	printf(" | O   O | \n");
	printf(" +-------+ \n");
	
	// 잠시 후 5번 주사위 출력  
	sleep(2);
	printf(" \033[H\033[J");
	printf(" +-------+ \n");
	printf(" | O   O | \n");
	printf(" |   O   | \n");
	printf(" | O   O | \n");
	printf(" +-------+ \n");
	
	// 잠시 후 6번 주사위 출력  
	sleep(2);
	printf(" \033[H\033[J");
	printf(" +-------+ \n");
	printf(" | O   O | \n");
	printf(" | O   O | \n");
	printf(" | O   O | \n");
	printf(" +-------+ \n");
	
	// 프로그램 종료 
	return 0;
}

