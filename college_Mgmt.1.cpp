#include <iostream>
#include <fstream>
// #include <string>

//My Inclusion
#include "./view/college_dsp.cpp"
#include "./view/student_dsp.cpp"
#include "./student.cpp"
int main()
{
	int col_ch_opt=0,stu_ch_opt=0;
	Student stu(1,"divy deep","divydeepsinghhada@gmail.com","8989221009","bhanwarkua");
		col_ch_opt=college_dsp();
		if (col_ch_opt == 1)
		{
			stu_ch_opt = student_dsp();

			if(stu_ch_opt==1)
		{

				stu.showDetails();
		}








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
		while(col_ch_opt>4)
		{
				college_dsp();

		}
	return 0;
}
