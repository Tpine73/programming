<%
	try 
	{
		// �α� ������ ���
		BufferedWriter writer = new BufferedWriter( new FileWriter( logFileName, true ) );
		writer.append( "\nTime: " + LocalDate.now() + " " + LocalTime.now()
				+ " SessionID: " + session.getId()
				+ " URI: " + request.getRequestURI()
				+ " Message: " + message );
		writer.close();
	} 
	// ���� ó��
	catch (IOException e) 
	{
		e.printStackTrace();
	}
%>
