<%@ page language="java" import="java.sql.*, javax.sql.DataSource, java.io.*, java.util.*, java.time.*" contentType= "text/html;charset=utf8" pageEncoding="utf8"%>
<%@ include file="SQLconstants.jsp"%>
<% 
	request.setCharacterEncoding("UTF-8");
	String id = request.getParameter( "id" );
 	String title = request.getParameter( "title" );
	String author = request.getParameter( "author" );
	String publisher = request.getParameter( "publisher" );
	String date = request.getParameter( "date" );
	String image = request.getParameter( "image" );
	String message = null;

	try
	{
		// MySQL 드라이버 연결 
		Class.forName( jdbc_driver ); 
		Connection con = DriverManager.getConnection( mySQL_database, mySQL_id, mySQL_password ); 
		Statement stmt = con.createStatement();

		// MySQL 책 추가 실행 	
		String query = "INSERT INTO book( id, title, author, publisher, date, image ) VALUES ( '" + id + "', '" + title + "', '" + author + "', '" + publisher + "', '" + date + "', '" + image + "');"; 
		query = new String( query.getBytes("utf-8") );
		if ( stmt.executeUpdate( query ) > 0 )
		{
			message = "책 (" + title + ")을 등록하였습니다"; 
		}
		else 
		{
			message = "책 (" + title + ")을 등록할 수 없습니다 "; 
		}

		// MySQL 드라이버 연결 해제
		stmt.close();
		con.close();
	} 
	// 예외 처리
	catch(SQLException e)
	{
		message = e.getMessage();
	}
	catch( Exception e ) 
	{
		message = e.getMessage();
	}    
%>
<%@ include file="./writeLog.jsp"%>

<form name = "frm" method = "post" action = "./search.jsp" >
	<input type = 'hidden' name = 'message' value = ' * <%=message.replace( "'", "" )%>' >
</form>
<script language="javascript">
	document.frm.submit();
</script>

