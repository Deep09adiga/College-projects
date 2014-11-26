<?PHP
if(isset($_POST['skip_Submit']))
{
	$fname=$_POST['FirstName'];
	$lname=$_POST['LastName'];
	$user_id=$_POST['id'];
	$password=$_POST['password'];
	$cpassword=$_POST['CPassword'];
	$phone=$_POST['Phone'];
	$email=$_POST['FromEmailAddress'];
	$Street=$_POST['Street'];
	$city=$_POST['City'];
	$state=$_POST['State'];
	$country=$_POST['Country'];
	$zip=$_POST['Zip'];

	$con=mysqli_connect("localhost","root","root","syskart");
	

	if (mysqli_connect_errno())
  		{
  			echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}

  	$SQL = "SELECT * FROM user WHERE userid = $user_id";
		$result = mysqli_query($con,"$SQL");
		$num_rows = mysql_num_rows($result);

		if ($num_rows > 0) {
			$errorMessage = "Username already taken";
			header ("Location: signup.php");
		}
		else
		{
			mysqli_query($con,"insert into user values('$fname','$lname','$user_id','$password',$phone,'$email','$Street','$city','$state','$country',$zip)");
			mysqli_close($con);

			session_start();
			$_SESSION['login'] = $email;

			header ("Location: home.php");
		}
mysqli_close($con);
}
?>