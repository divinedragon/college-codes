<%@ page import="java.util.*" %>
<html>
<head>
	<title>JSP Example - Chocolate Application - Chocolate Selection Result</title>
</head>
<body>
	<h1>Your Selection for Chocolate : <%= request.getParameter("chocolateType"); %></h1>
	<h3>Your probable options :<h3>
	<ul>
		<%
			List ChocolateList = (List) request.getAttribute("List");
			Iterator ci = ChocolateList.iterator();
			
			while(ci.hasNext())
			{	println("\n\t\t<li>"+ci.next()+"</li>");
			}
		%>
	</ul>
</body>	
</html>
