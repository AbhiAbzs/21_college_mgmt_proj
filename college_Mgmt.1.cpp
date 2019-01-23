#include <iostream>
#include <fstream>
// #include <string>

//My Inclusion
#include "./view/college_dsp.cpp"
#include "./view/student_dsp.cpp"

main(int argc, char const *argv[])
{
	int col_ch_opt = 0, stu_ch_opt = 0;
	do
	{
		col_ch_opt = college_dsp();
		if (col_ch_opt == 1)
		{
			stu_ch_opt = student_dsp();
		}
		else if (col_ch_opt == 4)
		{
			system("clear");
			cout << "\n\t\t Good Bye.\n\t\t Thankyou for using our service.\n";
		}
		else
		{
			cout << "\n\t\t\tPlease select a valid option.\n";
		}
	} while (col_ch_opt != 4);
	return 0;
}
