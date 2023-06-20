#include <iostream>
#include "Student.h"
#include "HashTable.h"
using namespace std;

int main()
{

	HashTable table(5);

	Student stu1;
	stu1.InitValue(1, "a", 1.0);
	

	table.InsertItem(stu1);
	table.InsertItem(stu1);

	Student stu2;
	stu2.InitValue(2, "b", 2.0);

	table.DeleteItem(stu2);
	table.Print();

	Student stu3;
	stu3.InitValue(6, "f", 2.0);
	table.InsertItem(stu3);

	
	table.Print();

	return 0;
}