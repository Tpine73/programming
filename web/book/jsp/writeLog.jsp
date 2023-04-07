<%
	try 
	{
		// 로그 데이터 출력
		BufferedWriter writer = new BufferedWriter( new FileWriter( logFileName, true ) );
		writer.append( "\nTime: " + LocalDate.now() + " " + LocalTime.now()
				+ " SessionID: " + session.getId()
				+ " URI: " + request.getRequestURI()
				+ " Message: " + message );
		writer.close();
	} 
	// 예외 처리
	catch (IOException e) 
	{
		e.printStackTrace();
	}
%>
