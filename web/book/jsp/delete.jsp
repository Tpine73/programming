<%@ page language="java" import="java.sql.*, javax.sql.DataSource" contentType= "text/html;charset=utf8" pageEncoding="utf8"%>
<HTML>
	<BODY>
		<BR> 
		<!-- 화면구성 -->
		<form name = "formm" method = "post" action = "./deleteSQL.jsp">				
			&nbsp; &nbsp; &nbsp; 
			삭제할 책 ID : <INPUT TYPE="text" NAME="id" SIZE="60"> 
		</form>  
		 &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  
		 <INPUT TYPE="button" value="삭제" onClick="javascript:document.formm.submit();"> &nbsp; 
		<BR><BR>  
<%@ include file="./SQLconstants.jsp"%>
<% 
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

			// MySQL 검색 실행 및 결과 출력
			String query = "select * from book;";
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
	</BODY>
</HTML>
 