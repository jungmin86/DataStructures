#pragma once
#include "Student.h"

template<class ItemType>
void ReheapDown(ItemType elements[], int root, int bottom)
// Post: Heap property is restored.
{
    int maxChild;
    int rightChild;
    int leftChild;

    leftChild = root * 2 + 1;
    rightChild = root * 2 + 2;
    if (leftChild <= bottom)
    {
        if (leftChild == bottom)
            maxChild = leftChild;
        else
        {
            if (elements[leftChild] <= elements[rightChild])
                maxChild = rightChild;
            else
                maxChild = leftChild;
        }
        if (elements[root] < elements[maxChild])
        {
            Swap(elements[root], elements[maxChild]);
            ReheapDown(elements, maxChild, bottom);
        }
    }
}

template<class ItemType>
void ReheapUp(ItemType elements[], int root, int bottom)
// Post: Heap property is restored.
{
    int parent;

    if (bottom > root)
    {
        parent = (bottom - 1) / 2;
        if (elements[parent] < elements[bottom])
        {
            Swap(elements[parent], elements[bottom]);
            ReheapUp(elements, root, parent);
        }
    }
}


template<class ItemType>
void HeapSort(ItemType values[], int numValues) {
    int index;
    // 배열 입력을 출력하시오.
    cout << "Initial array: ";
    for (int i = 0; i < numValues; i++)
        cout << values[i] << " ";
    cout << endl;
    // Convert array values[0..numValues-1] into a heap
    for (index = numValues / 2 - 1; index >= 0; index--)
        ReheapDown(values, index, numValues - 1);

    // Heap으로 변경된 배열을 출력하시오.
    cout << "Heap array: ";
    for (int i = 0; i < numValues; i++)
        cout << values[i] << " ";
    cout << endl;
    // Sort the array.
    for (index = numValues - 1; index >= 1; index--)
    {
        Swap(values[0], values[index]);
        ReheapDown(values, 0, index - 1);
        //변경된 배열을 출력하시오.
        cout << "Array after iteration " << numValues - index << ": ";
        for (int i = 0; i < numValues; i++)
            cout << values[i] << " ";
        cout << endl;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < numValues; i++)
        cout << values[i] << " ";
    cout << endl;
}

