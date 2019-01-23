#include<iostream>
using namespace std;

void logIn(int n)
{

    switch (n)
    {
    case 1:
        if (n = 1)
        {
            studentLogin();
        }
        break;
        /*  case 2:if(n=2){
            facultyLogin();
        }

        
         break;
        case 3:if(n=3){
            adminLogin();
        }*/
        break;
    default:
        cout << "please choose correct option from the above list:-" << endl;
    }
}

void studentLogin()
{
    string UserId = "divy deep";
    string pswd = "divydeep";
    cout << "enter the Student User Id :-" << endl;
    cin >> UserId;
    cout << "enter the password:-" << endl;
    cin >> pswd;

    if (UserId == "divy deep" && pswd == "divydeep")
    {
        cout << "you have sucessfully LogedIn" << endl;
        //studentDetails();
    }
}