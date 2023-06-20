#pragma once
#include "Student.h"

struct NodeType;

class HashTable {

public:
    HashTable(int max_num);
    int Hash(Student item) const;
    void RetrieveItem(Student& item, bool& found);
    void InsertItem(Student item);
    void DeleteItem(Student item);
    void Print();
private:
    NodeType* table;
    Student emptyItem;
    int max_items;

};

struct NodeType
{
    Student stu;
    NodeType* next;

};

