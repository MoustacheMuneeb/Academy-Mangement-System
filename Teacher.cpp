#include "Teacher.h"
void Teacher::setTname(char* Tn)
{
	int len = 0;
	for (int i = 0; Tn[i] != '\0'; i++)
	{
		len++;
	}
	Tname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		Tname[j] = Tn[j];
	}
	Tname[len] = '\0';
}
void Teacher::setTage(int Ta)
{
	Tage = Ta;
}
char* Teacher::getTname()
{
	return Tname;
}
int Teacher::getTage()
{
	return Tage;
}
Teacher::Teacher()
{
	Tname = 0;
	Tage = 0;
}
Teacher::Teacher(char* Tn, int Ta)
{
	int len = 0;
	for (int i = 0; Tn[i] != '\0'; i++)
	{
		len++;
	}
	Tname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		Tname[j] = Tn[j];
	}
	Tname[len] = '\0';

	Tage = Ta;
}
Teacher::Teacher(Teacher& obj)
{
	int len = 0;
	for (int i = 0; obj.Tname[i] != '\0'; i++)
	{
		len++;
	}
	Tname = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		Tname[j] = obj.Tname[j];
	}
	Tname[len] = '\0';

	Tage = obj.Tage;
}
ostream& Teacher::operator<<(ostream& out)
{
	out << Tname;
	out << Tage;
	return out;
}
istream& Teacher::operator>>(istream& in)
{
	in >> Tname;
	in >> Tage;
	return in;
}