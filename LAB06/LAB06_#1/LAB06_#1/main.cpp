//
//  main.cpp
//  LAB06_#1
//
//  Created by Jungmin Kim on 2023/04/13.
//
#include "StackType.h"
#include <iostream>

//A.
void ReplaceItem(StackType &stack, ItemType oldItem, ItemType newItem)
{
    StackType temp_stack; //백업용 스택
    ItemType temp_Item; // top을 받는 아이템
    while(!stack.IsEmpty()) {
        //Top,Pop을 사용
        //top의 결과가 oldItem과 같거나 다를 경우, temp_stack에 넣는 부분
        temp_Item = stack.Top();
        if(temp_Item == oldItem)
       {
           stack.Pop();
           temp_stack.Push(newItem);
       } else {
           stack.Pop();
           temp_stack.Push(temp_Item);
       }
    }
    while(!temp_stack.IsEmpty()) {
        //temp_stack의 내용을 stack에 복원.
        ItemType topItem = temp_stack.Top();
        temp_stack.Pop();
        stack.Push(topItem);
    }
}

int main(int argc, const char * argv[]) {
    StackType ss;
    ss.Push(1);
    ss.Push(2);
    ss.Push(3);
//    ReplaceItem(ss, 1, 4);
//    ss.ReplaceItem(1, 4);
    ss.ReversePrint();
}
