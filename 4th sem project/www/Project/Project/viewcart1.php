<html>
<head>

<style>

table,th,td
{
border-collapse:collapse;
}
th,td
{
padding:5px;
}
</style>
</head>
<body bgcolor="cyan">

<link rel="stylesheet" href="p3.css">
	<h1 align="center">CART</h1>
	
	

	<div align="center" id="menu" >
<ul>
<li><a href=""><font color="red">GOTO -></font></a></li>
<li><a href="system.php">SYSTEM</a></li>
<li><a href="clear.php">CLEAR ALL ENTRIES</a></li>



</ul>
</div>




	<table style="width:300px">
	<tr>
	<th>IMAGE</th>
  	<th>ITEM</th>
  	<th>QTY</th>		
  	<th>PRICE</th>
	<th>DELIVERY DETAILS</th>
	<th>SUBTOTAL</th>
  	</tr>
	<hr color="black">
	
<?php
	
 $total=0;
 $quantity=0;
 $con=mysqli_connect("localhost","root","root","syskart");

// Check connection
		if (mysqli_connect_errno())
  		{
  			echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
  		$result =mysqli_query($con,"select *from system,cart where serial_no=item_id");



  		while($row = mysqli_fetch_array($result))
  {
  
  	echo '<tr>
	<tr>
  	<td><img src="'.$row['img_link'].'" alt="system" width="250" height="250"> </td>
  	<td>system'. $row['brand'].'  '.$row['model'].'</td>		
  	<td>1</td>
	<td>Rs '.$row['prize'].'</td>
	<td>Delivered in 2 working days </td>
	<td>Rs '.$row['prize'].'</td>
	<td><form background-color:#FF0000;  action="clear.php" method="POST" >
	<input type="hidden" value="'.$row['serial_no'].'" name="hide">
    <input type="submit" name="delete" value="CLEAR THIS" style="width:200px; height:40px; ">
</form></td>
	</tr>';
  	$total=$total+$row['prize'];
  	$quantity++;
  }


echo'</table>
<hr color="red">
<br>
<center><font color="blue">Grand Total=  '.$total.'  Rs  </font></center>
<br>
<center><font color="blue">No of items=  '.$quantity.'</font></center>
';
  	
  	//$Tno = mysql_real_escape_string($_POST['name']);
 mysqli_close($con);
?>
<hr color="red">
<br>
<form background-color:#FF0000; name="input" action="details.php" method="POST" >
	<input type="submit" name="order" value="Place Order" style="width:200px; height:40px; ">
</form>
</body>
</html>