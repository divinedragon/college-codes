package com.example.model;

import java.util.*;	//we are using collections.

public class LoginModel
{
	private Map<String,String> loginTable;
	private boolean isValid;
	
	LoginModel()
	{	initializeTable();
	}
	
	LoginModel(String username, String password)
	{	initializeTable();
	}
	
	private void initializeTable()
	{	loginTable = new HashMap<String,String>();
	
		loginTable.put("deepak","shakya");
		loginTable.put("samar","hedaoo");
		loginTable.put("varsha","murjani");
		
		isValid = false;
	}
	
	public boolean checkUser(String user, String pass)
	{	
		Set set = loginTable.entrySet();
		Iterator i = set.iterator();
		
		
		while(i.hasNext())
		{	Map.Entry me = (Map.Entry) i.next();
			String entryUser = (String) me.getKey();
			String entryPass = (String) me.getValue();
			
			if (entryUser.equals(user) && entryPass.equals(pass))
			{	isValid = true;
				break;
			}
		}
		
		return isValid;
		
	}
	
	public boolean get_isValid()
	{	return isValid;
	}
	
	/*
	public static void main (String args[])
	{	System.out.println("hello there");
		
		LoginModel lm = new LoginModel();
		
		System.out.println("(deepak,deepak) ==> " + lm.checkUser("deepak","deepak"));
		System.out.println("(deepak,shakya) ==> " + lm.checkUser("deepak","shakya"));

	}
	*/
}
