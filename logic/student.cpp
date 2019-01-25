#include <iostream>
using namespace std;

//My Inclusion
#include "login.cpp"

class Student : public Login
{
      private:
        int id = 0;
        string name;
        string email;
        int mob;
        string address;

      public:
        Student(){};
        Student(int id, string name, string email, int mob, string address)
        {
                this->id = id;
                this->name = name;
                this->email = email;
                this->mob = mob;
                this->address = address;
        }

      public:
        void showDetails()
        {
                cout << "The details enter by you are as following:-" << endl;
                cout << "Student id is =>" << id << endl;
                cout << "Student name is =>" << name << endl;
                cout << "Student email is =>" << email << endl;
                cout << "Student mob is =>" << mob << endl;
                cout << "Student address is =>" << address << endl;
        }
        void insertDetails()
        {
                cout << "\tPlease Enter your details"<< endl;
                cout << "==============================="<< endl;
                cout << "Enter Student id =>\t";
                cin>>id;
                cout << "Enter Student name =>\t";
                getline(cin, name);
                cout << "Enter Student email =>\t";
                getline(cin, email);
                cout << "Enter Student mob =>\t";
                cin>>mob;
                cout << "Enter Student address =>\t";
                getline(cin, address);
        }
};
