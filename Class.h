#pragma once
#include"Student.h"
class Class:public Student
{
protected:
	int classnumber;
public:
	void setclassnumber(int);
	int getclassnumber();

	Student S;

	Class();
	Class(int);
	Class(Class&);

	void PrintStudentData();

	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};

