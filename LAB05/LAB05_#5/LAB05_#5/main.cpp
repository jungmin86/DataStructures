//
//  main.cpp
//  LAB05_#5
//
//  Created by Jungmin Kim on 2023/04/06.
//

#include <iostream>
#include "QueType.h"
int main(int argc, const char * argv[]) {
    QueType q(5);
    int num;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Dequeue(num);
    q.Dequeue(num);
    std::cout << q.Length();
}
