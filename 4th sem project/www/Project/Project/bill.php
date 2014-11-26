<html>
<body>
<?php
	if (isset($_POST['confirm'])) {
		if (isset($_POST['id'])) 
		    $ch1 = $_POST['id'];
		if (isset($_POST['card']))
	    	$ch2 = $_POST['card'];
		if (isset($_POST['pin']))
		    $ch3 = $_POST['pin'];
    }
	$total=0;
	$quantity=0;
	$con=mysqli_connect("localhost","root","root","syskart");
// Check connection<br/>
  if (mysqli_connect_errno())
  {
  echo "Failed to connect to MySQL: ". mysqli_connect_error();
  }
  $result =mysqli_query($con,"select *from system,cart where serial_no=item_id");
while($row = mysqli_fetch_array($result))
  {
	$total=$total+$row['prize'];
  	$quantity++;
  }
$result =mysqli_query($con,"Insert into billing (Bill_amount,user_id,date,card_no,pin) values ($total,'$ch1','',$ch2,$ch3)");

echo'</table>
<hr color="red">
<br>
<center><font color="blue">Bill amount =  '.$total.'  Rs  </font></center>
<br>
<center><font color="blue">User ID=  '.$ch1.'</font></center>
<br>
<center><font color="blue">Card no=  '.$ch2.'</font></center>
<br>
<center><font color="blue">PIN=  '.$ch3.'</font></center>
';
  	
  	//$Tno = mysql_real_escape_string($_POST['name']);
 mysqli_close($con);
?>
</html>
</body>
