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
      			<div class="content">
<?php	
	if(isset($_POST['confirm-home'])) {
		$con=mysqli_connect("localhost","root","root","syskart");
		if (mysqli_connect_errno()){
			echo "Failed to connect to MySQL: ". mysqli_connect_error();
		}
		$item_no=$_POST['hide'];
		$user_id=$_POST['user_id'];
		$card_no=$_POST['card_no'];
		$pin=$_POST['pin'];
		$rate = mysqli_query($con,"select PRICE from system where serial_no=$item_no");
		$rate = mysqli_fetch_array($rate);
		$rate = $rate['PRICE'];
		$amount=$rate;
		$bill_amount=$amount;
		$result =mysqli_query($con,"select count(*) from billing");
		$row = mysqli_fetch_array($result);
		if($row['count(*)']==0)
			$bill_no=0;
		else{
			$bill_no =mysqli_query($con,"select max(BILL_NO) from billing");
			$bill_no = mysqli_fetch_array($bill_no);
			$bill_no=$bill_no['max(BILL_NO)']+1;
		}
		
		$vat=5.5*($bill_amount/100);
		$total=$vat+$bill_amount;
		mysqli_query($con,"insert into billing (BILL_NO,BILL_AMOUNT,BIL_USER_ID,CARD_NO,PIN,ITEM_NO,VAT_AMOUNT,TOTAL) VALUES($bill_no,$bill_amount,'$user_id',$card_no,$pin,'$item_no',$vat,$total)");
		$user_info=mysqli_query($con,"select * from user where user_id='$user_id'");
		$sys_info=mysqli_query($con,"select * from system where serial_no='$item_no'");
		$bill_info=mysqli_query($con,"select * from billing where bil_user_id='$user_id' and bill_no=$bill_no");
		$user_info = mysqli_fetch_array($user_info);
		$sys_info = mysqli_fetch_array($sys_info);
		$bill_info = mysqli_fetch_array($bill_info);
		echo	'<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td align="centre"><font face="AR DESTINE" size="400" color="blue">SYSKART</font></td>
					<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td align="center"><b><font face="Times New Roman" size="4">TAX INVOICE</font></b></td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="43%">To
										<br>'.$user_info['FNAME'].' '.$user_info['LNAME'].',
										<br><br>'.$user_info['STREET'].',
										<br>'.$user_info['CITY'].',
										<br>'.$user_info['STATE'].',
										<br>'.$user_info['COUNTRY'].',
										<br>'.$user_info['POSTAL_CODE'].',
										<br>'.$user_info['PHNO'].',
										<br>'.$user_info['EMAIL'].'
					</td>
					<td>Invoice no:'.$bill_info['BILL_NO'].'<br><br><br><br>Date and Time of Sale:'.$bill_info['DATE'].'<br></TD>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="5.4%">Sl.NO</td>
					<td width="37.6%">Paticulars</td>
					<td width="8%">Warranty</td>
					<td width="8%">Quantity</td>
					<td width="21.5%">Rate</td>
					<td width="21.5%">Total Amount</td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="5.4%">1</td>
					<td width="37.6%">	Brand: '.$sys_info['BRAND'].'
									<br>Model: '.$sys_info['MODEL'].'
									<br>Screen size: '.$sys_info['SCREEN'].'
									<br>Operating System: '.$sys_info['OS'].'
									<br>Processor: '.$sys_info['PROCESSOR'].'
									<br>Type of use: '.$sys_info['PURPOSE'].'
									<br>Hard Disk Capacity: '.$sys_info['HDD'].'
					</td>
					<td width="8%">1</td>
					<td width="8%">'.$bill_info['QUANT'].'</td>
					<td width="21.5%">'.$bill_info['BILL_AMOUNT'].'</td>
					<td width="21.5%">'.$bill_info['BILL_AMOUNT'].'</td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td>TOTAL<br><br>VAT(5.5%)</td>
					<td width="57%">'.$bill_info['BILL_AMOUNT'].'<br><br>'.$bill_info['VAT_AMOUNT'].'</td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="43%">Total ='.$bill_info['TOTAL'].' </td>
					<td>*Goods once sold will not be taken back.<br>
						*Echange can be done within 15 days from the date when item is received.<br>
						*The warranty for the item sold is as per the respective manufacturers terms and conditions.<br>
						<b>
						*Warranty void on physically damaged, burnt or trackcut items.<br>
						*Please retain invoice for warranty purpose</b></td>
		</table>		';
		//$Tno = mysql_real_escape_string($_POST['name']);
		mysqli_close($con);
	}
	if(isset($_POST['confirm-this-item'])) {
		$con=mysqli_connect("localhost","root","root","syskart");
		if (mysqli_connect_errno()){
			echo "Failed to connect to MySQL: ". mysqli_connect_error();
		}
		$item_no=$_POST['hide'];
		$user_id=$_POST['user_id'];
		$card_no=$_POST['card_no'];
		$pin=$_POST['pin'];
		$bill_amount=0;
		$rate = mysqli_query($con,"select PRICE from system where serial_no=$item_no");
		$rate = mysqli_fetch_array($rate);
		$rate = $rate['PRICE'];
		$quantity = mysqli_query($con,"select QUANTITY from cart where ITEM_ID='$item_no' and cart_user_id='$user_id' ");
		$quantity = mysqli_fetch_array($quantity);
		$quantity = $quantity['QUANTITY'];
		$amount=$rate*$quantity;
		$bill_amount+=$amount;
		$result =mysqli_query($con,"select count(*) from billing");
		$row = mysqli_fetch_array($result);
		if($row['count(*)']==0)
			$bill_no=0;
		else{
			$bill_no =mysqli_query($con,"select max(BILL_NO) from billing");
			$bill_no = mysqli_fetch_array($bill_no);
			$bill_no=$bill_no['max(BILL_NO)']+1;
		}
		
		$vat=5.5*($bill_amount/100);
		$total=$vat+$bill_amount;
		mysqli_query($con,"insert into billing (BILL_NO,BILL_AMOUNT,BIL_USER_ID,CARD_NO,PIN,QUANT,ITEM_NO,VAT_AMOUNT,TOTAL) VALUES($bill_no,$bill_amount,'$user_id',$card_no,$pin,$quantity,'$item_no',$vat,$total)");
		$user_info=mysqli_query($con,"select * from user where user_id='$user_id'");
		$sys_info=mysqli_query($con,"select * from system where serial_no='$item_no'");
		$bill_info=mysqli_query($con,"select * from billing where bil_user_id='$user_id' and bill_no=$bill_no");
		$user_info = mysqli_fetch_array($user_info);
		$sys_info = mysqli_fetch_array($sys_info);
		$bill_info = mysqli_fetch_array($bill_info);
		echo	'<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td align="centre"><font face="AR DESTINE" size="400" color="blue">SYSKART</font></td>
					<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td align="center"><b><font face="Times New Roman" size="4">TAX INVOICE</font></b></td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="43%">To
										<br>'.$user_info['FNAME'].' '.$user_info['LNAME'].',
										<br><br>'.$user_info['STREET'].',
										<br>'.$user_info['CITY'].',
										<br>'.$user_info['STATE'].',
										<br>'.$user_info['COUNTRY'].',
										<br>'.$user_info['POSTAL_CODE'].',
										<br>'.$user_info['PHNO'].',
										<br>'.$user_info['EMAIL'].'
					</td>
					<td>Invoice no:'.$bill_info['BILL_NO'].'<br><br><br><br>Date and Time of Sale:'.$bill_info['DATE'].'<br></TD>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="5.4%">Sl.NO</td>
					<td width="37.6%">Paticulars</td>
					<td width="8%">Warranty</td>
					<td width="8%">Quantity</td>
					<td width="21.5%">Rate</td>
					<td width="21.5%">Total Amount</td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="5.4%">1</td>
					<td width="37.6%">	Brand: '.$sys_info['BRAND'].'
									<br>Model: '.$sys_info['MODEL'].'
									<br>Screen size: '.$sys_info['SCREEN'].'
									<br>Operating System: '.$sys_info['OS'].'
									<br>Processor: '.$sys_info['PROCESSOR'].'
									<br>Type of use: '.$sys_info['PURPOSE'].'
									<br>Hard Disk Capacity: '.$sys_info['HDD'].'
					</td>
					<td width="8%">1</td>
					<td width="8%">'.$bill_info['QUANT'].'</td>
					<td width="21.5%">'.$rate.'</td>
					<td width="21.5%">'.$bill_info['BILL_AMOUNT'].'</td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td>TOTAL<br><br>VAT(5.5%)</td>
					<td width="57%">'.$bill_info['BILL_AMOUNT'].'<br><br>'.$bill_info['VAT_AMOUNT'].'</td>
				</table>
				<table border="1" cellpadding="5" cellspacing="0" width="1000">
					<td width="43%">Total ='.$bill_info['TOTAL'].' </td>
					<td>*Goods once sold will not be taken back.<br>
						*Echange can be done within 15 days from the date when item is received.<br>
						*The warranty for the item sold is as per the respective manufacturers terms and conditions.<br>
						<b>
						*Warranty void on physically damaged, burnt or trackcut items.<br>
						*Please retain invoice for warranty purpose</b></td>
		</table>		';
		//$Tno = mysql_real_escape_string($_POST['name']);
		mysqli_close($con);
	}
	if(isset($_POST['confirm-all'])) {
		$con=mysqli_connect("localhost","root","root","syskart");
		if (mysqli_connect_errno()){
			echo "Failed to connect to MySQL: ". mysqli_connect_error();
		}
		$useri=file("current_user.txt");
		foreach($useri as $uname);
			$uname;
		
		$user_id=$_POST['user_id'];
		if($user_id==$uname){
			$card_no=$_POST['card_no'];
			$pin=$_POST['pin'];
			$loop = mysqli_query($con,"select item_id from cart where cart_user_id='$user_id' ");
			$bill_amount=0;
			while($loop1 = mysqli_fetch_array($loop)){
				$item_no=$loop1['item_id'];
				$rate = mysqli_query($con,"select PRICE from system where serial_no='$item_no'");
				$rate = mysqli_fetch_array($rate);
				$rate = $rate['PRICE'];
				$quantity = mysqli_query($con,"select QUANTITY from cart where ITEM_ID=$item_no and cart_user_id='$user_id' ");
				$quantity = mysqli_fetch_array($quantity);
				$quantity = $quantity['QUANTITY'];
				$amount=$rate*$quantity;
				$bill_amount=$bill_amount+$amount;
			}
				$result =mysqli_query($con,"select count(*) from billing");
				$row = mysqli_fetch_array($result);
				if($row['count(*)']==0)
					$bill_no=0;
				else{	
					$bill_no =mysqli_query($con,"select max(BILL_NO) from billing");
					$bill_no = mysqli_fetch_array($bill_no);
					$bill_no=$bill_no['max(BILL_NO)']+1;
				}
		
				$vat=5.5*($bill_amount/100);	
				$total=$vat+$bill_amount;

				mysqli_query($con,"insert into billing (BILL_NO,BILL_AMOUNT,BIL_USER_ID,CARD_NO,PIN,QUANT,ITEM_NO,VAT_AMOUNT,TOTAL) VALUES($bill_no,$bill_amount,'$user_id',$card_no,$pin,$quantity,'$item_no',$vat,$total)");
				$user_info=mysqli_query($con,"select * from user where user_id='$user_id'");
				$bill_info=mysqli_query($con,"select * from billing where bil_user_id='$user_id' and bill_no=$bill_no");
				$user_info = mysqli_fetch_array($user_info);
				$bill_info = mysqli_fetch_array($bill_info);
				echo	'<table border="1" cellpadding="5" cellspacing="0" width="1000">
							<td align="centre"><font face="AR DESTINE" size="400" color="blue">SYSKART</font></td>
							<table border="1" cellpadding="5" cellspacing="0" width="1000">
							<td align="center"><b><font face="Times New Roman" size="4">TAX INVOICE</font></b></td>
						</table>
						<table border="1" cellpadding="5" cellspacing="0" width="1000">
						<td width="43%">To
										<br>'.$user_info['FNAME'].' '.$user_info['LNAME'].',
										<br><br>'.$user_info['STREET'].',
										<br>'.$user_info['CITY'].',
										<br>'.$user_info['STATE'].',
										<br>'.$user_info['COUNTRY'].',
										<br>'.$user_info['POSTAL_CODE'].',
										<br>'.$user_info['PHNO'].',
										<br>'.$user_info['EMAIL'].'
						</td>
						<td>Invoice no:'.$bill_info['BILL_NO'].'<br><br><br><br>Date and Time of Sale:'.$bill_info['DATE'].'<br></TD>
					</table>
					<table border="1" cellpadding="5" cellspacing="0" width="1000">
						<td width="5.4%">Sl.NO</td>
						<td width="37.6%">Paticulars</td>
						<td width="8%">Warranty</td>
						<td width="8%">Quantity</td>
						<td width="21.5%">Rate</td>
						<td width="21.5%">Total Amount</td>
					</table>';
				$loop = mysqli_query($con,"select item_id from cart where cart_user_id='$user_id' ");
				$bill_amount=0;
				while($loop1 = mysqli_fetch_array($loop)){
				$item_no=$loop1['item_id'];
					$rate = mysqli_query($con,"select PRICE from system where serial_no='$item_no'");
					$rate = mysqli_fetch_array($rate);
					$rate = $rate['PRICE'];
					$quantity = mysqli_query($con,"select QUANTITY from cart where ITEM_ID=$item_no and cart_user_id='$user_id' ");
					$quantity = mysqli_fetch_array($quantity);
					$quantity = $quantity['QUANTITY'];
					$amount=$rate*$quantity;
					$bill_amount=$bill_amount+$amount;
					$sys_info=mysqli_query($con,"select * from system where serial_no='$item_no'");
					$sys_info = mysqli_fetch_array($sys_info);
					
					echo	'<table border="1" cellpadding="5" cellspacing="0" width="1000">
						<td width="5.4%">1</td>
						<td width="37.6%">	Brand: '.$sys_info['BRAND'].'
										<br>Model: '.$sys_info['MODEL'].'
										<br>Screen size: '.$sys_info['SCREEN'].'
										<br>Operating System: '.$sys_info['OS'].'
										<br>Processor: '.$sys_info['PROCESSOR'].'
										<br>Type of use: '.$sys_info['PURPOSE'].'
										<br>Hard Disk Capacity: '.$sys_info['HDD'].'
						</td>
						<td width="8%">1</td>
						<td width="8%">'.$quantity.'</td>
						<td width="21.5%">'.$rate.'</td>
						<td width="21.5%">'.$amount.'</td>
					</table>';
				}
				echo'
					<table border="1" cellpadding="5" cellspacing="0" width="1000">
						<td>TOTAL<br><br>VAT(5.5%)</td>
						<td width="19.5%">'.$bill_info['BILL_AMOUNT'].'<br><br>'.$bill_info['VAT_AMOUNT'].'</td>
					</table>
					<table border="1" cellpadding="5" cellspacing="0" width="1000">
						<td width="43%">Total ='.$bill_info['TOTAL'].' </td>
						<td>*Goods once sold will not be taken back.<br>
							*Echange can be done within 15 days from the date when item is received.<br>
							*The warranty for the item sold is as per the respective manufacturers terms and conditions.<br>
							<b>
							*Warranty void on physically damaged, burnt or trackcut items.<br>
							*Please retain invoice for warranty purpose</b></td>
			</table>		';
		}
		//$Tno = mysql_real_escape_string($_POST['name']);
		mysqli_close($con);
	}
	/*
	$total=0;
	$quantity=0;
	$con=mysqli_connect("localhost","root","root","syskart");
// Check connection<br/>
  if (mysqli_connect_errno())
  {
  echo "Failed to connect to MySQL: ". mysqli_connect_error();
  }
  $result =mysqli_query($con,"select *from system,cart where serial_no=item_id");
while($row = mysqli_fetch_array($result))
  {
	$total=$total+$row['prize'];
  	$quantity++;
  }
$result =mysqli_query($con,"Insert into billing (Bill_amount,user_id,card_no,pin) values ($total,'$ch1',$ch2,$ch3)");*/

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