//
//  main.cpp
//  LAB06_#4
//
//  Created by Jungmin Kim on 2023/04/13.
//

#include <iostream>
#include "UnsortedType.h"
int main(int argc, const char * argv[]) {
    UnsortedType<int> U;
    U.InsertItem(1);
    U.InsertItem(1);
    U.InsertItem(1);
    U.InsertItem(2);
    U.InsertItem(1);
    U.InsertItem(6);
    U.InsertItem(5);
    U.InsertItem(2);
    U.InsertItem(3);
    U.InsertItem(3);

    U.DeleteItem(3);
    U.DeleteItem(1);
    
    U.ReversePrint();
}
