//
//  main.cpp
//  LAB05_#3
//
//  Created by Jungmin Kim on 2023/04/06.
//

#include <iostream>
#include "QueType.h"
//A.
bool Identical(QueType& queue1, QueType& queue2) {
    int num1, num2;
    while (!queue1.IsEmpty()) {
        queue1.Dequeue(num1);
        queue2.Dequeue(num2);
        if(num1 != num2) return false;
        else if (queue2.IsEmpty() && !queue1.IsEmpty()) return false;
    }
    if (!queue2.IsEmpty()) return false;
    return true;
}


int main() {
    QueType q1(5), q2(5);
    q1.MakeEmpty();
    q2.MakeEmpty();
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(4);
    
    q2.Enqueue(1);
    q2.Enqueue(2);
    q2.Enqueue(3);
    q2.Enqueue(4);
    
    std::cout << Identical(q1, q2);
    std::cout << q1.Identical(q2);
}
