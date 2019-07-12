<%@ taglib prefix="c" uri="http://java.sun.com/jstl/core" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">

<head>
	<title>Using JavaBeans in JSP</title>
	<meta http-equiv="content-type" content="text/html;charset=utf-8" />
	<meta name="generator" content="Geany 0.16" />
	<meta name="author" content="Deepak Shakya" />
</head>
<body>
	<center>
		<h1>Using JavaBeans in JSP</h1>
		<jsp:userBean id="student" class="beans.StudentBean" />
		<jsp:setProperty name="student" property="prn" value="060321013" />
		<jsp:setProperty name="student" property="name" value="Deepak Shakya" />
		<jsp:setProperty name="student" property="course" value="BCA" />
		<jsp:setProperty name="student" property="address" value="Lohegaon, Pune" />
		<jsp:setProperty name="student" property="contactno" value="9766194787" />
		<jsp:setProperty name="student" property="email" value="justdpk@gmail.com" />
		<jsp:setProperty name="student" property="hobbies" value="readin,writing" />

		<c:out value="${student.prn}" />
	</center>
</body>
</html>
