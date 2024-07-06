#include "Student.h"
void Student::setname(char* n)
{
	int len = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		len++;
	}
	name = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		name[j] = n[j];
	}
	name[len] = '\0';
}
void Student::setage(int a)
{
	age = a;
}
char* Student::getname()
{
	return name;
}
int Student::getage()
{
	return age;
}
Student::Student()
{
	name = 0;
	age = 0;
}
Student::Student(char* n, int a)
{
	int len = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		len++;
	}
	name = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		name[j] = n[j];
	}
	name[len] = '\0';

	age = a;
}
Student::Student(Student& obj)
{
	int len = 0;
	for (int i = 0; obj.name[i] != '\0'; i++)
	{
		len++;
	}
	name = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		name[j] = obj.name[j];
	}
	name[len] = '\0';

	age = obj.age;
}
ostream& Student::operator<<(ostream& out)
{
	out << name;
	out << age;
	return out;
}
istream& Student::operator>>(istream& in)
{
	in >> name;
	in >> age;
	return in;
}