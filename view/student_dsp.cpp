#include <iostream>
using namespace std;

//My Inclusion
#include "../logic/student.cpp"

int Student::student_dsp()
{
    int stu_ch_opt=0;
    cout << "\n\n\t\t\t\t\t  STUDENT PROFILE \n\n";
    cout << "\t\t\t\t====================================================";
    cout << "\n\n\t\t\t\t\t 1. Show my profile" << endl;
    cout << "\t\t\t\t\t 2. Request Information Edit [Later]" << endl; //Deal later
    cout << "\t\t\t\t\t 3. Change Password" << endl;
    cout << "\t\t\t\t\t 4. Return to main menu" << endl;
    cout << "\t\t\t\t\t 5. Exit" << endl;
    cout << "\n\n\t\t\t\t Enter your choice:  ";
    cin >> stu_ch_opt;
    system("clear");
    return stu_ch_opt;
}