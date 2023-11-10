# Description
A registration and login system using C++ This system allows new users to register by providing a unique username and password. Then they can login and reset their password through a command-line interface.
# Code Overview
The program uses text files to store user information. Each user has a unique text file named after their username.
 -Class: "Registration_and_Login_System":
This class encapsulates the functions of the registration and login systems.
Mathods:
  -displayMenu():
Display the main menu with options for registration, login, password reset, and exit.
  -registration():
Allows the user to register by entering a unique username and password.
  -login():
Validates user login by comparing entered credentials with stored information.
  -forgotPassword():
Allows users to reset their password by entering a new one.
  -Main Function ('main()'):
The main() function creates an instance of the 'Registration_and_Login_System' class and runs a loop to interact with the user until they choose to exit.
# Usage:
1. Choose an option from the displayed menu (1 for register, 2 for login, 3 for password reset, 4 for exit). If you are a new user, you must register first and then login.
2. For registration, enter the unique username and password.
3. For logging in, enter the registered username and password.
4. For resetting the password, enter the registered username and a new password.
# Here are some images for anyone to understand:
# Registration:
<img width="236" alt="image" src="https://github.com/sudipto-dey-himel/CPP-Project/assets/136897150/04a9a0f5-ae01-4be7-a5be-232dbd0af4a5">

# Login
<img width="227" alt="image" src="https://github.com/sudipto-dey-himel/CPP-Project/assets/136897150/84f3c998-7339-4c8b-8a46-83c4ea11d17e">

# Password Reset:
<img width="233" alt="image" src="https://github.com/sudipto-dey-himel/CPP-Project/assets/136897150/801981af-28b0-4b13-be58-97adeb354789">

# If anyone enter the the wrong username or password:
<img width="293" alt="image" src="https://github.com/sudipto-dey-himel/CPP-Project/assets/136897150/2704fe85-d5ce-4126-981f-528d7eed5959">

# If anyone enter the same username twice or more for registration:
<img width="301" alt="image" src="https://github.com/sudipto-dey-himel/CPP-Project/assets/136897150/85e7101a-8740-4244-868a-5cc052837d56">






