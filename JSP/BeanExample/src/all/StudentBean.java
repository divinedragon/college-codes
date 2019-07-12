package all;

import all.*;
import java.util.*;
import java.sql.*;

public class StudentBean implements java.io.Serializable
{	private String prn;
	private String name;
	private String course;
	private String address;
	private String contactno;
	private String email;
	private String hobbies;
	
	public StudentBean()
	{	prn="";
		name="";
		course="";
		address="";
		contactno="";
		email="";
		hobbies="";
	}
	
	public void setPrn(String value)
	{	prn = value;
	}
	
	public void setName(String value)
	{	name = value;
	}
	
	public void setCourse(String value)
	{	course = value;
	}
	
	public void setAddress(String value)
	{	address = value;
	}
	
	public void setContactno(String value)
	{	contactno = value;
	}
	
	public void setEmail(String value)
	{	email = value;
	}
	
	public void setHobbies(String value)
	{	hobbies = value;
	}
	
	public String getPrn()
	{	return prn;
	}
	
	public String getName()
	{	return name;
	}
	
	public String getCourse()
	{	return course;
	}
	
	public String getAddress()
	{	return address;
	}
	
	public String getContactno()
	{	return contactno;
	}
	
	public String getEmail()
	{	return email;	
	}
	
	public String getHobbies()
	{	return hobbies;
	}
	
	public String showData()
	{	String output = new String("");
	
		output += "<br/><b>Prn No</b> ==> "+getPrn();
		output += "<br/><b>Name</b> ==> "+getName();
		output += "<br/><b>Course</b> ==> "+getCourse();
		output += "<br/><b>Address</b> ==> "+getAddress();
		output += "<br/><b>Contact No.</b> ==> "+getContactno();
		output += "<br/><b>Email</b> ==> "+getEmail();
		output += "<br/><b>Hobbies</b> ==> "+getHobbies();
		
		return output;
	}
	
	public String getInsertQuery()
	{	String sqlString = new String("INSERT INTO students VALUES(");
	
		sqlString += "\""+ getPrn() + "\",";
		sqlString += "\""+ getName() + "\",";
		sqlString += "\""+ getCourse() + "\",";
		sqlString += "\""+ getAddress() + "\",";
		sqlString += "\""+ getContactno() + "\",";
		sqlString += "\""+ getEmail() + "\",";
		sqlString += "\""+ getHobbies() + "\")";
		
		return sqlString;
	}

	public String getDeleteQuery()
	{	return "DELETE FROM students WHERE prn='"+getPrn()+"'";
	}

	public String getUpdateQuery()
	{	String sqlString = new String("UPDATE students set ");
		sqlString += "name='"+getName()+"',";
		sqlString += "course='"+getCourse()+"',";
		sqlString += "address='"+getAddress()+"',";
		sqlString += "contactno='"+getContactno()+"',";
		sqlString += "email='"+getEmail()+"',";
		sqlString += "hobbies='"+getHobbies()+"'";
		sqlString += " WHERE prn='"+getPrn()+"'";
	}

	public boolean checkInDatabase()
	{	dbController db = new dbController();
		boolean hasRow = false;
		ResultSet rs = db.getUpdateData("SELECT * FROM students WHERE prn='"+getPrn()+"'");
		
		if (rs != null)
		{	while(rs.next())
			{	hasRow = true;
				break;
			}
		}
		else
		{	return false;
		}
	}

	public boolean insert()
	{	dbController db = new dbController();

		if (db.getUpdateData(getInsertQuery()) > 0)
			return true;
		else
			return false;
	}

	public boolean update()
	{	dbController db = new dbController();

		if (db.getUpdateData(getUpdateQuery()) > 0)
			return true;
		else
			return false;
	}

	public boolean delete()
	{	dbController db = new dbController();

		if (db.getUpdateData(getDeleteQuery()) > 0)
			return true;
		else
			return false;
	}
}
