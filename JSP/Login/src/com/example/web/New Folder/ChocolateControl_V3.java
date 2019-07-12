package com.example.web;

import com.example.model.*;
import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;
import java.util.*;



public class ChocolateControl_V3 extends HttpServlet
{	public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException
	{	res.setContentType("text/html");	//setting the content type for the response
		String selectedChocolate = req.getParameter("chocolateType");	//get the chocolate type selected by the user in the form
		
		ChocolateModel cm = new ChocolateModel();	//instantiate the model class
		List ChocolateList = cm.getChocolateList(selectedChocolate);	//Get the suggested list of chocolates

		req.setAttribute("List",ChocolateList);	//set the attribute
		RequestDispatcher view = req.getRequestDispatcher("ChocolateSelectionResult.jsp");
		view.forward(req,res);	//dispatch the request to the view - jsp
	}
}
