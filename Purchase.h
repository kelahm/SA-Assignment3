#include "SCart.h"
#include <iostream> 
#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

class Purchase
{
	double total;
	string address;
	string ccn;
	Cart cart;
	
	Purchase();
	void setAddress(string uAddress);
	string getAddress();
	char confirmPurchase();
	void writeToStorage(string user, string item, int quantity, double price, double orderTotal, string ccn, string address);
	//void updateInventory(string item, int quantity);
	//int checkInventory(string item);

};

Purchase :: Purchase()
{
	address = "";
	ccn = "";
}
void Purchase :: setAddress(string uAddress)
{
	address = uAddress;
}
string Purchase :: getAddress()
{
	return address;
}
char Purchase :: confirmPurchase()
{
	char response;
	cout << "Your total is " << total << ", would you like to purchase this order?"<< endl;
	cout << "Type Y to complete the purchase or N to cancel this purchase" << endl;
	cin >> response;
	toupper(response);
	return response;
}
void Purchase :: writeToStorage(string user, string item, int quantity, double price, double orderTotal, string ccn, string address)
{
	ofstream myFile;
	myFile.open("storedOrder.txt");
	myFile << "User\t\Address\tItem\tQuantity\tPrice\tOrder Total\tCredit Card"<<endl;
	myFile << user << "\t" << address << "\t" << item << "\t" << quantity << "\t" << price << "\t" << orderTotal << "\t" << ccn << endl;
	myFile.close();
}
/*void Purchase :: updateInventory(string item, int quantity)
{
	
}

int Purchase :: checkInventory(string item)
{
	
}*/
