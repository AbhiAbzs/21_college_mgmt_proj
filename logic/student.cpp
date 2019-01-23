#include <iostream>
using namespace std;

//My Inclusion
#include "login.cpp"

void studentDetails();
void option(int n);
class Student : public Login
{
      private:
        int id = 0;
        string name;
        string email;
        string mob;
        string address;

      public:
        Student(){};
        Student(int id, string name, string email, string mob, string address)
        {
                this->id = id;
                this->name = name;
                this->email = email;
                this->mob = mob;
                this->address = address;
        }

        string getName()
        {
                return name;
        }

      public:
        void showDetails()
        {
                cout << "the details enter by you are as following:-" << endl;
                cout << "Student id is =>" << id << endl;
                cout << "Student name is =>" << name << endl;
                cout << "Student email is =>" << email << endl;
                cout << "Student mob is =>" << mob << endl;
                cout << "Student address is =>" << address << endl;
        }
};
void studentDetails()
{
        /* int id,num;
        string name,email,add;
        cout<<"enter student id";
        cin>>id;
        cout<<"enter student name";
        cin>>name;
        cout<<"enter student email id";
        cin>>email;
        cout<<"enter student's number";
        cin>>num;
        cout<<"enter student's address";
        cin>>add;
*/
        Student s = Student(1, "divy deep", "divydeepsinghhada@gmail.com", "8989221009", "bhanwarkua");
        int op, n;
        cout << "Hi"
             << " " << s.getName() << " "
             << "welcome to your desh" << endl;
        do
        {
                cout << "choose your option form following menu:-" << endl;
                cout << "1>to view details" << endl;
                cin >> op;
                cout << "press 2 for continue:-" << endl;
                cin >> n;
                option(op);
        } while (n == 1);
}

void option(int n)
{
        Student s1 = Student(1, "divy deep", "divydeepsinghhada@gmail.com", "8989221009", "bhanwarkua");
        s1.showDetails();
}
