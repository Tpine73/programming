#include <stdio.h>

// 프로그램시작 
int main()
{																																				
	// 3칸짜리 배열을 선언  
	int score[3] = { 0 };
	int index = 0;
	int max = 0;																													
	int temp = 0;
	
	// 점수들 입력  
	for( index = 0; index < 3; index ++ )																								
	{																																				
		printf( "0점 ~ 100점 사이의 점수를 입력하세요: " );
		scanf( "%d", &score[ index ] );
	}																																				 

	// 점수 정렬 
	// 영역의 마지막 칸에 가장 큰 값을 저장하면서, 영역을 한 칸씩 앞으로 좁혀가기 
	for ( max = 2; max >= 0; max -- )																							
	{																																				
		// 영역의 첫번째 칸부터 인접한 두 값을 비교하면서  
		for ( index = 0; index < max; index ++ )			
		{																																				
			// 앞이 뒤보다 크면 두 값을 맞바꾸기하면서 뒤쪽에 큰 값을 저장 
			if ( score[ index ] > score[ index + 1 ] )
			{																																				
				temp = score[ index ];
				score[ index ] = score[ index + 1 ];						
				score[ index + 1 ] = temp;							
			}																																				
		}																																			
	}																																				

	// 정렬된 점수 출력 
	for ( index = 0; index < 3; index ++ )																						
	{																																				
		printf( "%d) %d ", index + 1, score[ index ] );
	} 																																				

	// 프로그램 종료 
	return 0;
}																																				

