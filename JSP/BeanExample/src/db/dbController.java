package db;

import java.sql.*;

public class dbController
{	
	public dbController()
	{
	}
	
	private Connection getConnection()
	{	String dbuser = new String("root");
		String dbpass = new String("rajiv");
		Connection conn = null;

		try
		{	conn = DriverManager.getConnection("jdbc:mysql://localhost/college?user="+dbuser+"&password="+dbpass);
		}
		catch (SQLException e)
		{	System.out.println("SQLException = "+e.getMessage());
			System.out.println("SQLError Code = "+e.getErrorCode());
			conn = null;
		}

		return conn;
	}

	public ResultSet getSelectData(String sqlString)
	{	Connection conn = getConnection();
		ResultSet rs = null;
		Statement stmt = null;

		if (conn == null)
		{	return null;			
		}

		try
		{	stmt = conn.createStatement();
			stmt.executeQuery(sqlString);
			rs = stmt.getResultSet();
			stmt.close();
			stmt = null;
			conn.close();
			conn = null;
		}
		catch (SQLException e)
		{	System.out.println("SQLException = "+e.getMessage());
			System.out.println("SQL Error Code = "+e.getErrorCode());
			rs = null;
		}
		finally
		{	if (stmt != null)
			{	try
				{	stmt.close();		
				}
				catch (SQLException e)
				{	System.out.println("SQLException = "+e.getMessage());
					System.out.println("SQL Error Code = "+e.getErrorCode());
				}
				stmt = null;
			}

			if (conn != null)
			{	try
				{	conn.close();
				}
				catch (SQLException e)
				{	System.out.println("SQLException = "+e.getMessage());
					System.out.println("SQL Error Code = "+e.getErrorCode());
				}
				conn = null;
			}
		}

		return rs;
	}

	public Integer getUpdateData(String sqlString)
	{	Connection conn = getConnection();
		Statement stmt = null;
		Integer affectedRows = -1;

		if (conn == null)
		{	return -1;
		}

		try
		{	stmt = conn.createStatement();
			stmt.executeUpdate(sqlString);
			affectedRows = stmt.getUpdateCount();
			stmt.close();
			stmt = null;
			conn.close();
			conn = null;
		}
		catch (SQLException e)
		{	System.out.println("SQLException = "+e.getMessage());
			System.out.println("SQL Error Code = "+e.getErrorCode());
			affectedRows = -1;
		}
		finally
		{	if (stmt != null)
			{	try
				{	stmt.close();		
				}
				catch (SQLException e)
				{	System.out.println("SQLException = "+e.getMessage());
					System.out.println("SQL Error Code = "+e.getErrorCode());
				}
				stmt = null;
			}

			if (conn != null)
			{	try
				{	conn.close();
				}
				catch (SQLException e)
				{	System.out.println("SQLException = "+e.getMessage());
					System.out.println("SQL Error Code = "+e.getErrorCode());
				}
				conn = null;
			}
		}

		return affectedRows;
	}
}