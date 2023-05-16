//
//  main.cpp
//  LAB10_#4
//
//  Created by Jungmin Kim on 2023/05/17.
//

#include <iostream>
#include "TreeType.h"
#include "SortedType.h"


void AddElement(TreeType& tree, int Array[], int from, int to);
void MakeTree(TreeType& tree, SortedType &list);

void MakeTree(TreeType& tree, SortedType &list) {
    int length = list.LengthIs();
    int* array = new int[length];
    int item_info;
    
    list.ResetList();
    for (int i = 0; i < length; i++) {
        list.GetNextItem(item_info);
        array[i] = item_info;
    }
    
    AddElement(tree, array, 0, length-1);
    
    delete [] array;
}

void AddElement(TreeType& tree, int Array[], int front, int rear) {
    int mid;
    if (front <= rear)  {
        mid = (front + rear) / 2;
        tree.InsertItem(Array[mid]);
        AddElement(tree, Array, front, mid-1);
        AddElement(tree, Array, mid+1, rear);
    }
}

int main(int argc, const char * argv[]) {
    SortedType s;
    s.InsertItem(1);
    s.InsertItem(2);
    s.InsertItem(3);
    s.InsertItem(4);
    s.InsertItem(5);
    s.InsertItem(6);
    s.InsertItem(7);

    TreeType T;
    MakeTree(T, s);
    T.ResetTree(PRE_ORDER);
    std::ofstream ofs;
    ofs.open("123.txt");
    T.Print(ofs);
}
