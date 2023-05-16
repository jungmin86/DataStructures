//
//  main.cpp
//  LAB09_#4
//
//  Created by Jungmin Kim on 2023/05/16.
//

#include <iostream>
#include "TreeType.h"

int main(int argc, const char * argv[]) {
    TreeType A;
    A.InsertItem('k');
    A.InsertItem('d');
    A.InsertItem('o');
    A.InsertItem('a');
    A.InsertItem('f');
    A.InsertItem('x');
    A.InsertItem('z');
    
    std::cout << A.LeafCount(A.GetRoot()) << std::endl;
}
