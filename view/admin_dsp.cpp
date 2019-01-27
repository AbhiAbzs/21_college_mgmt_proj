#include <iostream>
#include "college_dsp.cpp"
using namespace std;

int admin()
{
        system("clear");
        int choice1, choice2, i, n;
        cout << "1. Insert student details";
        cout << endl;
        cout << "2. Insert faculty details";
        cout << endl;
        cout << "Enter your choice";
        cout << endl;
        cin >> n;
        switch (n)
        {

        case 1:
        {

                cout << "\t\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
                cout << "\t\t\t\t\t1. Create new entry\n";
                cout << "\t\t\t\t\t2. Find and display entry\n";
                cout << "\t\t\t\t\t3. Jump to main\n";
                cout << endl;
                cout << "\n\n\t\t\t\tEnter your choice: ";
                cin >> choice1;

                switch (choice1)
                {
                        /*
case 1:
{
}
case 2:
{
}*/
                case 3:
                {
                        college_dsp();
                }
                default:
                {
                        cout << "wrong choice";
                }
                }
        }
        case 2:
        {

                cout << "\t\t\t\tFACULTY INFORMATION AND BIO DATA SECTION\n\n\n";
                cout << "\t\t\t\t\t1. Create new entry\n";
                cout << "\t\t\t\t\t2. Find and display entry\n";
                cout << "\t\t\t\t\t3. Jump to main\n";
                cout << "\n\n\t\t\t\tEnter your choice: ";
                cin >> choice2;

                switch (choice2)
                {
                /*
case 1:
{
}
case 2:
{
}*/
                case 3:
                {
                        college_dsp();
                }
                default:
                        cout << "wrong choice";
                }
        }
        default:
                cout << "wrong choice";
                break;
        }

        return 0;
}