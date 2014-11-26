<?php
		$useri=fopen("current_user.txt","r");
		fread($uname,$useri);
		echo $uname;

?>