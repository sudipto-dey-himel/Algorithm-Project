#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class Registration_and_Login_System
{
private:
    string username, password;

public:
    void displayMenu();
    void registration();
    void login();
    void forgotPassword();
};

void Registration_and_Login_System::displayMenu()
{
    cout << "\n\n\t\t Welcome!\n";
    cout << "\t1. Register (if you are a new user) \n";
    cout << "\t2. Login\n";
    cout << "\t3. Forgot Password\n";
    cout << "\t4. Exit\n";
    cout << endl;
}

void Registration_and_Login_System::registration()
{
    cout << "\tEnter Username :: ";
    cin >> username;

    // Check if the file with the given username exists
    ifstream fileIn(username + ".txt");
    if (fileIn)
    {
        fileIn.close();
        cout << "\tUsername already exists. Please choose another.\n";
        return;
    }

    fileIn.close();

    cout << "\tEnter a password :: ";
    cin >> password;

    // Create a file with the username as the filename and store the username and password
    ofstream fileOut(username + ".txt");
    fileOut << username << " " << password << endl;

    cout << "\tRegistration successful!\n";
}

void Registration_and_Login_System::login()
{
    cout << "\tEnter your username :: ";
    cin >> username;

    // Check if the file with the given username exists
    ifstream fileIn(username + ".txt");
    if (!fileIn)
    {
        cout << "\tUsername not found. Please register or enter a valid username.\n";
        return;
    }

    // Read the stored username and password from the file
    string storedUsername, storedPassword;
    fileIn >> storedUsername >> storedPassword;
    fileIn.close(); // Close the file after reading

    cout << "\tEnter your password :: ";
    string enteredPassword;
    cin >> enteredPassword;

    // Compare the entered password with the stored password
    if (storedPassword == enteredPassword)
    {
        cout << "\tLogin successful!\n";
    }
    else
    {
        cout << "\tInvalid username or password. Please try again.\n";
    }
}

void Registration_and_Login_System::forgotPassword()
{
    cout << "\tEnter your username :: ";
    cin >> username;
    ifstream fileIn(username + ".txt");
    if (!fileIn)
    {
        cout << "\tUsername not found. Please enter a valid username.";
        return;
    }

    string storedUsername, storedPassword;
    fileIn >> storedUsername >> storedPassword;
    fileIn.close();

    cout << "\tEnter a new password :: ";
    cin >> password;

    ofstream fileOut(username + ".txt");
    fileOut << username << " " << password << endl;
    fileOut.close();

    cout << "\tPassword reset successful!\n";
}

int main()
{
    int choice;
    Registration_and_Login_System ob;

    while (choice != 4)
    {
        ob.displayMenu();
        cout << "\tEnter your choice :: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            ob.registration();
            break;
        case 2:
            ob.login();
            break;
        case 3:
            ob.forgotPassword();
            break;
        case 4:
            cout << "\tExiting from the program. Thank you!";
            break;
        default:
            cout << "\tInvalid Input. Try again.";
            break;
        }
    }

    return 0;
}
