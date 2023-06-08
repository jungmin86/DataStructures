//
//  main.cpp
//  LAB14_#1
//
//  Created by Jungmin Kim on 2023/06/08.
//

#include<iostream>
#include"Student.h"
using namespace std;



void Split(Student* values[], int first, int last, int& splitPoint)
{
    Student* splitVal = values[first];
    int saveFirst = first;
    bool onCorrectSide;

    first++;
    do
    {
        onCorrectSide = true;
        while (onCorrectSide)         // Move first toward last.
            if (*(values[first]) > *(splitVal))
                onCorrectSide = false;
            else
            {
                first++;
                onCorrectSide = (first <= last);
            }

        onCorrectSide = (first <= last);
        while (onCorrectSide)             // Move last toward first.
            if (*(values[last]) <= *(splitVal))
                onCorrectSide = false;
            else
            {
                last--;
                onCorrectSide = (first <= last);
            }

        if (first < last)
        {
            Swap(values[first], values[last]);
            first++;
            last--;
        }
    } while (first <= last);

    splitPoint = last;
    Swap(values[saveFirst], values[splitPoint]);
}


void SelectionSortPointer(Student* values[], int first, int last) {
    if (first < last)
    {
        int splitPoint;

        Split(values, first, last, splitPoint);
        // values[first]..values[splitPoint-1] <= splitVal
        // values[splitPoint] = splitVal
        // values[splitPoint+1]..values[last] > splitVal

        SelectionSortPointer(values, first, splitPoint - 1);
        SelectionSortPointer(values, splitPoint + 1, last);
    }
}
int main() {

    Student stu[100];
    stu[0].InitValue(2003200111, "이웅재", 3.0);
    stu[1].InitValue(2004200121, "권오준", 3.2);
    stu[2].InitValue(2005200132, "정호혁", 2.7);
    stu[3].InitValue(2005200132, "김진일", 2.7);
    
    Student* stuPtrs[4];
    
    for (int k = 0; k < 4; k++)
        stuPtrs[k] = &stu[k];
    SelectionSortPointer(stuPtrs,0, 3);
    PrintByPointer(cout, stuPtrs, 4);
}






//int main(int argc, const char * argv[]) {
//    Student stu[100];
//    stu[0].InitValue(2003200111, "이웅재", 3.0);
//    stu[1].InitValue(2004200121, "권오준", 3.2);
//    stu[2].InitValue(2005200132, "김진일", 2.7);
//    stu[3].InitValue(2005200132, "가호혁", 1.7);
//
//    MergeSort(stu, 0, 3);
//    Print(cout, stu, 4);
//}
