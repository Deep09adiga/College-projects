<html>
<body bgcolor="cyan">
<link rel="stylesheet" href="p3.css">
	<h1 align="center">MOBILES</h1>
	
	

	<div align="center" id="menu" >
<ul>
<li><a href=""><font color="red">FILter by SCREEN SIZE</font></a></li>

<li><a href="viewcart1.php">View Cart</a></li>
</ul>
</div>
<font size="20" color="red">
<FORM NAME ="form1" METHOD ="POST" ACTION ="filter3.php">

<Input type = 'Checkbox' Name ='ch1' value ="net" > Less THAN 13 
<P>
<Input type = 'Checkbox' Name ='ch2' value="word" > 13 - 14.5
<P>
<Input type = 'Checkbox' Name ='ch3' value="excel" >14.5 - 15.6
<P>
<Input type = 'Checkbox' Name ='ch4' value="web" >Above 15.6
<P>

<P>


<INPUT TYPE = "Submit" Name = "Submit1"  VALUE = "Done">
</FORM>

</font>

</body>
</html>


<?php
?>