package com.example.web;

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class ChocolateControl_V1 extends HttpServlet
{	public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException
	{	res.setContentType("text/html");
		String selectedChocolate = req.getParameter("chocolateType");
		PrintWriter pw = res.getWriter();
		pw.println("<html>");
		pw.println("<head>");
		pw.println("<title>JSP Example Application - Chocolate Selection Response");
		pw.println("</head>");
		pw.println("<body>");
		pw.println("<h1>Your Chocolate Selection is ==> "+selectedChocolate+"</h1>");
		pw.println("</body>");
		pw.println("</html>");
	}
}
