#include<iostream>
//#include<utility>
#include "./student.cpp"
using namespace std;
void studentLogin();
//void facultyLogin();
//void adminLogin();
void  logIn(int );
int main()
{
    int n;
    int ch;
    cout<<"WELCOME TO INDORE INSTITUTE OF SCIENCE AND TECHNOLOGY:-"<< endl;
    do{

    cout<<"1>Student Account:-"<<endl;
    cout<<"2>Faculty Account:-"<<endl;
    cout<<"3>Admin Accoutn:-"<<endl;
    cout<<"choose your account:"<<endl;
    cin>>n;
    cout<<"you have chossed the number"<<endl<<n<<endl;
    logIn(n);
    cout<<"if yo want to continue enter yes :-"<<endl;
    cin>>ch;
    }while(ch==1);
    return 0;
}

void logIn(int n){

    switch(n){
        case 1:if(n=1){
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
        default : cout<<"please choose correct option from the above list:-"<<endl;


    }
}

void studentLogin(){ 
    string UserId="divydeep";
    string pswd= "divydeep";
    cout<<"enter the Student User Id :-"<<endl;
    cin>>UserId;
    cout<<"enter the password:-"<<endl;
    cin>>pswd;


    if(UserId =="divydeep" && pswd =="divydeep"){
        cout<<"you have sucessfully LogedIn"<<endl;
         studentDetails();
    }

    else
    cout<<"wrong user name or password";
}

