package com.example.web;

import com.example.model.*;
import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;
import java.util.*;



public class ChocolateControl_V2 extends HttpServlet
{	public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException
	{	res.setContentType("text/html");
		String selectedChocolate = req.getParameter("chocolateType");
		PrintWriter pw = res.getWriter();

		ChocolateModel cm = new ChocolateModel();
		List ChocolateList = cm.getChocolateList(selectedChocolate);

		pw.println("<br/>Your Chocolate Selection is ==> "+selectedChocolate);
		pw.println("<br/>Your options for chocolate -->");

		Iterator ci = ChocolateList.iterator();
		while(ci.hasNext())
		{	pw.println(ci.next());
		}
	}
}
