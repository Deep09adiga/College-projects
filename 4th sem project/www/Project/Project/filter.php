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
	<link rel="stylesheet" href="p3.css">
		<h1 align="center">SYSTEM</h1>
		<div align="center" id="menu" >
<ul>
<li><a href=""><font color="red">Sort By -></font></a></li>

<li><a href="brand2.php">OS Type</a></li>
<li><a href="brand3.php">Screen Size</a></li>
<li><a href="brand1.php">Brand</a></li>
<li><a href="brand4.php">Processor</a></li>
<li><a href="viewcart1.php">View Cart</a></li>

</ul>
</div>


<?PHP
  $ch1 = 'unchecked';
  $ch2 = 'unchecked';
  $ch3 = 'unchecked';
  $ch4 = 'unchecked';
  

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

  $con=mysqli_connect("localhost","root","root","syskart");
  
  if (mysqli_connect_errno())
  {
    echo "Failed to connect to MySQL: " . mysqli_connect_error();
  }



  if($ch1=='checked' && $ch2=='checked' && $ch3=='checked' && $ch4=='checked' )
    $result = mysqli_query($con,"SELECT * FROM system ");    

  elseif($ch1=='checked' && $ch2=='checked' && $ch3=='checked' && $ch4=='unchecked' )
    $result = mysqli_query($con,"SELECT * FROM system where prize < 50000");

  elseif($ch1=='checked' && $ch2=='checked' && $ch4=='checked' )
    $result = mysqli_query($con,"SELECT * FROM system where prize < 40000 or prize > 50000");

  elseif($ch1=='checked' && $ch3=='checked' && $ch4=='checked' )
    $result = mysqli_query($con,"SELECT * FROM system where prize < 30000 or prize > 40000");

  elseif($ch2=='checked' && $ch3=='checked' && $ch4=='checked' )
    $result = mysqli_query($con,"SELECT * FROM system where prize > 30000");

  elseif($ch1=='checked' && $ch2=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize < 40000");

  elseif($ch1=='checked' && $ch3=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize < 30000 or prize between 40000 and 50000");

  elseif($ch1=='checked' && $ch4=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize < 30000 or prize >50000");

  elseif($ch2=='checked' && $ch3=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize > 30000 or prize < 50000");

  elseif($ch2=='checked' && $ch4=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize > 50000 or prize between 30000 and 40000");

  elseif($ch4=='checked' && $ch3=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize >40000");

  elseif($ch1=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize <30000");

  elseif($ch2=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize between 30000 and 40000");        

  elseif($ch3=='checked')
    $result = mysqli_query($con,"SELECT * FROM system where prize between 40000 and 50000");

  elseif($ch4=='checked')
        $result = mysqli_query($con,"SELECT * FROM system where prize >50000");
	else
		$result = mysqli_query($con,"SELECT * FROM system ");		

  while($row = mysqli_fetch_array($result))
  {
  
    echo '<p><img src='.$row['img_link'].' alt="system"  width="250" height="250">'.'NAME:  '.
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

 mysqli_close($con);

}

?>








</body>
</html>	
