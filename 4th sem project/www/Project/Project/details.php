<html>
<head>
<style>
table,th,td{
border-collapse:collapse;
}
th,td{
padding:5px;
}
</style>
</head>
<body>
<link rel="stylesheet" href="p3.css">
<h1 align="center">Billing</h1>
<div align="center" id="menu" >
<ul>
<li><a href=""><font color="red">GOTO -></font></a></li>
<li><a href="page1.php">HOME</a></li>
<li><a href="system.php">Cancel</a></li>
</ul>
</div>

<h2>BILLING</h2>
<form action="bill.php" method="POST" onsubmit="return ValidateForm(this);">
<input id="SnapHostID" name="SnapHostID" type="hidden" value="Y2J3HUP727U8" />
<script type="text/javascript">
function ValidateForm(frm) {
	
if (frm.id.value == "") {alert('User ID is required.');frm.id.focus();return false;}

if (frm.card.value == "") {alert('Card Number is required.');frm.card.focus();return false;}

if (frm.pin.value == "") {alert('PIN Number is required.');frm.pin.focus();return false;}

return true; }



</script>
<table border="0" cellpadding="5" cellspacing="0" width="600">
<tr>
<td><b> User ID:</b></td>
<td><input id="id" name="id" type="text" maxlength="100" style="width:250px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>Card number:</b></td>
<td><input id="card" name="card" type="phone" maxlength="20" style="width:250px; border:1px solid #999999" /></td>
</tr><tr>
<td><b>pin:</b></td>
<td><input id="pin" name="pin" type="password" maxlength="4" style="width:300px; border:1px solid #999999" /></td>
</tr><tr>
<td colspan="2" align="center">
<table border="0" cellpadding="0" cellspacing="0">
</table>
<input id="confirm" name="confirm" type="submit" value="confirm" />
</td>
</tr>
</table>
</form>
</body>
</html>