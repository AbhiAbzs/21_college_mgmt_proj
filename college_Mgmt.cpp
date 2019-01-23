#include <iostream>
#include <fstream>
// #include <string>

//My Inclusion
#include "./view/college_dsp.cpp"
#include "./view/student_dsp.cpp"

main(int argc, char const *argv[])
{
	int col_ch_opt = 0;
	int stu_ch_opt=0;
	do
	{
		col_ch_opt = college_dsp();
		switch (col_ch_opt)
		{
		case 1:
			stu_ch_opt=student_dsp();
			break;
		case 4:
			system("clear");
			cout << "\n\t\t Good Bye.\n\t\t Thankyou for using our service.\n";
			break;
		default:
			cout << "\n\t\t\tPlease select a valid option.\n";
			break;
		}
	} while (col_ch_opt != 4);

	return 0;
}
