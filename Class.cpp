#include "Class.h"
void Class::setclassnumber(int c)
{
	classnumber = c;
}
int Class::getclassnumber()
{
	return classnumber;
}
Class::Class()
{
	classnumber = 0;
}
Class::Class(int c)
{
	classnumber = c;
}
Class::Class(Class& obj)
{
	classnumber = obj.classnumber;
}
void Class::PrintStudentData()
{
	cout << "Name of Student :" << S.getname() << endl;
	cout << "Age of Student :" << S.getage() << endl;
	cout << "Class of Student :" << getclassnumber() << endl;
}
ostream& Class::operator<<(ostream& out)
{
	out << classnumber;
	return out;
}
istream& Class::operator>>(istream& in)
{
	in >> classnumber;
	return in;
}