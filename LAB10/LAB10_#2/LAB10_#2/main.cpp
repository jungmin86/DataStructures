//
//  main.cpp
//  LAB10_#1
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
    A.InsertItem('m');
    A.InsertItem('x');
    A.InsertItem('l');
    A.InsertItem('w');
    
    A.Ancestors_re('x');
}
