//
//  main.cpp
//  LAB09_#2
//
//  Created by Jungmin Kim on 2023/05/16.
//

#include <iostream>
#include "TreeType.h"

int main(int argc, const char * argv[]) {
    TreeType A;
    A.InsertItem('d');
    A.InsertItem('a');
    A.InsertItem('f');
    A.InsertItem('e');
    A.InsertItem('c');
    A.InsertItem('b');
    A.InsertItem('h');
    A.InsertItem('g');
    
    A.DeleteItem('f');

    A.ResetTree(PRE_ORDER);
    std::ofstream os;
    os.open("123.txt");
    A.Print(os);
    
    

    return 0;

}
