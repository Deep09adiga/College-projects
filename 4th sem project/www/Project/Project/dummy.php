<html>
<head>
<head>
<style>
img 
{
float:left;
}
.text_line
{
clear:both;
margin-bottom:2px;
}
</style>
</head>


<?PHP
	$ch1 = 'unchecked';
	$ch2 = 'unchecked';
	$ch3 = 'unchecked';
	$ch4 = 'unchecked';
	$ch5 = 'unchecked';

if (isset($_POST['Submit1'])) {

	if (isset($_POST['ch1'])) {
		$ch1 = $_POST['ch1'];

		if ($ch1 == 'net') {
			$ch1 = 'checked';
		}
	}

	if (isset($_POST['ch2'])) {
		$ch2 = $_POST['ch2'];

		if ($ch2 == 'word') {
			$ch2 = 'checked';
		}
	}

	if (isset($_POST['ch3'])) {
		$ch3 = $_POST['ch3'];

		if ($ch3 == 'excel') {
			$ch3 = 'checked';
		}
	}

	if (isset($_POST['ch4'])) {
		$ch4 = $_POST['ch4'];

		if ($ch4 == 'web') {
			$ch4 = 'checked';
		}
	}

	$con=mysqli_connect("localhost","root","root","project");
	
	if (mysqli_connect_errno())
  {
    echo "Failed to connect to MySQL: " . mysqli_connect_error();
  }



	if($ch1=='checked')
		$result = mysqli_query($con,"SELECT * FROM mobile where prize < 10000");




	while($row = mysqli_fetch_array($result))
  {
  
  	echo '<p><img src='.$row['mlink'].' alt="Mobile"  width="250" height="250">'.'NAME:  '.
  	 $row['brand'].'  '.$row['model'].'
  		<br></br> PRICE:  '.$row['prize'].
    '  Rs. <form action="action.php" method="POST"> 
     <input type="hidden" value="'.$row['imei_no'].'" name="hide">
     <input type="submit" name="action" value="ADD TO CART"> 
     <br></br><input type="submit" name="action1" value="View Details" />
     	<br></br><input type="submit" name="action2" value="BUY now" />
     </form> </p>  <h3 class="text_line"></h3> 
     	<br></br> <hr style="border" color="red">';
  	
  	
  }



}

?>








</head>

<body bgcolor="cyan">

<FORM NAME ="form1" METHOD ="POST" ACTION ="dummy.php">

<Input type = 'Checkbox' Name ='ch1' value ="net" <?PHP print $ch1; ?>>Below 10,000 Rs
<P>
<Input type = 'Checkbox' Name ='ch2' value="word" <?PHP print $ch2; ?>>Between 10,000  to 15,000 Rs
<P>
<Input type = 'Checkbox' Name ='ch3' value="excel" <?PHP print $ch3; ?>>Below 15,000 to 20000 Rs
<P>
<Input type = 'Checkbox' Name ='ch4' value="web" <?PHP print $ch4; ?>>Above 20,000 Rs
<P>

<P>


<INPUT TYPE = "Submit" Name = "Submit1"  VALUE = "Done">
</FORM>

</body>
</html>
