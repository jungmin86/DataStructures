//
//  main.cpp
//  LAB08_#1
//
//  Created by Jungmin Kim on 2023/05/09.
//

#include <iostream>
#include "UnsortedType.h"

int main(int argc, const char * argv[]) {
    int item1 = 1; int item2 = 3; int item3 = 2; int item4 = 5;
    UnsortedType<int> list;
    list.InsertItem(item1); list.InsertItem(item2); list.InsertItem(item3); list.InsertItem(item4);
    list.PrintSumSquares();
    return 0;
}
