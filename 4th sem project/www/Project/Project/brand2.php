<html>
<body bgcolor="cyan">
<link rel="stylesheet" href="p3.css">
	<h1 align="center">SYSTEMS</h1>
	
	

	<div align="center" id="menu" >
<ul>
<li><a href=""><font color="red">Filter by OS Type</font></a></li>

<li><a href="viewcart1.php">View Cart</a></li>
</ul>
</div>
<font size="20" color="red">
<FORM NAME ="form1" METHOD ="POST" ACTION ="filter2.php">

<Input type = 'Checkbox' Name ='ch1' value ="net">LINUX
<P>
<Input type = 'Checkbox' Name ='ch2' value="word">WINDOWS
<P>
<Input type = 'Checkbox' Name ='ch3' value="excel">DOS
<P>



<INPUT TYPE = "Submit" Name = "Submit1"  VALUE = "Done">
</FORM>

</font>

</body>
</html>


<?php
?>