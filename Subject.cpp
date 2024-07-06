#include "Subject.h"
void Subject::setsubject(char* s)
{
	int len = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	subject = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		subject[j] = s[j];
	}
	subject[len] = '\0';
}
char* Subject::getsubject()
{
	return subject;
}
Subject::Subject()
{
	subject = 0;
}
Subject::Subject(char* s)
{
	int len = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	subject = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		subject[j] = s[j];
	}
	subject[len] = '\0';
}
Subject::Subject(Subject& obj)
{
	int len = 0;
	for (int i = 0; obj.subject[i] != '\0'; i++)
	{
		len++;
	}
	subject = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		subject[j] = obj.subject[j];
	}
	subject[len] = '\0';
}
ostream& Subject::operator<<(ostream& out)
{
	out << subject;
	return out;
}
istream& Subject::operator>>(istream& in)
{
	in >> subject;
	return in;
}
void Subject::PrintDataofTeacher()
{
	cout << "Name of Teacher :" << T.getTname() << endl;
	cout << "Age of Teacher :" << T.getTage() << endl;
	cout << "Teaching Subject :" << getsubject() << endl;
}