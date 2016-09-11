// Database.h
#ifndef Database_H
#define Database_H

class Database {
	//code declaration
	sqlite3 *db;
	int dc;
	char *sql;

	string item;
	double price;
	int quantity;
	string user;
	int ccn;
	string address;

public:
	setItem(string item);
	setPrice(double price);
	setQuantity(int quantity);
	setUser(string user);
	setCCN(int ccn);
	setAddress(string address);
	getItem();
	getPrice();
	getQuantity();
	getUser();
	getCCN();
	getAddress();


};

#endif // DATABASE_H