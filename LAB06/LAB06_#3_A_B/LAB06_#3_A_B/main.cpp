//
//  main.cpp
//  LAB06_#3_A_B
//
//  Created by Jungmin Kim on 2023/04/13.
//

#include <iostream>
#include "SortedType.h"
//A.
template <class ItemType>
void MergeLists(SortedType<ItemType> &l_a, SortedType<ItemType> &l_b, SortedType<ItemType> &result) {
    // l_a 리스트의 아이템들을 result에 삽입
    ItemType item;
    l_a.ResetList();
    l_b.ResetList();
    // l_b 리스트의 아이템들을 result에 삽입
    for (int i = 0; i < l_a.LengthIs(); i++) {
        l_a.GetNextItem(item);
        result.InsertItem(item);
    }
    for (int i = 0; i < l_b.LengthIs(); i++) {
        l_b.GetNextItem(item);
        result.InsertItem(item);
    }
    // l_a, l_b 리스트의 아이템들은 ResetList()와 GetNextItem()로 구성된 iterator를 사용하여 획득
    
}


int main(int argc, const char * argv[]) {
    SortedType<int> s, ss, result;
    s.InsertItem(5);
    s.InsertItem(3);
    s.InsertItem(11);
    ss.InsertItem(1);
    ss.InsertItem(2);
    ss.InsertItem(9);
//    MergeLists(s, ss, result);
    s.MergeLists(ss, result);
    int item;
    result.ResetList();
    for (int i = 0; i < result.LengthIs(); i++) {
        result.GetNextItem(item);
        std::cout << item << " ";
    }
    result.Print();
}
