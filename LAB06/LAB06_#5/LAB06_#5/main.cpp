//
//  main.cpp
//  LAB06_#5
//
//  Created by Jungmin Kim on 2023/04/14.
//

#include <iostream>
#include "SortedType.h"

int main(int argc, const char * argv[]) {
    SortedType<int> s;
    s.InsertItem(1);
    s.InsertItem(1);
    s.InsertItem(3);
    s.InsertItem(3);
    s.InsertItem(5);
    s.InsertItem(5);
    s.InsertItem(2);
    
    s.DeleteItem(5);
    
    s.Print();
}
