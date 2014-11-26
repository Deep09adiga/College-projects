<html>

<body bgcolor="cyan">


  <link rel="stylesheet" href="p3.css">
  <h1 align="center">SYSTEM</h1>
  
  

  <div align="center" id="menu" >
<ul>

<li><a href="page1.php">Home</a></li>
<li><a href="system.php">Systems</a></li>
<li><a href="viewcart1.php">View Cart</a></li>


</ul>
</div>





<?php
  
  if(isset($_POST['delete']))
  {
  	echo '<p><center><font color="red">One item  sucessfuly deleted from Your cart</font>
  	</center><br>';
  	$id=$_POST['hide'];


  		$con=mysqli_connect("localhost","root","root","syskart");

// Check connection
		if (mysqli_connect_errno())
  		{
  			echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
  		mysqli_query($con,"Delete from cart where item_id = $id");
  	
  	//$Tno = mysql_real_escape_string($_POST['name']);
  		mysqli_close($con);
  }
  else
  {
      $con=mysqli_connect("localhost","root","root","syskart");

// Check connection
    if (mysqli_connect_errno())
      {
        echo "Failed to connect to MySQL: " . mysqli_connect_error();
      }
      mysqli_query($con,"Delete from cart ");
    
    //$Tno = mysql_real_escape_string($_POST['name']);
      mysqli_close($con);
  	
  }
  
?>





</body>
</html>