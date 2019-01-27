#include <iostream>
#include <sqlite3.h>
using namespace std;

// void db_Connect();
// void stud_create_table();
// void fac_create_table();

sqlite3 *db;
int rc = -1;

//Connection to Database
void db_connect()
{

   rc = sqlite3_open("./college_db/college.db", &db);

   if (rc != SQLITE_OK)
   {
      cerr << "Can't Connect to database.\n"
           << sqlite3_errmsg(db) << endl;
      exit(0);
   }
   else
      cout << "Connected to database successfully\n";
   rc = -1;
}
//Close Database Connection
void db_close()
{
   sqlite3_close(db);
}

//Student table creation
void stud_create_table()
{
   string query;
   // Sql query to create student database
   query = "CREATE TABLE IF NOT EXISTS Student ("
           "ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
           "F_name VARCHAR (15) NOT NULL,"
           "L_name VARCHAR (15) NOT NULL,"
           "Mobile INTEGER NOT NULL,"
           "Email VARCHAR (30),"
           "Address VARCHAR (50) NOT NULL,"
           "Pass VARCHAR (50) DEFAULT student);";

   char *errorMsg;
   rc = sqlite3_exec(db, query.c_str(), NULL, 0, &errorMsg);

   if (rc != SQLITE_OK)
   {
      cerr << "Error Creating Table\t" << sqlite3_errmsg(db) << endl;
      sqlite3_free(errorMsg);
   }
   else
      cout << "Student Table created Successfully." << endl;
   rc = -1;
}

//Faculty table creation
void fac_create_table()
{
   string query;
   // Sql query to create faculty database
   query = "CREATE TABLE IF NOT EXISTS Faculty ("
           "ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
           "F_name VARCHAR (15) NOT NULL,"
           "L_name VARCHAR (15) NOT NULL,"
           "Mobile INTEGER NOT NULL,"
           "Email VARCHAR (30),"
           "Address VARCHAR (50) NOT NULL,"
           "Salary INTEGER NOT NULL,"
           "Pass VARCHAR (50) DEFAULT faculty);";

   char *errorMsg;
   rc = sqlite3_exec(db, query.c_str(), NULL, 0, &errorMsg);

   if (rc != SQLITE_OK)
   {
      cerr << "Error Creating Table\t" << sqlite3_errmsg(db) << endl;
      sqlite3_free(errorMsg);
   }
   else
      cout << "Faculty Table created Successfully." << endl;
   rc = -1;
}