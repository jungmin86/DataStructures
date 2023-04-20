//
//  main.cpp
//  LAB07_#2
//
//  Created by Jungmin Kim on 2023/04/20.
//

#include <iostream>
#include "StackType.h"

int main(int argc, const char * argv[]) {
    StackType s,ss; //s를 ss에 딥 카피
    s.Push(2);
    s.Push(6);
    s.Push(4);
    
    ss.Copy(s);
    ss.Print();
    
}
