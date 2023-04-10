<%
	try 
	{
		// 로그 데이터 출력
		BufferedWriter writer = new BufferedWriter( new FileWriter( logFileName, true ) );
		writer.append( "\nTime: " + LocalDate.now() + " " + LocalTime.now() 	// 접속 시간	
				+ " SessionID: " + session.getId()			// 접속 시간	
				+ " URI: " + request.getRequestURI()			// 현재 페이지 
				+ " Previous: " + request.getHeader("referer") 		// 접속 경로(이전페이지)
				+ " Browser: " + request.getHeader("User-Agent") 	// 접속 브라우저	
				+ " Message: " + message );
		writer.close();
	} 
	// 예외 처리
	catch (IOException e) 
	{
		e.printStackTrace();
	}
%>
