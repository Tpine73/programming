<%@ page language="java" import="java.sql.*, javax.sql.DataSource, java.io.*, java.util.*, java.time.*" contentType= "text/html;charset=utf8" pageEncoding="utf8"%>
<% request.setCharacterEncoding("UTF-8");
   String message = "";%>
<HTML>
	<HEAD>      
		<script language="javascript">
			// 전달받은 메시지 출력
			function showMessage( message )
			{
				if ( ( message != null ) && ( message != "" ) && ( message.substring( 0, 3 ) == " * " )  ) 
				{
					alert( message );
				}
			}     
			// 지정한 url로 이동하는 함수 
			function move( url )	
	 		{
				document.formm.action = url;
				document.formm.submit();
			}
		</script>
	</HEAD>
	<BODY onLoad="showMessage( '<%=request.getParameter( "message" )%>' );" >
		<!-- 화면구성 -->
		<BR> 
		<form name = "formm" method = "post">				
			&nbsp; &nbsp; &nbsp; 
			책 제목 : <INPUT TYPE="text" NAME="message" SIZE="60"> 
		</form>  
		 &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   
		<INPUT TYPE = "button" value = "책 제목 검색" onClick="javascript:move( './search.jsp' );">
		<INPUT TYPE = "button" value = "새 책  추가" onClick="javascript:move( './add.jsp' );">	
		<INPUT TYPE = "button" value = "책 삭제" onClick="javascript:move( './delete.jsp' );">	
		<BR> <BR> &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
		<BR> <BR>  

<%@ include file="./SQLconstants.jsp"%>
<%
		// 전달 받은 메시지 확인
		message = request.getParameter( "message" ); 
		message = ( ( ( message == null ) || message.equals( "" ) ) ? "_%" : message );

		// MySQL 관련 변수
		Connection Conn = null;
		Statement  stmt = null;
		ResultSet  rs = null;

		try
		{
			// MySQL 드라이버 연결
			Class.forName( jdbc_driver ); 
			Conn = DriverManager.getConnection( mySQL_database, mySQL_id, mySQL_password ); 
			stmt = Conn.createStatement();

			// 검색 실행 및 결과 출력
			String query = "select * from book where title like '%" + message + "%';";
			message = message + "와 관련된 책을 찾았습니다"; 
			rs = stmt.executeQuery( query );
			while( rs.next() )
			{			
				out.print( "<BR>ID : " + rs.getString(1) 
						+ "<BR> 책제목 : " + rs.getString(2) 
						+ "<BR> 저자 : "+ rs.getString(3) 
						+ "<BR> 출판사 : " + rs.getString(4) 
						+ "<BR> 출판일 : " + rs.getString(5) 
						+ "<BR> <img src = '" + rs.getString(6) + "' height='280' width='180'> <br>" );
			}

			// MySQL 드라이버 연결 해제
			rs.close(); 
			stmt.close();
			Conn.close();
		}
		// 예외 처리
		catch( SQLException e )
		{
			out.print( e.getMessage() );
		}
		catch( Exception e ) 
		{
			out.print( e.getMessage() );
		}    
%>
<%@ include file="./writeLog.jsp"%>
	</BODY>
</HTML>
 