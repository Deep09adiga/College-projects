<html>
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
<body bgcolor="cyan">



<?php

$con=mysqli_connect("localhost","root","root","syskart");

// Check connection
		if (mysqli_connect_errno())
  		{
  			echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
  		$result =mysqli_query($con,"select *from system,cart where serial_no=item_id");



  		while($row = mysqli_fetch_array($result))
  {
  
  	echo '<p><img src='.$row['img_link'].' alt="Mobile"  width="250" height="250">'.'NAME:  '.
  	 $row['brand'].'  '.$row['model'].'
  		<br></br> PRICE:  '.$row['prize'].
    '  Rs. <form action="action.php" method="POST"> 
     <input type="hidden" value="'.$row['serial_no'].'" name="hide">
      
     <br></br><input type="submit" name="action1" value="View Details" />
     <br></br><input type="submit" name="action2" value="BUY" />
     <input type="submit" name="action" value="CLEAR">
     </form> </p>  <h3 class="text_line"></h3> 
     	<br></br> <hr style="border" color="red">';
  	
  	
  }

  	
  	//$Tno = mysql_real_escape_string($_POST['name']);
  		mysqli_close($con);
?>
</body>
</html>