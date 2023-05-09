//
//  main.cpp
//  LAB04_#2
//
//  Created by Jungmin Kim on 2023/03/30.
//

#include <iostream>
#include "StackTType.h"


void Copy(StackType<int> stackA, StackType<int>& stackB, StackType<int> stackC ) {
    while(!stackA.IsEmpty()) {
        stackC.Push(stackA.Top()); //C에는 거꾸로 들어감 -> 임시 스택
        stackA.Pop();
    }
    while(!stackC.IsEmpty()) {
//        stackA.Push(stackC.Top());  //다시 원래 순서대로 복구 -> A는 레퍼런스가 아니라서 안해도 됨
        stackB.Push(stackC.Top()); //원래 순서대로 복사
        stackC.Pop();
    }

}

int main(int argc, const char * argv[]) {
    StackType<int> stackA, stackB, stackC;
    stackA.Push(9);
    stackA.Push(8);
    stackA.Push(4);
    stackA.Push(7);
    stackA.Push(5);
    stackA.Push(3);
    
    
    Copy(stackA, stackB, stackC);
    while(!stackA.IsEmpty() && !stackB.IsEmpty()) {
        std::cout << stackA.Top() << "  " << stackB.Top() << std::endl;
        stackA.Pop();
        stackB.Pop();
    }
}
