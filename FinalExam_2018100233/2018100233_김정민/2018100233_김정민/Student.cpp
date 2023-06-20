#include "Student.h"

void Student::Print(ostream& out)
{
	out << "(" << id << "," << name << "," << gpa << ")";
}
void Student::InitValue(int _id, const char* _name, float _gpa)
{
	id = _id;
	strcpy(name, _name);
	gpa = _gpa;
}
void Student::getValue(int& _id, char* _name, float& _gpa)
{
	_id = id;
	strcpy(_name, name);
	_gpa = gpa;
}
char* Student::getName()
{
	return name;
}

void Student::operator = (Student stu)
{
    id = stu.id;
    strcpy(name, stu.name);
    gpa = stu.gpa;
}

bool Student::operator != (Student stu)
{
    if ((strcmp(name, stu.getName()) == 0) && (id == stu.id) && (gpa == stu.gpa))
    {
        return false;
    }
    return true;
}

bool Student::operator == (Student stu)
{
    if ((strcmp(name, stu.getName()) == 0) && (id == stu.id) && (gpa == stu.gpa))
    {
        return true;
    }
    return false;
}

