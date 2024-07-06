#include"Admin.h"
#include"Class.h"
#include"Student.h"
#include"Subject.h"
#include"Teacher.h"
#include<iostream>
using namespace std;
int main()
{
	Class obj;
	Subject obj1;
	Admin obj2;
	char* Sname = new char[100];
	char* Tname = new char[100];
	int age = 0, Tage = 0, classnumber = 0;
	char* password = new char[100];
	char* subject = new char[100];
	int a = 0, b = 0, c = 0;
	char ch = 0, ch1 = 0;
	cout << "Enter which section would you like to enter :" << endl;
	cout << "Press 1 for Admin Section" << endl;
	cout << "Press 2 for Teacher Section" << endl;
	cout << "Press 3 for Student Section" << endl;
	cin >> a;
in:
	if (a == 1)
	{
		cout << "Enter Password to login :" << endl;
		cin.ignore();
		cin.getline(password, 90);
		obj2.setpassword(password);
		if (password == "User1231")
		{
			cout << "Access Granted" << endl;
			cout << "Press 1 to see all the Teachers in the Academy" << endl;
			cout << "Press 2 to see all the Students in the Academy" << endl;
			cin >> b;
			switch (b)
			{
			case 1:
				obj1.PrintDataofTeacher();
				cout << "Would you still like to continue using the Program :" << endl;
				cin >> ch;
				if (ch == 'Y' || ch == 'y')
				{
					cout << "Enter which section would you like to enter :" << endl;
					cout << "Press 1 for Admin Section" << endl;
					cout << "Press 2 for Teacher Section" << endl;
					cout << "Press 3 for Student Section" << endl;
					cin >> a;
					goto in;
				}
				else if (ch == 'N' || ch == 'n')
				{
					break;
				}
			case 2:
				obj.PrintStudentData();
				cout << "Would you still like to continue using the Program :" << endl;
				cin >> ch;
				if (ch == 'Y' || ch == 'y')
				{
					cout << "Enter which section would you like to enter :" << endl;
					cout << "Press 1 for Admin Section" << endl;
					cout << "Press 2 for Teacher Section" << endl;
					cout << "Press 3 for Student Section" << endl;
					cin >> a;
					goto in;
				}
				else if (ch == 'N' || ch == 'n')
				{
					break;
				}
			}
		}
		else
		{
			cout << "Access Not Granted" << endl;
			goto out;
		}
	}
	else if (a == 2)
	{
		cout << "How many Teacher Details you want to enter :" << endl;
		cin >> c;
		for (int i = 0; i < c; i++)
		{
			cout << "Enter Name of Teacher :" << endl;
			cin.ignore();
			cin.getline(Tname, 90);
			obj1.T.setTname(Tname);
			cout << "Enter Age of Teacher :" << endl;
			cin >> Tage;
			obj1.T.setTage(Tage);
			cout << "Enter Subject of Teacher :" << endl;
			cin.ignore();
			cin.getline(subject, 90);
			obj1.setsubject(subject);
		}
		cout << "Would you like to see the enteries:" << endl;
		cin >> ch1;
		if (ch1 == 'Y' || ch1 == 'y')
		{
			obj1.PrintDataofTeacher();
			cout << "Would you still like to continue using the Program :" << endl;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				cout << "Enter which section would you like to enter :" << endl;
				cout << "Press 1 for Admin Section" << endl;
				cout << "Press 2 for Teacher Section" << endl;
				cout << "Press 3 for Student Section" << endl;
				cin >> a;
				goto in;
			}
			else if (ch == 'N' || ch == 'n')
			{
				cout << "Thank you for using our program" << endl;
				goto out;
			}
		}
		else
		{
			cout << "Thank you for using our program" << endl;
			goto out;
		}
	}
	else if (a == 3)
	{
		cout << "How many Student Details you would like to enter :" << endl;
		cin >> c;
		for (int i = 0; i < c; i++)
		{
			cout << "Name of Student :" << endl;
			cin.ignore();
			cin.getline(Sname, 90);
			obj.S.setname(Sname);
			cout << "Enter Age of Student :" << endl;
			cin >> age;
			obj.S.setage(age);
			cout << "Enter Class Number of Student :" << endl;
			cin.ignore();
			cin >> classnumber;
			obj.setclassnumber(classnumber);
		}
		cout << "Would you like to see the Enteries ?" << endl;
		cin >> ch1;
		if (ch1 == 'Y' || ch1 == 'y')
		{
			obj.PrintStudentData();
			cout << "Would you still like to continue using the Program :" << endl;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				cout << "Enter which section would you like to enter :" << endl;
				cout << "Press 1 for Admin Section" << endl;
				cout << "Press 2 for Teacher Section" << endl;
				cout << "Press 3 for Student Section" << endl;
				cin >> a;
				goto in;
			}
			else if (ch == 'N' || ch == 'n')
			{
				cout << "Thank you for using our program " << endl;
				goto out;
			}
		}
		else
		{
			cout << "Thank you for using the program" << endl;
			goto out;
		}
	}
	else
	{
	cout << "Invalid Entry" << endl;
	cout<<"Enter which section would you like to enter : " << endl;
		cout << "Press 1 for Admin Section" << endl;
	cout << "Press 2 for Teacher Section" << endl;
	cout << "Press 3 for Student Section" << endl;
	cin >> a;
	goto in;
 }
out:
return 0;
}