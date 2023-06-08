//
//  main.cpp
//  LAB14_#4
//
//  Created by Jungmin Kim on 2023/06/08.
//

#include <iostream>
#include "HashTable.h"
#include "Student.h"

int main(int argc, const char * argv[]) {
    Student stu[100];
    stu[0].InitValue(2003200111, "lee", 3.0);
    stu[1].InitValue(2004200121, "kim", 3.2);
    stu[2].InitValue(2005200132, "jeong", 2.7);
    Student emptyitem;
    emptyitem.EmptyKey();

    HashTable<Student> ht(emptyitem);
    for (int i = 0; i < 3; i++) {
        ht.InsertItem(stu[i]);
    }
    char input[30];
    cout << "학생의 이름 : ";
    cin >> input;
    Student inputitem;
    inputitem.InitValue(0, input, 0);
    bool found = false;
    ht.RetrieveItem(inputitem,found);
    cout << found << endl;
    cout << inputitem.getName();
}
