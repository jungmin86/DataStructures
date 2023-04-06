//
//  main.cpp
//  LAB05_#6
//
//  Created by Jungmin Kim on 2023/04/06.
//

#include <iostream>
#include "QueType.h"

int main(int argc, const char * argv[]) {
    QueType q(10);
    int num;
    q.Enqueue(10); //11
    q.Enqueue(3); // 9
    q.Enqueue(30);
    q.Dequeue(num);
    q.Dequeue(num);
    q.Enqueue(10); //21
    q.Enqueue(20);
    
    q.MinDequeue(num); //3
    q.Enqueue(9);
    q.MinDequeue(num); //10
    q.Enqueue(11);
    q.MinDequeue(num); //10
    q.Enqueue(21);
    q.MinDequeue(num); //20
    std::cout << num;
}
