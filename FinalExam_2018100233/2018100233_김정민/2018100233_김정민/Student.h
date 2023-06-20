#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	void Print(ostream& out);
	void InitValue(int _id, const char* _name, float _gpa);
	void getValue(int& _id, char* _name, float& _gpa);
	char* getName();
	void operator = (Student stu);
	bool operator == (Student stu);
	bool operator != (Student stu);
private:
	int id;
	char name[30];
	float gpa;
	
};



