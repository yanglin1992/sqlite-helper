#include <iostream>
//#include "DBHelper.h"
#include "SQLiteHelper.h"

using namespace std;

int main()
{
	SQLiteHelper test;
	test.openDB("users.db");
	//Cursor ret = test.querySQL("select account, name from STAFF");

	test.execSQL("CREATE TABLE Persons("
	"Id_P int,"
	"LastName varchar(255),"
	"FirstName varchar(255),"
	"Address varchar(255),"
	"City varchar(255)"
	")");
	//test.querySQL("INSERT INTO Persons VALUES(1, 'Gates', 'Bill', 'Xuanwumen 10', 'Beijing')");
	
	for (int i = 0; i < 30; i++)
	{
		char sql[500] = { 0 };
		sprintf(sql, "INSERT INTO Persons VALUES(%d, 'Gates', 'Bill', 'Xuanwumen 10', 'Beijing')", i);
		test.execSQL(sql);
	}

	getchar();
	return 0;
}