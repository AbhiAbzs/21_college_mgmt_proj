#include <iostream>
#include <sqlite3.h>
using namespace std;

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

void db_create();
void db_create_table();
void db_insert();

int main(int argc, char *argv[])
{
   //code
   db_create();
   db_create_table();
   db_insert();
   return 0;
}

//Database Creation
void db_create()
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
void db_create_table()
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

//insertion in table ||will change it into templated style
void db_insert()
{
   sqlite3 *DB;
   char *messaggeError;
   int exit = sqlite3_open("./college_db/college.db", &DB);
   string query = "SELECT * FROM Student;";

   cout << "STATE OF TABLE BEFORE INSERT" << endl;

   sqlite3_exec(DB, query.c_str(), callback, NULL, NULL);

   string sql("INSERT INTO Student VALUES(1, 'Abhijit', 'abhi@cisin.com', 9263523101, 'south tukoganj');"
              "INSERT INTO Student VALUES(2, 'DivyDeep', 'divydeep@cisin.com', 9234751234, 'indrapuri');"
              "INSERT INTO Student VALUES(3, 'Dheeraj', 'dheeraj@cisin.com', 8212113101, 'west road');");

   exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
   if (exit != SQLITE_OK)
   {
      cerr << "Error Insert" << endl;
      sqlite3_free(messaggeError);
   }
   else
      cout << "Records created Successfully!" << endl;

   cout << "STATE OF TABLE AFTER INSERT" << endl;

   sqlite3_exec(DB, query.c_str(), callback, NULL, NULL);

   sql = "DELETE FROM Student WHERE ID = 2;";
   exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
   if (exit != SQLITE_OK)
   {
      cerr << "Error DELETE" << sqlite3_errmsg(DB) <<endl;
      sqlite3_free(messaggeError);
   }
   else
      cout << "Record deleted Successfully!" << endl;

   cout << "STATE OF TABLE AFTER DELETE OF ELEMENT" << endl;
   sqlite3_exec(DB, query.c_str(), callback, NULL, NULL);

   sqlite3_close(DB);
}
/* {
   sqlite3 *db;
   char *errorMsg;
   int rc = sqlite3_open("./college_db/college.db", &db);
   string query = "SELECT * FROM Student;";

   cout << "\nSTATE OF TABLE BEFORE INSERT" << endl;

   sqlite3_exec(db, query.c_str(), NULL, NULL, NULL);
   query + "INSERT INTO Student VALUES(" + "1, 'STEVE', 'GATES', 30, 'PALO ALTO', 1000.0);"
                                           "INSERT INTO Student VALUES(2, 'BILL', 'ALLEN', 20, 'SEATTLE', 300.22);"
                                           "INSERT INTO Student VALUES(3, 'PAUL', 'JOBS', 24, 'SEATTLE', 9900.0);";

   rc = sqlite3_exec(db, query.c_str(), NULL, 0, &errorMsg);
   if (rc != SQLITE_OK)
   {
      cerr << "Error Insert\n"
           << sqlite3_errmsg(db) << endl;
      // sqlite3_free(errorMsg);
   }
   else
      cout << "Records created Successfully!" << endl;
   cout << "STATE OF TABLE AFTER INSERT\n";

   sqlite3_exec(db, query.c_str(), callback, NULL, NULL);
   sqlite3_close(db);
} */

/* 
   query = "DELETE FROM Student WHERE ID = 2;";
   rc = sqlite3_exec(db, query.c_str(), NULL, 0, &errorMsg);
   if (rc != SQLITE_OK)
   {
      cerr << "Error DELETE" << endl;
      sqlite3_free(errorMsg);
   }
   else
      cout << "Record deleted Successfully!" << endl;

   cout << "STATE OF TABLE AFTER DELETE OF ELEMENT" << endl;
   sqlite3_exec(db, query.c_str(), callback, NULL, NULL);
 */