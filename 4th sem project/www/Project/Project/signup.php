<html>
<body bgcolor="cyan">
<h2>Sign Up</h2>
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