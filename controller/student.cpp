#include <iostream>
using namespace std;

//My Inclusion
#include "declerations/student.hh"

void Student::showDetails()
{
        cout << "The details enter by you are as following:-" << endl;
        cout << "Student id is =>" << id << endl;
        cout << "Student First name is =>" << f_name << endl;
        cout << "Student Last name is =>" << l_name << endl;
        cout << "Student mobile number is =>" << mob << endl;
        cout << "Student email is =>" << email << endl;
        cout << "Student address is =>" << address << endl;
}
void Student::insertDetails()
{
        system("clear");
        cout << "\tPlease Enter Students details" << endl;
        cout << "===============================" << endl;
        cout << "Enter Student First name =>\t";
        getline(cin, f_name);
        cout << "Enter Student Last name =>\t";
        getline(cin, l_name);
        cout << "Enter Student mob =>\t";
        cin >> mob;
        cout << "Enter Student email =>\t";
        getline(cin, email);
        cout << "Enter Student address =>\t";
        getline(cin, address);
}

