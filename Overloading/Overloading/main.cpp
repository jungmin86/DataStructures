//
//  main.cpp
//  LAB07_#2
//
//  Created by Jungmin Kim on 2023/04/20.
//

#include <iostream>
#include "StackType.h"
// 전역 함수 안된다..?
//StackType& operator= (StackType& my, StackType other) {
//    NodeType* ptr1;
//    NodeType* ptr2;
//    if (other.topPtr == NULL) my.topPtr = NULL;
//    else {
//        my.topPtr = new NodeType;
//        my.topPtr->info = other.topPtr->info;
//        std::cout << "a.topPtr1: " << other.topPtr << std::endl; //각 요소가 다른 메모리에 저장되어야 딥 카피
//        std::cout << "topPtr2: " << my.topPtr << std::endl;
//        ptr1 = other.topPtr->next;
//        ptr2 = my.topPtr;
//        while(ptr1 != NULL) {
//            std::cout << "ptr1: " << ptr1 << std::endl;
//            ptr2->next = new NodeType;
//            ptr2 = ptr2->next;
//            std::cout << "ptr2: " << ptr2 << std::endl;
//            ptr2->info = ptr1->info;
//            ptr1 = ptr1->next;
//        }
//        ptr2 = NULL;
//    }
//    return my;
//}

std::ostream& operator<< (std::ostream& os, StackType& s) {
    if (s.topPtr == NULL) return os;
    NodeType* location = s.topPtr;
    StackType temp;
    while (location != NULL) {
        temp.Push(location->info);
        location = location -> next;
    }
    while (!temp.IsEmpty()) {
        os << temp.Top() << " ";
        temp.Pop();
    }
    return os;
}


int main(int argc, const char * argv[]) {
    StackType s,ss; //s를 ss에 딥 카피
    s.Push(2);
    s.Push(6);
    s.Push(4);
    
//    ss.Copy(s);
//    ss.operator=(s);
//    std::cout << (ss=s) ;
    ss = s;
//    ss = s;
    ss.Print();
    
}
