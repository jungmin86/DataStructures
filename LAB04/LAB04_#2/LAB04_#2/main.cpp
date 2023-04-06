//
//  main.cpp
//  LAB04_#2
//
//  Created by Jungmin Kim on 2023/03/30.
//

#include <iostream>
#include "StackTType.h"


int main(int argc, const char * argv[]) {
    StackType<int> stackA, stackB, stackC;
    stackA.Push(9);
    stackA.Push(8);
    stackA.Push(4);
    stackA.Push(7);
    stackA.Push(5);
    stackA.Push(3);
    
    while(!stackA.IsEmpty()) {
        stackC.Push(stackA.Top());
        stackA.Pop();
    }
    while(!stackC.IsEmpty()) {
        stackA.Push(stackC.Top());
        stackB.Push(stackC.Top());
        stackC.Pop();
    }
    while(!stackA.IsEmpty() && !stackB.IsEmpty()) {
        std::cout << stackA.Top() << "  " << stackB.Top() << std::endl;
        stackA.Pop();
        stackB.Pop();
    }
}
