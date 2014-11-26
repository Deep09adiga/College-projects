<html>
<body bgcolor="cyan">
<link rel="stylesheet" href="p3.css">
	<h1 align="center">SYSTEMS</h1>
	
	

	<div align="center" id="menu" >
<ul>
<li><a href=""><font color="red">Filter by Price</font></a></li>

<li><a href="viewcart1.php">View Cart</a></li>
</ul>
</div>
<font size="20" color="red">
<FORM NAME ="form1" METHOD ="POST" ACTION ="filter.php">

<Input type = 'Checkbox' Name ='ch1' value ="net" >Below 30,000 Rs
<P>
<Input type = 'Checkbox' Name ='ch2' value="word" >Between 30,000  to 40,000 Rs
<P>
<Input type = 'Checkbox' Name ='ch3' value="excel" >Between 40,000 to 50,000 Rs
<P>
<Input type = 'Checkbox' Name ='ch4' value="web" >Above 50,000 Rs
<P>

<P>


<INPUT TYPE = "Submit" Name = "Submit1"  VALUE = "Done">
</FORM>

</font>

</body>
</html>


<?php
?>