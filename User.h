#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>

using namespace std;

class User
{
private:
	string user;
public: 
	bool loggedIn; // attribute to determine whether the user is logged in.

	User();
	bool userExists(string username); // method to find whether the username exists.
	bool logIn(); // Check whether the user is still logged in. 
	void logOut(); // Method to log the user out. 

};

User :: User()
{
	loggedIn = false;
}

bool User :: userExists(string username)
{
	//This method checks a file to determine whether a username is registered. 

	string name;
	ifstream file;
	file.open("usernames.txt");
	if(file.fail())
		//Check to see if the file is open. 
	{
		cout << "File not opened"<< endl;
		exit(1);
	}
	while(!file.eof())
    {
        getline(file,name); 
        if (strcmp(username.c_str(), name.c_str()) == 0) 
		{
			loggedIn = true;
            return true;
		}
    }

	
    file.close();
	return false;
}
bool User :: logIn()
{
	return loggedIn;
}
void User :: logOut()
{
	loggedIn = false;
}