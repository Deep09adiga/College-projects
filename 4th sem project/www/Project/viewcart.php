<!DOCTYPE HTML>
<html>
	<head>
		<title>Online shopping system</title>
		<meta name="description" content="website description" />
		<meta name="keywords" content="website keywords, website keywords" />
		<meta http-equiv="content-type" content="text/html; charset=UTF-8" />
		<link rel="stylesheet" type="text/css" href="css/style.css" />
		<!-- modernizr enables HTML5 elements and feature detects -->
		<script type="text/javascript" src="js/modernizr-1.5.min.js"></script>
		<style>
			img{
				float:left;
			}
			.text_line{
				clear:both;
				margin-bottom:2px;
			}
		</style>
	</head>
	<body>
			<div id="main">
			<header>
<nav>
					<div id="menu_container">
						<ul class="sf-menu" id="nav">
							<li><a href="home.php">Home</a></li>
							<li><a href="#">All Categores</a>
								<ul>
									<li><a href="purpose.php">purpose</a>
										<ul>
											<li><a href="gaming.php">Gaming</a></li>
											<li><a href="business.php">Business</a></li>
											<li><a href="everyday.php">Everyday</a></li>
											<li><a href="homeuse.php">Home</a></li>
											<li><a href="ultrabook.php">Ultra/notebooks</a></li>
										</ul>
									</li>
									<li><a href="brand.php">Brand</a>
										<ul>
											<li><a href="apple.php">Apple</a></li>
											<li><a href="dell.php">Dell</a></li>
											<li><a href="hp.php">Hp</a></li>
											<li><a href="lenovo.php">Lenovo</a></li>
											<li><a href="sony.php">Sony</a></li>
										</ul>
									</li>
									<li><a href="price.php">Price</a>
										<ul>
											<li><a href="below20k.php#">Below 20k</a></li>
											<li><a href="20k.php">20k-30k</a></li>
											<li><a href="30k.php">30k-40k</a></li>
											<li><a href="40k.php">40k-50k</a></li>
											<li><a href="50k.php">Above 50k</a></li>
										</ul>
									</li>
									<li><a href="os.php">Operating System</a>
										<ul>
											<li><a href="windows.php">Windows</a></li>
											<li><a href="dos.php">DOS</a></li>
											<li><a href="linux.php">LINUX</a></li>
											<li><a href="mac.php">MAC</a></li>
										</ul>
									</li>
									<li><a href="screen.php">Screen Size</a>
										<ul>
											<li><a href="11inch.php">11 Inch</a></li>
											<li><a href="14inch.php">14 Inch</a></li>
											<li><a href="15inch.php">15.6 Inch</a></li>
											<li><a href="15above.php">Above 15.6 Inch</a></li>
										</ul>
									</li>
									<li><a href="processor.php">Processor</a>
										<ul>
											<li><a href="i3.php">Intel Core I3</a></li>
											<li><a href="i5.php">Intel Core I5</a></li>
											<li><a href="i7.php">Intel Core I7</a></li>											
										</ul>
									</li>
									<li><a href="hdd.php">Hard Disk</a>
										<ul>
											<li><a href="320gb.php">320 GB</a></li>
											<li><a href="500gb.php">500 GB</a></li>
											<li><a href="720gb.php">720 GB</a></li>
											<li><a href="1tb.php">1 TB</a></li>
										</ul>
									</li>
									
								</ul>
							</li>
							<li><a href="viewcart.php"><?php
								if(isset($_POST['action1'])){
									$id=$_POST['hide'];
									$con=mysqli_connect("localhost","root","root","syskart");
									if (mysqli_connect_errno()){
										echo "Failed to connect to MySQL: " . mysqli_connect_error();
									}
									$useri=file("current_user.txt");
									foreach($useri as $uname);
									$uname;
									$result=mysqli_query($con,"select * from cart");
									$quant= 1 ;
									while($row = mysqli_fetch_array($result)){
										if($row['CART_USER_ID']==$uname && $row['ITEM_ID']==$id){
											$tot=$row['QUANTITY']-1;
											if($tot>=1){
												mysqli_query($con,"update cart set quantity='$tot' where item_id='$id' and cart_user_id='$uname'");
											}
											else{
												mysqli_query($con,"delete from cart where item_id='$id' and cart_user_id='$uname'");
											}
											break;
										}
									}
									mysqli_close($con);
								}
								elseif(isset($_POST['action2'])){
									$id=$_POST['hide'];
									$con=mysqli_connect("localhost","root","root","syskart");
									if (mysqli_connect_errno()){
										echo "Failed to connect to MySQL: " . mysqli_connect_error();
									}
									$useri=file("current_user.txt");
									foreach($useri as $uname);
										$uname;
									mysqli_query($con,"delete from cart where item_id='$id' and cart_user_id='$uname'");
									mysqli_close($con);
								}
								elseif(isset($_POST['action3'])){
									$con=mysqli_connect("localhost","root","root","syskart");
									if (mysqli_connect_errno()){
										echo "Failed to connect to MySQL: " . mysqli_connect_error();
									}
									$useri=file("current_user.txt");
									foreach($useri as $uname);
										$uname;
									mysqli_query($con,"delete from cart where cart_user_id='$uname'");
									mysqli_close($con);
								}
								$con=mysqli_connect("localhost","root","root","syskart");
								$useri=file("current_user.txt");
								foreach($useri as $uname);
									$uname;
								
								$result = mysqli_query($con,"select count(*) from CART WHERE CART_USER_ID='$uname';");
								$row = mysqli_fetch_array($result);
								
								echo 'Cart('.$row['count(*)'].')';?></a></li>
							<li><a href="login.php">Login</a></li>
							<li><a href="details.php">Buy</a></li>
						</ul>
					</div>
				</nav>

				<!--div id="logo">
					<div id="logo_text">
						<!-- class="logo_colour", allows you to change the colour of the text -->
						<!--h1><a href="index.html">CCS3<span class="logo_colour">_clouds</span></a></h1>
						<h2>Simple. Contemporary. Website Template.</h2>
					</div>
				</div-->
			</header>
			<div id="site_content">
      			<div class="content">
<?php

	$total=0;
	$quantity=0;
	$con=mysqli_connect("localhost","root","root","syskart");
	// Check connection
	if (mysqli_connect_errno())
  	{
  		echo "Failed to connect to MySQL: " . mysqli_connect_error();
  	}
	$useri=file("current_user.txt");
	foreach($useri as $uname);
		$uname;
		
  	$result =mysqli_query($con,"select * from system,cart where serial_no=item_id and cart_user_id='$uname'");
	while($row = mysqli_fetch_array($result)){
		echo 	'<p>
				<img src='.$row['IMG_LINK'].' alt="system"  width="250" height="250">'
				.'<t> Band:'.$row['BRAND'].'<br> Model: '.$row['MODEL'].'<br>   PRICE:  '.$row['PRICE'].' Rs<br>   QUANTITY:  '.$row['QUANTITY'].'
				<form action="viewcart.php" method="POST"> 
				<input type="hidden" value="'.$row['SERIAL_NO'].'" name="hide"><br>
				<input type="submit" name="action1" value="Clear quantity by 1" style="width:120px; height:40px;" >
				<input type="submit" name="action2" value="Clear This item" style="width:100px; height:40px;" >
				<br>	
				</form>
				<form action="details.php" method="POST">
				<input type="hidden" value="'.$row['SERIAL_NO'].'" name="hide"><br>
				<input type="submit" name="action4" value="Buy this item" style="width:100px; height:40px;" >
				<br><br>
				<br><br>
				</form>
				</p>
				<h3 class="text_line"></h3> 
				<br></br> 
				<hr style="border" color="red">';
		$temp=$row['QUANTITY']*$row['PRICE'];
		$total=$total+$temp;
		$quantity=$quantity+$row['QUANTITY'];
	}
	$result1 =mysqli_query($con,"select count(CART_USER_ID) from cart where CART_USER_ID='$uname'");
	$row1 = mysqli_fetch_array($result1);
	if($row1['count(CART_USER_ID)']!=0){
		echo	'</table>
				<hr color="red">
				<br>
				<center><font color="blue">Grand Total=  '.$total.'  Rs  </font></center>
				<br>
				<center><font color="blue">No of items=  '.$quantity.'</font></center>
				<br>
				<form action="viewcart.php" method="POST"> 
					<input type="submit" name="action3" value="Clear cart" style="width:100px; height:40px;" >
				</form>
				<form action="details.php" method="POST"> 
					<input type="submit" name="action5" value="Buy All" style="width:100px; height:40px;" ><br>
				</form>
				';	 
	}
	else
		echo 'There are no items in your cart to display';
	//$Tno = mysql_real_escape_string($_POST['name']);
  	mysqli_close($con);
?>					
				</div>
			</div>
			<div id="scroll">
				<a title="Scroll to the top" class="top" href="#"><img src="images/top.png" alt="top" /></a>
			</div>
			<footer>
				<p><img src="images/twitter.png" alt="twitter" />&nbsp;<img src="images/facebook.png" alt="facebook" />&nbsp;<img src="images/rss.png" alt="rss" /></p>
				<p><a href="home.php">Home</a> | <a href="laptop.php">laptops</a> |<a href="contactus.php">Contact Us</a></p>
				<p>Copyright &copy; DK-Softwares | <a href="contactus.php">design from DK-Softwares.co.in</a></p>
			</footer>
		</div>
		
		<!-- javascript at the bottom for fast page loading -->
		<script type="text/javascript" src="js/jquery.js"></script>
		<script type="text/javascript" src="js/jquery.easing-sooper.js"></script>
		<script type="text/javascript" src="js/jquery.sooperfish.js"></script>
		<script type="text/javascript">
			$(document).ready(function() {
				$('ul.sf-menu').sooperfish();
				$('.top').click(function() {$('html, body').animate({scrollTop:0}, 'fast'); return false;});
			});
		</script>
	</body>
</html>