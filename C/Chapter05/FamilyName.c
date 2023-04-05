#include <stdio.h>
#include <string.h> 				

// 프로그램시작 
int main()
{																																				
	// 한 칸당 최대 10byte 문자열을 저장할 수 있는 배열을 선언   
	char nameA[10] = { '\0' };					
	char nameB[10] = { '\0' };					
	
	// 이름 2개를 입력  
	printf( "A양, 이름을 입력하세요: " );
	scanf( "%s", nameA );
	printf( "B군, 이름을 입력하세요: " );
	scanf( "%s", nameB );

	// 이름에서 첫 음절(2byte)을 비교하기 
	// 첫 음절이 같으면 성이 같습니다 출력 
	if ( !strncmp( nameA, nameB, 2 ) )				
	{																																			
		printf( "%s과 %s은 성이 같습니다. ", nameA, nameB );
	}																																			
	// 첫 음절이 다르면 성이 다릅니다 출력 
	else
	{																																			
		printf( "%s과 %s은 성이 다릅니다. ", nameA, nameB );
	}																																			
	
	// 프로그램 종료 
	return 0;
}																																				

