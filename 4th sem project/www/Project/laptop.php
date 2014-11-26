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
				<div id="sidebar_container">
					<FORM NAME ="form1" METHOD ="POST" ACTION ="laptop.php">
						<div class="sidebar">
							<h3><font face="ar destine">Purpose</font></h3>
							<Input type = 'Checkbox' Name ='ch1' value ="gaming" />      Gaming</br></br>
							<Input type = 'Checkbox' Name ='ch2' value ="business" />      Business</br></br>
							<Input type = 'Checkbox' Name ='ch3' value ="home" />      Home</br></br>
							<Input type = 'Checkbox' Name ='ch4' value ="everyday" />      Everyday</br></br>
							<Input type = 'Checkbox' Name ='ch5' value ="ultrabook" />      Ultra book</br></br>
						</div>
						<div class="sidebar">
							<h3><font face="ar destine">Brand</font></h3>
							<Input type = 'Checkbox' Name ='ch1' value ="apple" />      Apple</br></br>
							<Input type = 'Checkbox' Name ='ch2' value ="dell" />      Dell</br></br>
							<Input type = 'Checkbox' Name ='ch3' value ="hp" />      HP</br></br>
							<Input type = 'Checkbox' Name ='ch4' value ="lenovo" />      Lenovo</br></br>
							<Input type = 'Checkbox' Name ='ch5' value ="sony" />      Sony</br></br>
						</div>
						<div class="sidebar">
							<h3><font face="ar destine">Price</font></h3>
							<Input type = 'Checkbox' Name ='ch6' value ="belo10" />     Below   30000</br></br>
							<Input type = 'Checkbox' Name ='ch7' value ="30-40" />      30000 - 40000</br></br>
							<Input type = 'Checkbox' Name ='ch8' value ="40-50" />      40000 - 50000</br></br>
							<Input type = 'Checkbox' Name ='ch9' value ="abv50" />      Above   50000</br></br>
						</div>
						<div class="sidebar">
							<h3><font face="ar destine">Operating system</font></h3>
							<Input type = 'Checkbox' Name ='ch10' value ="win8" />      Win 8</br></br>
							<Input type = 'Checkbox' Name ='ch11' value ="dos" />      dos</br></br>
							<Input type = 'Checkbox' Name ='ch12' value ="linux" />      Linux</br></br>
							<Input type = 'Checkbox' Name ='ch13' value ="mac" />      MAC</br></br>
						</div>
						<div class="sidebar">
							<h3><font face="ar destine">Screen Size</font></h3>
							<Input type = 'Checkbox' Name ='ch14' value ="11inc" />      11 inch</br></br>
							<Input type = 'Checkbox' Name ='ch15' value ="14inc" />      14 inch</br></br>
							<Input type = 'Checkbox' Name ='ch16' value ="15.6inc" />      15.6 inch</br></br>
							<Input type = 'Checkbox' Name ='ch17' value ="above15" />      Above 15.6 inch</br></br>
						</div>
						<div class="sidebar">
							<h3><font face="ar destine">Processor</font></h3>
							<Input type = 'Checkbox' Name ='ch18' value ="i3" />      Intel I3</br></br>
							<Input type = 'Checkbox' Name ='ch19' value ="i5" />      Intel I5</br></br>
							<Input type = 'Checkbox' Name ='ch20' value ="i7" />      Intel I7</br></br>
						</div>
						<div class="sidebar">
							<h3><font face="ar destine">Hard Disk</font></h3>
							<Input type = 'Checkbox' Name ='ch21' value ="320gb" />      320 GB</br></br>
							<Input type = 'Checkbox' Name ='ch22' value ="500gb" />      500 GB</br></br>
							<Input type = 'Checkbox' Name ='ch23' value ="1tb" />      1 TB</br></br>
						</div>

						<div class="sidebar">
							<INPUT TYPE = "Submit" Name = "Submit1"  VALUE = "Done">
						</div>
					</FORM>
				</div>
      			<div class="content">
					<?PHP
						$ch1 = 'unchecked';
						$ch2 = 'unchecked';
						$ch3 = 'unchecked';
						$ch4 = 'unchecked';
						$ch5 = 'unchecked';
						$ch6 = 'unchecked';
						$ch7 = 'unchecked';
						$ch8 = 'unchecked';
						$ch9 = 'unchecked';
						$ch10= 'unchecked';
						$ch11= 'unchecked';
						$ch12= 'unchecked';
						$ch13= 'unchecked';
						$ch14 = 'unchecked';
						$ch15 = 'unchecked';
						$ch16 = 'unchecked';
						$ch17 = 'unchecked';
						$ch18 = 'unchecked';
						$ch19 = 'unchecked';
						$ch20= 'unchecked';
						$ch21= 'unchecked';
						$ch22= 'unchecked';
						$ch23= 'unchecked';
												
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
							if (isset($_POST['ch5'])) {
								$ch5 = $_POST['ch5'];
			
								if ($ch5 == 'web') {
									$ch5 = 'checked';
								}
							}
							if (isset($_POST['ch6'])) {
								$ch6 = $_POST['ch6'];
			
								if ($ch6 == 'web') {
									$ch6 = 'checked';
								}
							}
							if (isset($_POST['ch7'])) {
								$ch7 = $_POST['ch7'];
			
								if ($ch7 == 'web') {
									$ch7 = 'checked';
								}
							}
							if (isset($_POST['ch8'])) {
								$ch8 = $_POST['ch8'];
			
								if ($ch8 == 'web') {
									$ch8 = 'checked';
								}
							}
							if (isset($_POST['ch9'])) {
								$ch9 = $_POST['ch9'];
			
								if ($ch9 == 'web') {
									$ch9 = 'checked';
								}
							}
							if (isset($_POST['ch10'])) {
								$ch10 = $_POST['ch10'];
			
								if ($ch10 == 'web') {
									$ch10 = 'checked';
								}
							}
							if (isset($_POST['ch11'])) {
								$ch11 = $_POST['ch11'];
			
								if ($ch11 == 'web') {
									$ch11 = 'checked';
								}
							}
							if (isset($_POST['ch12'])) {
								$ch12 = $_POST['ch12'];
			
								if ($ch12 == 'web') {
									$ch12 = 'checked';
								}
							}
							if (isset($_POST['ch13'])) {
								$ch13 = $_POST['ch13'];
			
								if ($ch13 == 'web') {
									$ch13 = 'checked';
								}
							}
							if (isset($_POST['ch14'])) {
								$ch14 = $_POST['ch14'];
			
								if ($ch14 == 'web') {
									$ch14 = 'checked';
								}
							}
							if (isset($_POST['ch15'])) {
								$ch15 = $_POST['ch15'];
			
								if ($ch15 == 'web') {
									$ch15 = 'checked';
								}
							}
							if (isset($_POST['ch16'])) {
								$ch16 = $_POST['ch16'];
			
								if ($ch16 == 'web') {
									$ch16 = 'checked';
								}
							}
							if (isset($_POST['ch17'])) {
								$ch17 = $_POST['ch17'];
			
								if ($ch17 == 'web') {
									$ch17 = 'checked';
								}
							}
							if (isset($_POST['ch18'])) {
								$ch18 = $_POST['ch18'];
			
								if ($ch18 == 'web') {
									$ch18 = 'checked';
								}
							}
							if (isset($_POST['ch19'])) {
								$ch19 = $_POST['ch19'];
			
								if ($ch19 == 'web') {
									$ch19 = 'checked';
								}
							}
							if (isset($_POST['ch20'])) {
								$ch20 = $_POST['ch20'];
			
								if ($ch20 == 'web') {
									$ch20 = 'checked';
								}
							}
							if (isset($_POST['ch21'])) {
								$ch21 = $_POST['ch21'];
			
								if ($ch21 == 'web') {
									$ch21 = 'checked';
								}
							}if (isset($_POST['ch22'])) {
								$ch22 = $_POST['ch22'];
			
								if ($ch22 == 'web') {
									$ch22 = 'checked';
								}
							}if (isset($_POST['ch23'])) {
								$ch23 = $_POST['ch23'];
			
								if ($ch23 == 'web') {
									$ch23 = 'checked';
								}
							}
							
							/*if(!(isset($_POST['ch1']) || isset($_POST['ch2'])||isset($_POST['ch3'])||isset($_POST['ch4']))){
								$ch1 = 'checked';
								$ch2 = 'checked';
								$ch3 = 'checked';
								$ch4 = 'checked';
							}*/
							$con=mysqli_connect("localhost","root","root","syskart");
		
							if (mysqli_connect_errno()){
								echo "Failed to connect to MySQL: " . mysqli_connect_error();
							}
							if($ch1=='checked' || $ch2=='checked' || $ch3=='checked' || $ch4=='checked' || $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where prize < 50000");
							else
								$result = mysqli_query($con,"SELECT * FROM system ");		
							
							while($row = mysqli_fetch_array($result)){
								echo 	'<p>
											<img src='.$row['img_link'].' alt="system"  width="250" height="250">'
											.'NAME:  '.$row['brand'].'  '.$row['model'].'<br></br> PRICE:  '.$row['prize'].'  Rs. 
											<form action="action.php" method="POST"> 
												<input type="hidden" value="'.$row['serial_no'].'" name="hide">
												<input type="submit" name="action" value="ADD TO CART"> 
												<br></br>
												<input type="submit" name="action1" value="View Details" />
												<br></br>
												<input type="submit" name="action2" value="BUY now" />
											</form>
										</p>  
										<h3 class="text_line"></h3> 
										<br></br> 
										<hr style="border" color="red">';
							}
							mysqli_close($con);
						}
						else{
							$con=mysqli_connect("localhost","root","root","syskart");
							$result = mysqli_query($con,"SELECT * FROM system ");		
							
							while($row = mysqli_fetch_array($result)){
								echo 	'<p>
											<img src='.$row['IMG_LINK'].' alt="system"  width="250" height="250">'
											.' Brand:'.$row['BRAND'].'<br> Model: '.$row['MODEL'].'<br>   PRICE:  '.$row['PRICE'].'  Rs. 
											<form action="action.php" method="POST"> 
												<input type="hidden" value="'.$row['SERIAL_NO'].'" name="hide"><br>
												<input type="submit" name="action" value="ADD TO CART"> 
												<br><br>
												<input type="submit" name="action1" value="View Details" />
												<br><br>
												<input type="submit" name="action2" value="BUY now" />
											</form>
										</p>  
										<h3 class="text_line"></h3> 
										<br></br> 
										<hr style="border" color="red">';
							}
							mysqli_close($con);
						}
					?>
					
				</div>
			</div>
			<div id="scroll">
				<a title="Scroll to the top" class="top" href="#"><img src="images/top.png" alt="top" /></a>
			</div>
			<footer>
				<p><img src="images/twitter.png" alt="twitter" />&nbsp;<img src="images/facebook.png" alt="facebook" />&nbsp;<img src="images/rss.png" alt="rss" /></p>
				<p><a href="index.html">Home</a> | <a href="examples.html">Examples</a> | <a href="page.html">A Page</a> | <a href="another_page.html">Another Page</a> | <a href="contactus.php">Contact Us</a></p>
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
