//
//  main.cpp
//  LAB04_#1
//
//  Created by Jungmin Kim on 2023/03/30.
//
#include <iostream>
#include "StackTType.h"
using namespace std;
int main() {
    StackType<int> stack;
    stack.Push(1); // 1을 스택에 넣는다.
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Push(6);// 나머지를 스택에 전부 넣는다.
    while(!stack.IsEmpty()) // 스택에 원소가 없을때 까지 반복한다.
    {
        int result = stack.Top(); // 가장 최근에 넣은 아이템 값을 가져온다.
        stack.Pop(); // 가장 최근에 넣은 아이템을 제거한다.
        cout << result << endl;
    }
}
