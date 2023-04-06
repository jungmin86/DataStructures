//
//  main.cpp
//  LAB05_#2
//
//  Created by Jungmin Kim on 2023/04/06.
//

#include <iostream>
#include "QueType.h"
//A.
void ReplaceItem(QueType& queue, ItemType oldItem, ItemType newItem)
{
    //임시 변수, 큐 선언
    QueType temp_q;
    ItemType num;
    while(!queue.IsEmpty())
    {
        queue.Dequeue(num);
        if(num == oldItem) temp_q.Enqueue(newItem);
        else temp_q.Enqueue(num);
    }
    while(!temp_q.IsEmpty()) {
        temp_q.Dequeue(num);
        queue.Enqueue(num);
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    QueType queue(6);
    queue.MakeEmpty();
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    ReplaceItem(queue, 1, 8);
    
    QueType que(6);
    que.MakeEmpty();
    que.Enqueue(1);
    que.Enqueue(2);
    que.Enqueue(3);
    que.Enqueue(1);
    que.Enqueue(2);
    que.Enqueue(3);
    que.ReplaceItem(1, 7);
    
    
}
