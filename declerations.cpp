/* 
 * Decleration idea (Not final, may change).
 *  will delete later when each classes will be made for each entity.
 * */


#include <string>
using namespace std;

typedef struct student
{
    string fname;
    string lname;
    string c_id;
    string classes;
} student;

student studentData;

struct teacher
{
    string f_name;
    string l_name;
    string qualification;
    int xp;
    float pay;
    string subj;
    string addrs;
    string ph;
} tech[50];