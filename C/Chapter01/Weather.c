#include <stdio.h>											

// 프로그램 시작 
int main()
{
	// 날씨 내용을 저장하는 변수 초기화
	char month[16] = "";
	char day[16] = "";
	char week[16] = "";
	char weatherReport[16] = "";
	char precaution[16] = "";
	int  lowSeoul = 0;
	int  lowChuncheon = 0;
	int  lowDaejeon = 0;
	int  lowGwangju = 0;
	int  lowBusan = 0;
	int  lowJeju = 0;
	int  highSeoul = 0;
	int  highChuncheon = 0;
	int  highDaejeon = 0;
	int  highGwangju = 0;
	int  highBusan = 0;
	int  highJeju = 0;
	
	// 주요 날씨 내용을 입력 
	// 오늘날짜, 기상특보, 주의사항을 입력
	printf( "오늘은 몇 월인가요: " );								
	scanf( "%s", month );										
	printf( "오늘은 몇 일인가요: " );								
	scanf( "%s", day );										
	printf( "오늘은 무슨 요일인가요: " );								
	scanf( "%s", week );										
	printf( "오늘의 기상특보는 무엇인가요: " );							
	scanf( "%s", weatherReport );								
	printf( "오늘의 주의사항은 무엇인가요: " );							
	scanf( "%s", precaution );									

	// 지역별 최저 기온 정보를 입력
	// 서울, 춘천, 대전, 광주, 부산, 제주의 최저 기온을 입력
	printf( "\n서울 최저기온은 몇 도인가요: " );							
	scanf( "%d", &lowSeoul );								
	printf( "춘천 최저기온은 몇 도인가요: " );							
	scanf( "%d", &lowChuncheon );							
	printf( "대전 최저기온은 몇 도인가요: " );							
	scanf( "%d", &lowDaejeon );							
	printf( "광주 최저기온은 몇 도인가요: " );							
	scanf( "%d", &lowGwangju ); 							
	printf( "부산 최저기온은 몇 도인가요: " );							
	scanf( "%d", &lowBusan );							
	printf( "제주 최저기온은 몇 도인가요: " );							
	scanf( "%d", &lowJeju );								

	// 지역별 최고 기온 정보를 입력 
	// 서울, 춘천, 대전, 광주, 부산, 제주의 최고 기온을 입력
	printf( "\n서울 최고기온은 몇 도인가요: " );							
	scanf( "%d", &highSeoul );							
	printf( "춘천 최고기온은 몇 도인가요: " );							
	scanf( "%d", &highChuncheon );							
	printf( "대전 최고기온은 몇 도인가요: " );							
	scanf( "%d", &highDaejeon );							
	printf( "광주 최고기온은 몇 도인가요: " );							
	scanf( "%d", &highGwangju ); 							
	printf( "부산 최고기온은 몇 도인가요: " );							
	scanf( "%d", &highBusan );							
	printf( "제주 최고기온은 몇 도인가요: " );							
	scanf( "%d", &highJeju );							
	
	// 날씨 정보를 바탕으로 기상 뉴스를 자동으로 생성 
	printf( "\n%s월 %s일 %s요일, 아침 날씨입니다.", month, day, week );							
	printf( "\n아침 최저기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도로 예상됩니다.", 
		  lowSeoul, lowChuncheon, lowDaejeon, lowGwangju, lowBusan, lowJeju );
	printf( "\n낮 최고기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도로 예상됩니다.", 
		  highSeoul, highChuncheon, highDaejeon, highGwangju, highBusan, highJeju );
	printf( "\n일부 지방에 %s가 발효중입니다. 출근길 %s 운전에 유의해야 합니다.", weatherReport, precaution ); 
	printf( "\n이상 날씨였습니다.\n웨더봇 기자" );										

	// 프로그램 종료 
	return 0;
}

