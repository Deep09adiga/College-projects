<?php
if(isset($_POST['confirm-this-item'])) {
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
										<br>'.$user_info['FNAME'].' '.$user_info['LNAME'].'
										<br>'.$user_info['STREET'].'
										<br>'.$user_info['CITY'].'
										<br>'.$user_info['STATE'].'
										<br>'.$user_info['COUNTRY'].'
										<br>'.$user_info['POSTAL_CODE'].'
										<br>'.$user_info['PHNO'].'
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
				$bill_amount=0;
				while($loop1 = mysqli_fetch_array($loop)){
					$item_no=$loop1['item_id'];
					$rate = mysqli_query($con,"select PRICE from system where serial_no='$item_no'");
					$rate = mysqli_fetch_array($rate);
					$rate = $rate['PRICE'];
					$quantity = mysqli_query($con,"select QUANTITY from cart where ITEM_ID=$item_no and cart_user_id='$USER_ID' ");
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
		}
		//$Tno = mysql_real_escape_string($_POST['name']);
		mysqli_close($con);
	}
?>