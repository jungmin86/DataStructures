//
//  main.cpp
//  LAB07_#1
//
//  Created by Jungmin Kim on 2023/04/20.
//

#include <iostream>
#include "SortedType.h"

int main(int argc, const char * argv[]) {
    SortedType<int> s;
    s.InsertItem(2);
    s.InsertItem(4);
    s.InsertItem(6);
    s.InsertItem(8);
    s.DeleteItem(4);
    
    s.PrintReverse();
}
