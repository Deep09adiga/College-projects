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
											<li><a href="15.php">15.6 Inch</a></li>
											<li><a href="above16.php">Above 15.6 Inch</a></li>
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
							<li><a href="viewcart.php">View Cart</a></li>
							<li><a href="login.php">Login</a></li>
							<li><a href="bill.php">Buy</a></li>
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
					<FORM NAME ="form1" METHOD ="POST" ACTION ="purpose.php">
						<div class="sidebar">
							<h3><font face="ar destine">Purpose</font></h3>
							<Input type = 'Checkbox' Name ='ch1' value ="gaming" />      Gaming</br></br>
							<Input type = 'Checkbox' Name ='ch2' value ="business" />      Business</br></br>
							<Input type = 'Checkbox' Name ='ch3' value ="home" />      Home</br></br>
							<Input type = 'Checkbox' Name ='ch4' value ="everyday" />      Everyday</br></br>
							<Input type = 'Checkbox' Name ='ch5' value ="ultrabook" />      Ultra book</br></br>
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
						if (isset($_POST['Submit1'])) {
							if (isset($_POST['ch1'])) {
								$ch1 = $_POST['ch1'];
								if ($ch1 == 'gaming') {
									$ch1 = 'checked';
								}
							}
							if (isset($_POST['ch2'])) {
								$ch2 = $_POST['ch2'];
								if ($ch2 == 'business') {
									$ch2 = 'checked';
								}
							}
							if (isset($_POST['ch3'])) {
								$ch3 = $_POST['ch3'];

								if ($ch3 == 'home') {
									$ch3 = 'checked';
								}
							}
							if (isset($_POST['ch4'])) {
								$ch4 = $_POST['ch4'];
			
								if ($ch4 == 'everyday') {
									$ch4 = 'checked';
								}
							}
							if (isset($_POST['ch5'])) {
								$ch5 = $_POST['ch5'];
			
								if ($ch5 == 'ultrabook') {
									$ch5 = 'checked';
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
							if($ch1=='unchecked' && $ch2=='checked' && $ch3=='checked' && $ch4=='checked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business' OR PURPOSE='everyday' OR PURPOSE='home' OR PURPOSE='ultrabook'");		
							elseif($ch1=='checked' && $ch2=='unchecked' && $ch3=='checked' && $ch4=='checked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR  PURPOSE='home' OR PURPOSE='everyday' OR PURPOSE='ultrabook'");
							elseif($ch1=='checked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='business' OR PURPOSE='everyday' OR PURPOSE='ultrabook'");
							elseif($ch1=='checked' && $ch2=='checked' && $ch3=='checked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='business' OR PURPOSE='home' OR PURPOSE='ultrabook'");
							elseif($ch1=='checked' && $ch2=='checked' && $ch3=='checked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='business' OR PURPOSE='home' OR PURPOSE='everyday'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='checked' && $ch4=='checked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='home' OR PURPOSE='everyday' OR PURPOSE='ultrabook'");
							elseif($ch1=='unchecked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business'  OR PURPOSE='everyday' OR PURPOSE='ultrabook'");
							elseif($ch1=='unchecked' && $ch2=='checked' && $ch3=='checked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business' OR PURPOSE='home'  OR PURPOSE='ultrabook'");
							elseif($ch1=='unchecked' && $ch2=='checked' && $ch3=='checked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business' OR PURPOSE='home' OR PURPOSE='everyday'");
							elseif($ch1=='checked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='everyday' OR PURPOSE='ultrabook'");
							elseif($ch1=='checked' && $ch2=='unchecked' && $ch3=='checked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='home' OR PURPOSE='ultrabook'");
							elseif($ch1=='checked' && $ch2=='unchecked' && $ch3=='checked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='home' OR PURPOSE='everyday'");
							elseif($ch1=='checked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='business' OR  PURPOSE='ultrabook'");
							elseif($ch1=='checked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='business' OR PURPOSE='everyday'");
							elseif($ch1=='checked' && $ch2=='checked' && $ch3=='checked' && $ch4=='unchecked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='business' OR PURPOSE='home'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='everyday' OR PURPOSE='ultrabook'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='checked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='home' OR PURPOSE='ultrabook'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='checked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='home' OR PURPOSE='everyday'");
							elseif($ch1=='unchecked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business' OR PURPOSE='ultrabook'");
							elseif($ch1=='unchecked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business' OR PURPOSE='everyday'");
							elseif($ch1=='unchecked' && $ch2=='checked' && $ch3=='checked' && $ch4=='unchecked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business' OR PURPOSE='home'");
							elseif($ch1=='checked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='everyday'");
							elseif($ch1=='checked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='ultrabook'");
							elseif($ch1=='checked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming' OR PURPOSE='business'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='checked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='ultrabook'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='checked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='everyday'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='checked' && $ch4=='unchecked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='home'");
							elseif($ch1=='unchecked' && $ch2=='checked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='business'");
							elseif($ch1=='checked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system where PURPOSE='gaming'");
							elseif($ch1=='unchecked' && $ch2=='unchecked' && $ch3=='unchecked' && $ch4=='unchecked' && $ch5=='unchecked')
								$result = mysqli_query($con,"SELECT * FROM system");
							
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
				<p><a href="index.html">Home</a> | <a href="examples.html">Examples</a> | <a href="page.html">A Page</a> | <a href="another_page.html">Another Page</a> | <a href="contact.php">Contact Us</a></p>
				<p>Copyright &copy; DK-Softwares | <a href="http://www.css3templates.co.uk">design from DK-Softwares.co.in</a></p>
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
