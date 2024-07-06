#pragma once
#include"Admin.h"
class Student:public Admin
{
protected:
	char* name;
	int age;
public:
	void setname(char*);
	void setage(int);

	char* getname();
	int getage();

	Student();
	Student(char*, int);
	Student(Student&);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};

