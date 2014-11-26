<html>
<body bgcolor="cyan">
<link rel="stylesheet" href="p3.css">
	<h1 align="center">SYSTEM</h1>
	
	

	<div align="center" id="menu" >
<ul>
<li><a href=""><font color="red">Filter by Processor</font></a></li>

<li><a href="viewcart1.php">View Cart</a></li>
</ul>
</div>
<font size="20" color="red">
<FORM NAME ="form1" METHOD ="POST" ACTION ="filter4.php">

<Input type = 'Checkbox' Name ='ch1' value="net"> Intel i3
<P>
<Input type = 'Checkbox' Name ='ch2' value="word"> Intel i5
<P>
<Input type = 'Checkbox' Name ='ch3' value="excel"> Intel i7
<P>

<INPUT TYPE = "Submit" Name = "Submit1"  VALUE = "Done">
</FORM>

</font>

</body>
</html>


<?php
?>