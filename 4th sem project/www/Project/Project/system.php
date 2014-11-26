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

<body bgcolor = "cyan">
	<link rel="stylesheet" href="p3.css">
	<h1 align="center">SYSTEM</h1>
	
	

	<div align="center" id="menu" >
<ul>
<li><a href="brand1.php">Brand</a></li>
<li><a href="brand2.php">OS Type</a></li>
<li><a href="brand3.php">Screen Size</a></li>
<li><a href="brand.php">Price</a></li>
<li><a href="brand4.php">Processor</a></li>
<li><a href="viewcart1.php">View Cart</a></li>
<li><a href="login.php">login</a></li>


</ul>
</div>


<?php
// Create connection
$con=mysqli_connect("localhost","root","root","syskart");

// Check connection
if (mysqli_connect_errno()){
  echo "Failed to connect to MySQL: " . mysqli_connect_error();
  }

 $result = mysqli_query($con,"SELECT * FROM system");

while($row = mysqli_fetch_array($result))
  {
  
  	echo '<p><img src='.$row['img_link'].' alt="Mobile"  width="250" height="250">'.'BRAND:  '.
  	 $row['brand'].'  '.$row['model'].'
  		<br></br> PRICE:  '.$row['prize'].
    '  Rs. <form action="action.php" method="POST"> 
     <input type="hidden" value="'.$row['serial_no'].'" name="hide">
     <input type="submit" name="action" value="ADD TO CART"> 
     <br></br><input type="submit" name="action1" value="View Details" />
     	<br></br><input type="submit" name="action2" value="BUY now" />
     </form> </p>  <h3 class="text_line"></h3> 
     	<br></br> <hr style="border" color="red">';
  	
  	
  }



/*while($row = mysql_fetch_assoc($image))
{
        echo '<img src="img.php?id='.$row["id"].'">';
}*/







  mysqli_close($con);
?>








</body>
</html>	

<?php

?>
