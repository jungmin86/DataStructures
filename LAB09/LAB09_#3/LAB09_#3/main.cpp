//
//  main.cpp
//  LAB09_#3
//
//  Created by Jungmin Kim on 2023/05/16.
//

#include <iostream>
#include "TreeType.h"
int main(int argc, const char * argv[]) {
    TreeType A;
    A.InsertItem('k');
    A.InsertItem('f');
    A.InsertItem('o');
    A.InsertItem('c');
    A.InsertItem('g');
    A.InsertItem('p');
    A.InsertItem('a');
//    A.InsertItem('d');
//    A.InsertItem('a');
//    A.InsertItem('f');
//    A.InsertItem('e');
//    A.InsertItem('c');
//    A.InsertItem('b');
//    A.InsertItem('h');
//    A.InsertItem('g');

    std::cout << A.IsBST();
}
