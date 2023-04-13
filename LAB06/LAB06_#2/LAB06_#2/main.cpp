//
//  main.cpp
//  LAB06_#2
//
//  Created by Jungmin Kim on 2023/04/13.
//

#include <iostream>
#include "QueType.h"

//A.
//template 클래스 이므로 template 함수를 사용한다. 따로 헤더 파일을 정의하는 것을 주의하라.
template <class ItemType>
void ReplaceItem(QueType<ItemType> &queue, ItemType oldItem, ItemType newItem)
{
    // 임시로 사용할 큐를 선언.
    // Dequeue를 받을 변수 선언
    QueType<ItemType> temp_queue;
    ItemType item;
        while(!queue.IsEmpty()) {
            //Dequeue
            queue.Dequeue(item);
            if(item == oldItem) {
                // 상황에 따라 Enqueue 결정
                temp_queue.Enqueue(newItem);
            } else {
                temp_queue.Enqueue(item);
            }
        }
    while(!temp_queue.IsEmpty()) {
    // queue로 내용을 복원.
        temp_queue.Dequeue(item);
        queue.Enqueue(item);
    }
}

int main(int argc, const char * argv[]) {
    int result;
    QueType<int> qq;
    qq.Enqueue(1);
    qq.Enqueue(2);
    qq.Enqueue(3);
//    ReplaceItem(qq,1,4);
    qq.ReplaceItem(1, 5);
    while (!qq.IsEmpty()) {
        qq.Dequeue(result);
        std::cout << result << " ";
    }
}
