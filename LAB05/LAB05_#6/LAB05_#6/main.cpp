//
//  main.cpp
//  LAB05_#6
//
//  Created by Jungmin Kim on 2023/04/06.
//

#include <iostream>
#include "QueType.h"

int main(int argc, const char * argv[]) {
    QueType q(6);
    int num;
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(1);
    q.Enqueue(3);
    q.Enqueue(9);
    q.MinDequeue(num);
    std::cout << num << std::endl;  //1
    q.MinDequeue(num);
    std::cout << num << std::endl; //3
    q.MinDequeue(num);
    std::cout << num << std::endl; //5
    q.Enqueue(13);
    q.MinDequeue(num); 

    q.Enqueue(14);
    q.MinDequeue(num);
    std::cout << num << std::endl;
    q.MinDequeue(num);
    std::cout << num << std::endl;
}
