//
//  main.cpp
//  LAB10_#5
//
//  Created by Jungmin Kim on 2023/05/17.
//

#include <iostream>
#include "TreeType.h"
#include "UnsortedType.h"
bool MatchingItem_Unsorted(TreeType& tree, UnsortedType &list) {
    int list_length = list.LengthIs();
    int tree_length = tree.LengthIs();
    
    if (list_length != tree_length) return false; //일단 길이가 같은지
    else {
        ItemType item;
        bool found;
        list.ResetList(); //클라이언트니까 이렇게 하나씩 뽑아야 함
        for (int i = 0; i < list_length; i++) {
            list.GetNextItem(item);
            tree.RetrieveItem(item, found);
            if(!found) return false;
        }
        return true;
    }
}

int main(int argc, const char * argv[]) {
    UnsortedType u;
    u.InsertItem('g');
    u.InsertItem('k');
    u.InsertItem('z');
    u.InsertItem('h');
    u.InsertItem('b');
    u.InsertItem('e');
    u.InsertItem('a');
    
    TreeType T;
    T.InsertItem('g');
    T.InsertItem('b');
    T.InsertItem('k');
    T.InsertItem('a');
    T.InsertItem('e');
    T.InsertItem('h');
    T.InsertItem('z');
    
    std::cout << MatchingItem_Unsorted(T, u);
    
}
