#pragma once
#include"Admin.h"
class Teacher:public Admin
{
protected:
	char* Tname;
	int Tage;
public:
	void setTname(char*);
	void setTage(int);
	char* getTname();
	int getTage();

	Teacher();
	Teacher(char*, int);
	Teacher(Teacher& obj);

	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};

