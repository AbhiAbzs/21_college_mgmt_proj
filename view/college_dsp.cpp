#include <iostream>
using namespace std;

int college_dsp()
{
    system("clear");
    int coll_ch_opt = 0;
    //Display process
    cout << "\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
    cout << "\n\n\t\t\t\t\t  COLLEGE DATA MANAGEMENT\n\n";
    cout << "\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
    cout << "\n\n\t\t\t\t\t\t:MAIN SCREEN:\n\n";
    cout << "\t\t\t\t\t 1. Students Account" << endl;
    cout << "\t\t\t\t\t 2. Faculty Account [Later]" << endl; //Deal later
    cout << "\t\t\t\t\t 3. Admin Account [Later]" << endl;     //Deal later
    cout << "\t\t\t\t\t 4. Exit Program" << endl;
    cout << "\n\n\t\t\t\t Enter your choice:  ";
    cin >> coll_ch_opt;
    system("clear");
    cin.ignore();
    return coll_ch_opt;
}