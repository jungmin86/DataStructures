#include "Student.h"

void Student::Print(ostream& out)
{
	out << "(" << id << "," << name << "," << gpa << ")";
}
void Student::InitValue(int _id, const char* _name, float _gpa)
{
	id = _id;
	strcpy_s(name, sizeof(name), _name);
	gpa = _gpa;
}
void Student::getValue(int& _id, char* _name, float& _gpa)
{
	_id = id;
	strcpy_s(_name, sizeof(name), name);
	_gpa = gpa;
}
char* Student::getName()
{
	return name;
}
void Student::operator = (Student stu)
{
	/* code */   
}

bool Student::operator != (Student stu)
{
	/* code */   
}

bool Student::operator == (Student stu)
{
	/* code */   
}

