#include <string>
using namespace std;

//My Inclusion
#include "declerations.hh"
#include "login.hh"

class Student : public Login
{
  private:
    int id = 0;
    string f_name;
    string l_name;
    int mob;
    string email;
    string address;
    string pass;
    coll_member type;

  public:
    // Student(){};
    Student(int id, string f_name, string l_name, int mob, string email, string address, string pass)
    {
        this->id = id;
        this->f_name = f_name;
        this->l_name = l_name;
        this->mob = mob;
        this->email = email;
        this->address = address;
        this->pass = pass;
    }
    void showDetails();
    void insertDetails();
    int student_dsp();
};