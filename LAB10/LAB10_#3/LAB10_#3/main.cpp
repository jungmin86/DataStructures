//
//  main.cpp
//  LAB10_#3
//
//  Created by Jungmin Kim on 2023/05/17.
//

#include <iostream>
#include "TreeType.h"

int Smaller(TreeType tree, int value) {
    ItemType item;
    bool finished = false;
    int count = 0;
    
    tree.ResetTree(IN_ORDER);
    
    do {
        tree.GetNextItem(item, IN_ORDER, finished);
        if(item < value) {
            count++;
        }
        else {
            finished = true;
        }
    } while(!finished);
    
    return count;
}

int main(int argc, const char * argv[]) {
    TreeType A;
    A.InsertItem('k');
    A.InsertItem('f');
    A.InsertItem('o');
    A.InsertItem('c');
    A.InsertItem('g');
    A.InsertItem('p');
    A.InsertItem('a');
    
    std::cout << Smaller(A, 'o');
}
