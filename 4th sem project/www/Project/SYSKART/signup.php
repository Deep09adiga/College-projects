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
      			<div class="content">
					<form action="adduser.php" method="POST" onsubmit="return ValidateForm(this);">
<input id="SnapHostID" name="SnapHostID" type="hidden" value="Y2J3HUP727U8" />
<script type="text/javascript">
function ValidateForm(frm) {
	
if (frm.FirstName.value == "") {alert('First Name is required.');frm.FirstName.focus();return false;}

if (frm.LastName.value == "") {alert('Last Name is required.');frm.LastName.focus();return false;}

if (frm.id.value == "") {alert('User ID is required.');frm.id.focus();return false;}

if (frm.password.value == "") {alert('Password is required.');frm.password.focus();return false;}

if (frm.CPassword.value == "") {alert('Please confirm the password.');frm.CPassword.focus();return false;}

if (frm.Phone.value == "") {alert('Phone Number is required.');frm.Phone.focus();return false;}

if (frm.FromEmailAddress.value == "") {alert('Email address is required.');frm.FromEmailAddress.focus();return false;}

if (frm.FromEmailAddress.value.indexOf("@") < 1 || frm.FromEmailAddress.value.indexOf(".") < 1) {alert('Please enter a valid email address.');frm.FromEmailAddress.focus();return false;}

if (frm.City.value == "") {alert('City is required.');frm.City.focus();return false;}

if (frm.State.value == "") {alert('State is required.');frm.State.focus();return false;}

if (frm.Country.value == "") {alert('Country is required.');frm.Country.focus();return false;}

if (frm.Zip.value == "") {alert('Postal code is required.');frm.Zip.focus();return false;}	

return true; }



</script>
<table border="0" cellpadding="5" cellspacing="0" width="600">
<tr>
<td><b>First:</b></td>
<td>
<input id="FirstName" name="FirstName" type="text" maxlength="60" style="width:146px; border:1px solid #999999" />
</td></tr>
<tr>
<td><b>Last Name:</b></td>
<td><input id="LastName" name="LastName" type="text" maxlength="60" style="width:146px; border:1px solid #999999" /><br>
</td></tr>

<tr>
<td><b> User ID:</b></td>
<td><input id="id" name="id" type="text" maxlength="100" style="width:250px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>Password:</b></td>
<td><input id="password" name="password" type="password" maxlength="120" style="width:300px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>Confirm Password:</b></td>
<td><input id="CPassword" name="CPassword" type="password" maxlength="120" style="width:300px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>Phone:</b></td>
<td><input id="Phone" name="Phone" type="text" maxlength="43" style="width:250px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>Email address*:</b></td>
<td><input id="FromEmailAddress" name="FromEmailAddress" type="text" maxlength="60" style="width:300px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>City:</b></td>
<td><input id="City" name="City" type="text" maxlength="120" style="width:300px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>State:</b></td>
<td><input id="State" name="State" type="text" maxlength="120" style="width:300px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>Country:</b></td>
<td><input id="Country" name="Country" type="text" maxlength="120" style="width:300px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>Zip/Postal Code:</b></td>
<td><input id="Zip" name="Zip" type="text" maxlength="30" style="width:100px; border:1px solid #999999" /></td>
</tr><tr>
<td colspan="2" align="center">
<table border="0" cellpadding="0" cellspacing="0">
</table>
<input id="skip_Submit" name="skip_Submit" type="submit" value="Submit" />
</td>
</tr>
</table>
<br />
</form>
				</div>
			</div>
			<div id="scroll">
				<a title="Scroll to the top" class="top" href="#"><img src="images/top.png" alt="top" /></a>
			</div>
			<footer>
				<p><img src="images/twitter.png" alt="twitter" />&nbsp;<img src="images/facebook.png" alt="facebook" />&nbsp;<img src="images/rss.png" alt="rss" /></p>
				<p><a href="home.php">Home</a> | <a href="laptop.php">laptops</a> |<a href="contact.php">Contact Us</a></p>
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
