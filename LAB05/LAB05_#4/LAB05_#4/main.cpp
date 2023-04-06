//
//  main.cpp
//  LAB05_#4
//
//  Created by Jungmin Kim on 2023/04/06.
//

#include <iostream>
#include "QueType.h"
//A.
int Length(QueType& qt) {
    int count = 0;
    int num;
    QueType temp_q;
    while (!qt.IsEmpty()) {
        qt.Dequeue(num);
        temp_q.Enqueue(num);
        count++;
    }
    return count;
}

int main(int argc, const char * argv[]) {
    QueType q(4);
    int num;
    q.MakeEmpty();
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Dequeue(num);
    q.Dequeue(num);
    q.Enqueue(10);
    q.Enqueue(20);
    q.Dequeue(num);
    q.Dequeue(num);
    q.Dequeue(num);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(3); //IsFull


    std::cout << q.Length()<< std::endl;
    std::cout <<Length(q) << std::endl;
    
}
