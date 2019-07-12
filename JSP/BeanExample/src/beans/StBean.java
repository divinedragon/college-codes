package beans;

import java.util.*;

public class StBean implements java.io.Serializable
{	private String prn;
	
	public StBean()
	{	prn="";
	}
	
	public void setPrn(String value)
	{	prn = value;
	}
		
	public String getPrn()
	{	return prn;
	}
	
	public String showData()
	{	String output = new String("");
	
		output += "<br/><b>Prn No</b> ==> "+getPrn();
		
		return output;
	}
	
	public String getSQLString()
	{	String sqlString = new String("<br/>INSERT INTO students VALUES(");
	
		sqlString += "\""+ getPrn() + "\",";

		return sqlString;
	}
}
