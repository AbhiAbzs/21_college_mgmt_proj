#include <iostream>
#include <sqlite3.h>
using namespace std;

//Code for callback, which would print the result set.
static int callback(void *data, int argc, char **argv, char **azColName)
{
   int i;
   fprintf(stderr, "%s: ", (const char *)data);

   for (i = 0; i < argc; i++)
   {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }

   printf("\n");
   return 0;
}

void stud_db_create();
void stud_db_create_table();
void stud_db_view();
void stud_db_insert();
void stud_db_delete(int id);

int main(int argc, char *argv[])
{
   int id;
   // stud_db_create();
   // stud_db_create_table();
   stud_db_view();
   stud_db_insert();
   stud_db_view();

   cout << "Enter an id to delete\n";
   cin >> id;
   stud_db_view();
   stud_db_delete(id);
   stud_db_view();
   return 0;
}

//Database Creation
void stud_db_create()
{
   sqlite3 *db;
   int rc;

   rc = sqlite3_open("./college_db/college.db", &db);

   if (rc)
   {
      cerr << "Can't open database: \n"
           << sqlite3_errmsg(db);
      exit(0);
   }
   else
   {
      cout << "Opened database successfully\n";
   }
   sqlite3_close(db);
}

//table creation
void stud_db_create_table()
{
   string query;
   // Sql query to create student database
   query = "CREATE TABLE Student("
           "ID INT PRIMARY KEY NOT NULL,"
           "Name TEXT NOT NULL,"
           "Email INT NOT NULL,"
           "Mobile INT NOT NULL,"
           "Address CHAR(50));";
   sqlite3 *db;
   int rc = sqlite3_open("./college_db/college.db", &db);
   char *errorMsg;
   rc = sqlite3_exec(db, query.c_str(), NULL, 0, &errorMsg);

   if (rc != SQLITE_OK)
   {
      cerr << "Error Create Table\n"
           << sqlite3_errmsg(db) << endl;
      // sqlite3_free(errorMsg);
   }
   else
      cout << "Table created Successfully" << endl;
   sqlite3_close(db);
}

//View student table
void stud_db_view()
{
   sqlite3 *db;
   char *errMsg;
   int exit = sqlite3_open("./college_db/college.db", &db);
   string query = "SELECT * FROM Student;";
   cout<<endl;
   sqlite3_exec(db, query.c_str(), callback, NULL, NULL);
   cout<<endl;
}

//insertion in table ||will change it into templated style
void stud_db_insert()
{
   sqlite3 *db;
   char *errMsg;
   int exit = sqlite3_open("./college_db/college.db", &db);

   string sql;
   sql = ("INSERT INTO Student VALUES(1, 'Abhijit', 'abhi@cisin.com', 9263523101, 'south tukoganj');"
          "INSERT INTO Student VALUES(2, 'DivyDeep', 'divydeep@cisin.com', 9234751234, 'indrapuri');"
          "INSERT INTO Student VALUES(3, 'Dheeraj', 'dheeraj@cisin.com', 8212113101, 'west road');");

   exit = sqlite3_exec(db, sql.c_str(), NULL, 0, &errMsg);
   if (exit != SQLITE_OK)
   {
      cerr << "Error Insert " << sqlite3_errmsg(db) << endl;
      sqlite3_free(errMsg);
   }
   else
      cout << "Records created Successfully!" << endl;

   sqlite3_close(db);
}

//Deletion in table ||will change it into templated style
void stud_db_delete(int id)
{
   sqlite3 *db;
   char *errMsg;
   string sql;
   int exit = sqlite3_open("./college_db/college.db", &db);

   sql = "DELETE FROM Student WHERE ID = " + to_string(id) + ";";
   exit = sqlite3_exec(db, sql.c_str(), NULL, 0, &errMsg);
   if (exit != SQLITE_OK)
   {
      cerr << "Error DELETE " << sqlite3_errmsg(db) << endl;
      sqlite3_free(errMsg);
   }
   else
      cout << "Record deleted Successfully!" << endl;

   sqlite3_close(db);
}