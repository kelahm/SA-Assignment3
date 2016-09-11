// Database.cpp

#include "Database.h"
#include <iostream>
#include <sqlite3.h>

using namespace std;

Database::Database() {
	//code implementation
	
	dc = sqlite3_open("Inventory.db")
}

string Database::setItem(item) {
	//open database
	dc = sqlite3_open("Inventory.db", &db)

	//create sql statement
	sql =	"INSERT INTO Inventory (item,price,quantity) " \
			"VALUES ("item", null, null); ";

	//execute statement
	dc = 

	//close database
	dc = 

}