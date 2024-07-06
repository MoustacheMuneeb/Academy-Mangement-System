#pragma once
#include<iostream>
using namespace std;
class Admin
{
protected:
	char* password;
public:
	void setpassword(char*);
	char* getpassword();

	Admin();
	Admin(char*);
	Admin(Admin&);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};

