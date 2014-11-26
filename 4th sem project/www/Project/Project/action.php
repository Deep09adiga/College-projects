<html>

<body bgcolor="cyan">

  <link rel="stylesheet" href="p3.css">
  <h1 align="center">SYSTEMS</h1>
  
  

  <div align="center" id="menu" >
<ul>

<li><a href="page1.php">Home</a></li>
<li><a href="system.php">Systems</a></li>
<li><a href="viewcart1.php">View Cart</a></li>


</ul>
</div>





<?php
  
  if(isset($_POST['action']))
  {
  	echo '<p><center><font color="red">One item added sucessfuly to Your cart</font>
  	</center><br>';
	$id=$_POST['hide'];


  		$con=mysqli_connect("localhost","root","root","syskart");

// Check connection
		if (mysqli_connect_errno())
  		{
  			echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
		$useri=file("current_user.txt");
		foreach($useri as $uname);
			$uname;
		
		mysqli_query($con,"INSERT INTO cart (cart_user_id,item_id) values ($uname,$id)");
		  	
  	//$Tno = mysql_real_escape_string($_POST['name']);
  		mysqli_close($con);
  }
  

  elseif (isset($_POST['action1'])) 
  {
  	echo '<center><font color="blue">Item deatils </font></center><br><br>';
  	//echo $_POST['hide'];
    $id=$_POST['hide'];
    $con=mysqli_connect("localhost","root","root","syskart");

// Check connection
		if (mysqli_connect_errno())
  		{
  			echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
  		$result = mysqli_query($con,"SELECT * FROM system where serial_no= $id");
  		

  		echo '<center> <table border="5"> 
  		<tr>
  		<th>Types </th>
  		<th>Details</th>
  		</tr>';

  	while($row = mysqli_fetch_array($result))
  {
  		echo '<center><img src='.$row['img_link'].' alt="system"> </center>';

  		echo'<br> <br>';

  		echo '<tr>';
  		echo '<td> BRAND </td>';
  		echo '<td>' .$row['brand'] .'</td>';
  		echo '</tr>';
  		
  		echo '<tr>';
  		echo '<td> MODEL </td>';
  		echo '<td>' .$row['model'] .'</td>';
  		echo '</tr>';

  		echo '<tr>';
  		echo '<td> PRIZE </td>';
  		echo '<td>' .$row['prize'] .'</td>';
  		echo '</tr>';
  
  		echo '<tr>';
  		echo '<td> OS </td>';
  		echo '<td>' .$row['os'] .'</td>';
  		echo '</tr>';

  		echo '<tr>';
  		echo '<td> Processor </td>';
  		echo '<td>' .$row['Processor'] .'</td>';
  		echo '</tr>';

  		echo '<tr>';
  		echo '<td> SCREEN SIZE </td>';
  		echo '<td>' .$row['screen'] .'</td>';
  		echo '</tr>';
  }
  echo '</table>';
  mysqli_close($con);
  }
  else
  	{
  		if(isset($_POST['action2']))
  		{
  			$id=$_POST['hide'];


  		$con=mysqli_connect("localhost","root","root","syskart");

// Check connection
		if (mysqli_connect_errno())
  		{
  			echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
		$useri=fopen("current_user.txt","r");
		$uname=fread($useri);
		echo $uname;
  		mysqli_query($con,"INSERT INTO cart (item_id) values ($id)");
  	
  	//$Tno = mysql_real_escape_string($_POST['name']);
  		mysqli_close($con);
  		header ("Location: viewcart1.php");

  		}
  	}

?>





</body>
</html>