#include <iostream>
#include <fstream>

#include <string>
using namespace std;

class User {

public:
	string username;
	string password;

	void userRegister()
	{

		ofstream usersFile ("userData.txt");

		if (!usersFile.is_open())
		{
			usersFile.open("userData.txt");
		}

			usersFile << username << " " << password << endl;

			usersFile.close();
	}

};

int main() {
	
	User user1;
	
	cout << "Welcome!\n----\n\nPlease register.\nEnter a new username:\n";
	cin >> user1.username;

	cout << "\nPlease enter a new password:\n";
	cin >> user1.password;

	user1.userRegister();

	return 0;
}