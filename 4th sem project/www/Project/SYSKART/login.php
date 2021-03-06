<html><head>
    <title>Login</title>
    <style type="text/css">
        ::selection {
            background: transparent;
        }

        body {
            font-family: TriplexLight, Verdana;
            background-size: cover 100%;
        }

        .contain {
            position: absolute;
            display: block;
            height: 100%;
            width: 100%;
            -webkit-transition: .5s;
            -moz-transition: .5s;
            -o-transition: .5s;
            transition: .5s;
            z-index: 0;
        }

        #welcome {
            text-align: center;
            font-size: 75px;
            line-height: 32px;
            color: #fff;
            transform: scale(1);
        }

            #welcome p {
                margin-top: 150px;
            }

            #welcome span {
                font-size: 32px;
                color: #bbb;
                text-transform: uppercase;
            }

        input[type='checkbox'] {
            display: none;
        }

        input[type='reset'] {
            display: none;
        }

        input[type='submit'] {
            display: none;
        }

        label[for='checkme'] {
            position: absolute;
            cursor: pointer;
            background: #333;
            color: #fff;
            padding: 10px;
            z-index: 1;
        }

        input[type='checkbox']:checked ~ #content {
            background: rgba(0,0,0,.4);
        }

        input[type='checkbox']:checked ~ #welcome {
            display: none;
        }

        .box {
            position: relative;
            left: 0;
            right: 0;
            margin: 100px auto;
            padding: 10px 15px 20px 15px;
            display: none;
            width: 300px;
            background: rgba(255,255,255,0.75);
            box-shadow: 0 0 20px #000;
        }

            .box p {
                text-align: center;
                margin: 5px 0px;
                padding: 10px 0;
                background: #333;
                color: #fff;
            }

            .box a {
                text-align: right;
                font-size: 12px;
                text-decoration: none;
                color: blue;
            }

        input[type='checkbox']:checked ~ #content .box {
            display: block;
        }

        label[for='close'] {
            position: static;
            cursor: pointer;
            float: left;
            display: block;
            width: 10px;
            height: 10px;
            line-height: 8px;
            text-align: center;
            background: #333;
            color: #fff;
            padding: 10px;
            z-index: 1;
            border: 2px solid #fff;
            border-radius: 30px;
            box-shadow: 0 0 5px #000;
            margin: -25px;
        }

        #sign {
            float: right;
            cursor: pointer;
            text-align: right;
            margin: 4px 0;
            padding: 4px 8px;
            background: #333;
            color: #fff;
        }

            #sign:hover {
                color: #333;
                background: none;
            }

        .label {
            display: inline-block;
            width: 100px;
            padding: 4px 2px;
        }

        .login {
            border: none;
            outline: none;
            width: 180px;
            background: #bbb;
            color: #fff;
            padding: 2px 5px;
            margin: 1px 0;
        }
    </style>
</head>

<body style="background-image:url(C:\wamp\www\Project\HP-ENVY-x2.jpg.jpg)">
    <form action="valid.php" method="POST">
        <input id="checkme" type="checkbox">
        <label for="checkme">
            SignIn</label>
		
	    <div class="contain" id="welcome">
            <p>
                Welcome<br />
                <span>sign in to access</span>
            </p>
        </div>

        <div class="contain" id="content">
            <div class="box" id="box">
                <input id="close" type="reset">
                <label for="close">x</label>

                <p>Login to your account</p>

                <label class="label" for="text">Username</label>
                <input class="login" id="user" name="user" type="user">

                <label class="label" for="pass">Password</label>
                <input class="login" id="pass" name="pass" type="password">

                <label for="submit" id="sign">sign in</label>
                <input id="submit" type="submit" value="go to mobile page">

                <br />
                <br />
                <a href="#">Forgot password?</a><br>
                <a href="signup.php">Sign up</a>
            </div>
        </div>
	</form>
	
</body>
</html>