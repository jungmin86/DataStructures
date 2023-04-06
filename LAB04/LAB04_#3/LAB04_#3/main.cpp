//
//  main.cpp
//  LAB04_#3
//
//  Created by Jungmin Kim on 2023/03/30.
//

#include <iostream>
#include "DoubleStack.h"

int main(int argc, const char * argv[]) {
    DoubleStack ds;
    ds.Push(1);
    ds.Push(2);
    ds.Push(3);
    ds.Push(4);
    
    ds.Push(1003);
    ds.Push(1004);
    ds.Push(1005);
    
    ds.Print();
}
