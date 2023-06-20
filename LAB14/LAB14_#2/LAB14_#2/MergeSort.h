#include "Student.h"

void Merge(Student values[], int leftFirst, int leftLast,
    int rightFirst, int rightLast)
{
    int arySize = rightLast - leftFirst + 1;
    Student* tempArray = new Student[arySize];
    int index = leftFirst;
    int saveFirst = leftFirst;

    while ((leftFirst <= leftLast) && (rightFirst <= rightLast))
    {
        if (values[leftFirst] < values[rightFirst])
        {
            tempArray[index] = values[leftFirst];
            leftFirst++;
        }
        else
        {
            tempArray[index] = values[rightFirst];
            rightFirst++;
        }
        index++;
    }

    while (leftFirst <= leftLast)
        // Copy remaining items from left half.

    {
        tempArray[index] = values[leftFirst];
        leftFirst++;
        index++;
    }

    while (rightFirst <= rightLast)
        // Copy remaining items from right half.
    {
        tempArray[index] = values[rightFirst];
        rightFirst++;
        index++;
    }

    for (index = saveFirst; index <= rightLast; index++)
        values[index] = tempArray[index];
    delete[] tempArray;
}


//void MergeRecursive(Student values[], int leftFirst, int leftLast,
//    int rightFirst, int rightLast)
//{
//    int arySize = rightLast - leftFirst + 1;
//    Student* tempArray = new Student[arySize];
//    int index = leftFirst;
//    int saveFirst = leftFirst;
//
//    if (leftFirst <= leftLast && rightFirst <= rightLast) {
//        if (values[leftFirst] < values[rightFirst]) {
//            tempArray[index] = values[leftFirst];
//            MergeRecursive(values, leftFirst + 1, leftLast, rightFirst, rightLast);
//        }
//        else {
//            tempArray[index] = values[rightFirst];
//            MergeRecursive(values, leftFirst, leftLast, rightFirst + 1, rightLast);
//        }
//        index++;
//    }
//
//    while (leftFirst <= leftLast) {
//        tempArray[index] = values[leftFirst];
//        leftFirst++;
//        index++;
//    }
//
//    while (rightFirst <= rightLast) {
//        tempArray[index] = values[rightFirst];
//        rightFirst++;
//        index++;
//    }
//
//    for (index = saveFirst; index <= rightLast; index++)
//        values[index] = tempArray[index];
//    delete[] tempArray;
//}
//
//void Merge(Student values[], int leftFirst, int leftLast,
//    int rightFirst, int rightLast)
//{
//    MergeRecursive(values, leftFirst, leftLast, rightFirst, rightLast);
//}
//
void MergeSort(Student values[], int first, int last)
// Post: The elements in values are sorted by key.
{
    if (first < last)
    {
        int middle = (first + last) / 2;
        MergeSort(values, first, middle);
        MergeSort(values, middle + 1, last);
        Merge(values, first, middle, middle + 1, last);
    }
}

