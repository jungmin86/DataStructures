//
//  main.cpp
//  LAB06_#3_C_D
//
//  Created by Jungmin Kim on 2023/04/13.
//

#include <iostream>
#include "UnsortedType.h"
//C.
template <class ItemType>
void MergeLists(UnsortedType<ItemType> &l_a, UnsortedType<ItemType> &l_b, UnsortedType<ItemType> &result) {
    ItemType item;
    l_a.ResetList();
    l_b.ResetList();
    for (int i = 0; i < l_b.LengthIs(); i++) {
        l_b.GetNextItem(item);
        result.InsertItem(item);
    }
    for (int i = 0; i < l_a.LengthIs(); i++) {
        l_a.GetNextItem(item);
        result.InsertItem(item);
    }
    
}

int main(int argc, const char * argv[]) {
    UnsortedType<int> s, ss, result;
    s.InsertItem(1);
    s.InsertItem(2);
    s.InsertItem(3);
    ss.InsertItem(4);
    ss.InsertItem(10);
    ss.InsertItem(6);
//    MergeLists(s, ss, result);
    s.MergeLists(ss, result);
    int item;
    result.ResetList();
    for (int iter = 0; iter < result.LengthIs(); iter++) {
        result.GetNextItem(item);
        std::cout << item << " ";
    }
}
