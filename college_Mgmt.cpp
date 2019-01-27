#include <iostream>
#include <fstream>
// #include <string>
using namespace std;

//My Inclusion
#include "./view/college_dsp.cpp"
#include "./view/student_dsp.cpp"
#include "./logic/student.cpp"
#include "./logic/login.cpp"

main(int argc, char const *argv[])
{
	int coll_ch_opt = 0;
	int stud_ch_opt = 0;
	do
	{
		coll_ch_opt = college_dsp();
		switch (coll_ch_opt)
		{
		case 1:
			stud_ch_opt = student_dsp();
			break;
		case 3:

			break;
		case 4:
			system("clear");
			cout << "\n\t\t Good Bye.\n\t\t Thankyou for using our service.\n";
			break;
		default:
			cout << "\n\t\t\tPlease select a valid option.\n";
			break;
		}
	} while (coll_ch_opt != 4);

	return 0;
}
