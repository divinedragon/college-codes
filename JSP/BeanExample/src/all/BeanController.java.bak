package all;

import all.*;
import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class BeanController extends HttpServlet
{	public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException
	{	res.setContentType("text/html");
	
		PrintWriter out  = res.getWriter();
		
		String prn = req.getParameter("prn");
		String name = req.getParameter("name");
		String course = req.getParameter("course");
		String address = req.getParameter("address");
		String contactno = req.getParameter("contactno");
		String email = req.getParameter("email");
		String hobby_list[] = req.getParameterValues("hobbies");
		String hobbies = new String("");
		
		if (hobby_list != null) 
		{
			for (int i = 0; i < hobby_list.length; i++) 
			{
				hobbies = hobbies +"," + hobby_list[i];
			}
			hobbies = hobbies.substring(1,hobbies.length());
		}
		
		/*
		out.println("<h1>here are the values that you entered</h1>");
		out.println("<br/>PRN ==> " + prn);
		out.println("<br/>Name ==> "+ name);
		out.println("<br/>Course ==> " + course);
		out.println("<br/>Address ==> " + address);
		out.println("<br/>Contact No ==> " + contactno);
		out.println("<br/>Email ==> " + email);
		out.println("<br/>Hobbies ==> " + hobbies);
		*/
		
		StudentBean st = new StudentBean();
		
		st.setPrn(prn);
		st.setName(name);
		st.setCourse(course);
		st.setAddress(address);
		st.setContactno(contactno);
		st.setEmail(email);
		st.setHobbies(hobbies);
		
		
		out.println("<h1>Here is your data</h1><br/>"+st.showData());
		out.println("<br/>SQL String ==> "+st.getSQLString());
		
	}
}
