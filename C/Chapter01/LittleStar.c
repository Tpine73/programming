#include <stdio.h> 					
#include <unistd.h>

// 프로그램시작 
int main()
{
	// 먼저 노란 별 모양을 출력 
	printf(" \033[33m \n" );
	printf("              &@ \n");
	printf("             (@@@. \n");
	printf("            #@@@@@ \n");
	printf("           /@@@@@@@ \n");
	printf("  @@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
	printf("    /@@@@@@@@@@@@@@@@@@@@@. \n");
	printf("       @@@@@@@@@@@@@@@@ \n");
	printf("        #@@@@@@@@@@@@@ \n");
	printf("        @@@@@@@@@@@@@@@ \n");
	printf("       @@@@@@@   @@@@@@ \n");
	printf("       @@@           @@@ \n");
	printf("       @               @ \033[0m \n");
	
	// 작은별 노래를 박자에 맞춰 출력 
	printf("반");
	sleep(1);
	printf("짝");
	sleep(1);
	printf(" 반");
	sleep(1);
	printf("짝");
	sleep(1);
	printf(" 작");
	sleep(1);
	printf("은");
	sleep(1);
	printf(" 별");
	sleep(2);
	printf(" 아");
	sleep(1);
	printf("름");
	sleep(1);
	printf("답");
	sleep(1);
	printf("게");
	sleep(1);
	printf(" 비");
	sleep(1);
	printf("치");
	sleep(1);
	printf("네");
	
	// 프로그램 종료 
	return 0;
}

