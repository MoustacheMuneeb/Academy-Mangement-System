#pragma once
#include"Teacher.h"
class Subject:public Teacher
{
protected:
	char* subject;
public:
	void setsubject(char*);
	char* getsubject();

	Teacher T;

	Subject();
	Subject(char*);
	Subject(Subject&);

	ostream& operator<<(ostream&);
	istream& operator>>(istream&);


	void PrintDataofTeacher();
};

