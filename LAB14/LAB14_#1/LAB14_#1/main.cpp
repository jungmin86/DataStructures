//
//  main.cpp
//  LAB14_#1
//
//  Created by Jungmin Kim on 2023/06/08.
//

#include <iostream>
#include "Student.h"
#include "QuickSort.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Student stu[100];
    stu[0].InitValue(2003200111, "이웅재", 3.0);
    stu[1].InitValue(2004200121, "권오준", 3.2);
    stu[2].InitValue(2005200132, "김진일", 2.7);
    stu[3].InitValue(2005200132, "정호혁", 1.7);
    
    QuickSort(stu, 0, 3);
    Print(cout, stu, 4);
}
