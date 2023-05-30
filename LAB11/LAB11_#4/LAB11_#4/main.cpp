//
//  main.cpp
//  LAB11_#4
//
//  Created by Jungmin Kim on 2023/05/23.
//
//

#include <iostream>
#include "StackType.h"
int main(int argc, const char * argv[]) {
    
//C. Big-O notation
// Push -> O(1) -> 그냥 topPtr위치에 새로 만들어주고 timestamp를 통해 대소비교
// Pop -> O(N) -> maxPtr 위치 찾을 때 while문 + maxPtr 전 위치까지 접근 = O(2N) -> O(N)
    StackType stack;
    stack.Push(1, 7);
    stack.Push(2, 3);
    stack.Push(3, 10);
    stack.Push(4, 1);
    stack.Push(5, 11);
    stack.Push(6, 5);
    stack.Push(7, 4);
    std::cout << stack.Top() << std::endl; //5
    stack.Pop();
    std::cout << stack.Top() << std::endl; // 3
    stack.Pop();
    std::cout << stack.Top() << std::endl; //1
    stack.Pop();
    std::cout << stack.Top() << std::endl; //6
}
