#include <iostream>
#include <string>
#include "User.h"

using namespace std;

int main()
{
	
	string username;
	User user;
	cin >> username;
	
	if (user.userExists(username))
	{
		cout << "User Exists" << endl;
	}
	else
	{
		cout << "User does not exist" << endl;
	}
	system ("pause");

	

	return 0;
}

