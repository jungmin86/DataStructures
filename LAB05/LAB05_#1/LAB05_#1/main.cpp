//
//  main.cpp
//  LAB05_#1
//
//  Created by Jungmin Kim on 2023/04/06.
//

#include <iostream>
#include "QueType.h"



int main(int argc, const char * argv[]) {
    QueType qt;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++) {
        int num = rand();
        std::cout << num << " ";
        qt.Enqueue(num);
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        int item;
        qt.Dequeue(item);
        std::cout << item << " ";
        
    }
}
