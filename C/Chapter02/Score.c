#include <stdio.h> 

// 프로그램시작 
int main()										
{
	// 점수 초기화
	int korean = 0;									
	int english = 0;								
	int mathematics = 0;								
	double average = 0.0;								
	
	// 과목별 점수를 입력 
	// 국어 점수를 입력 
	printf( "0점 ~ 100점 사이의 국어 점수를 입력하세요: " );
	scanf( "%d", &korean );

	// 영어 점수를 입력 
	printf( "0점 ~ 100점 사이의 영어 점수를 입력하세요: " );
	scanf( "%d", &english );

	// 수학 점수를 입력 
	printf( "0점 ~ 100점 사이의 수학 점수를 입력하세요: " );
	scanf( "%d", &mathematics );
	
	// 평균 점수를 계산 
	average = (double)( korean + english + mathematics ) / 3;			
	
	// 과목별 점수 및 평균을 출력 
	printf( "국어 %d점, 영어 %d점, 수학 %d점의 평균은 %.2f점입니다.", 		
						korean, english, mathematics, average );
	
	// 프로그램 종료 
	return 0;
}

