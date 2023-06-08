#include "Student.h"

void Print(ostream& out, Student stu[], int numelement)
{
	for(int i=0; i<numelement; i++)
	{
		stu[i].Print(out);
	}
}
void Student::Print(ostream& out)
{
	out << id << "\t" << name << "\t" << gpa << endl;
}
void Student::InitValue(int _id, char* _name, float _gpa)
{
	id = _id;
	strcpy(name, _name);
	gpa = _gpa;
}
void Student::getValue(int& _id, char* _name, float& _gpa)
{
	_id = id;
    strcpy(name, _name);
	_gpa = gpa;	
}
char* Student::getName()
{
	return name;
}
int Student::getId() {
    
    return id;
}

void Student::operator = (Student stu)
{
	id = stu.id;
	strcpy(name, stu.name);
	gpa = stu.gpa;
}

bool Student::operator < (Student stu)
{
    if (strcmp(name, stu.name) < 0) {
        return true;
    }
    else {
        return false;
    }
}
bool Student::operator <= (Student stu)
{
    if (strcmp(name, stu.name) <= 0) {
        return true;
    }
    else {
        return false;
    }
}

void PrintByPointer(ostream& out, Student* values[], int numValues)
{
	for(int i=0; i<numValues; i++)
	{
		(*values[i]).Print(out);
	}
}
