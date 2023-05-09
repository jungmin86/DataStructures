//
//  main.cpp
//  LAB08_#5
//
//  Created by Jungmin Kim on 2023/05/10.
//

#include <iostream>
#include "UnsortedType.h"

int main(int argc, const char * argv[]) {
    UnsortedType<int> u;
    u.InsertItem(1);
    u.InsertItem(9);
    u.InsertItem(3);
    u.InsertItem(5);
    u.InsertItem(7);
    
    u.Sort(u.GetListData());
    u.ResetList();
    int item;
    for (int i = 0; i < 5; i++) {
        u.GetNextItem(item);
        std::cout << item << " ";
    }
    
}
