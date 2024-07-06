#include "Admin.h"
void Admin::setpassword(char* p)
{
	int len = 0;
	for (int i = 0; p[i] != '\0'; i++)
	{
		len++;
	}
	password = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		password[j] = p[j];
	}
	password[len] = '\0';
}
char* Admin::getpassword()
{
	return password;
}
Admin::Admin()
{
	password = 0;
}
Admin::Admin(char*p)
{
	int len = 0;
	for (int i = 0; p[i] != '\0'; i++)
	{
		len++;
	}
	password = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		password[j] = p[j];
	}
	password[len] = '\0';
}
Admin::Admin(Admin& o)
{
	int len = 0;
	for (int i = 0; o.password[i] != '\0'; i++)
	{
		len++;
	}
	password = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		password[j] = o.password[j];
	}
	password[len] = '\0';
}
ostream& Admin::operator<<(ostream& out)
{
	out << password;
	return out;
}
istream& Admin::operator>>(istream& in)
{
	in >> password;
	return in;
}