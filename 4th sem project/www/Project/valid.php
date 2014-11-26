<?PHP
if(isset($_POST['user']) && isset($_POST['pass'])){
	$useri=$_POST['user'];
	$pass=$_POST['pass'];
	if(!empty($useri) || !empty($pass)){
		$con=mysqli_connect("localhost","root","root","syskart");
		if (mysqli_connect_errno()){
			echo "Failed to connect to MySQL: " . mysqli_connect_error();
		}
		$result = mysqli_query($con,"select count(*) from user where user_id='$useri' and password='$pass'");
		$row = mysqli_fetch_array($result);
		$count=$row['count(*)'];
		//echo $num_rows;
		if ($count == 0) {
			$errorMessage = "Invalid password,username";
			header ("Location: login.php");
			mysqli_close($con);
		}
		else{
			mysqli_close($con);
			session_start();
			$_SESSION['login'] = $useri;
			$sav_user=fopen("current_user.txt","w");
			fwrite($sav_user,$useri);			
			header ("Location: home.php");
		}
		//mysqli_close($con);
	}
	else{
		echo 'please enter all the fields';
		header ("Location: login.php");
	}	
}	
?>