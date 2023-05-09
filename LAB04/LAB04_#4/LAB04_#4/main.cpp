//
//  main.cpp
//  LAB04_#4
//
//  Created by Jungmin Kim on 2023/03/30.
//

#include <iostream>
#include "StackType.h"

//A.클라이언트로 작성은 스택의 구조는 변경하지 않고 외부에서 추가 함 수를 작성하여 위의 동작을 하는 함수를 만들어라.
// (함수는 스택, oldItem, newItem 3개의 파라메터를 갖는다.)
void ReplaceItem(StackType& stack, int oldItem, int newItem){
    StackType ss; //d 임시 스택
    while(!stack.IsEmpty()) {
        ss.Push(stack.Top()); //ss에는 거꾸로 들어감
        stack.Pop();
    }
    while(!ss.IsEmpty()) {
        if(ss.Top() == oldItem) { //탑 포인터가 가리키는 게 바꿀 값이라면
            stack.Push(newItem); //oldItem 대신 newItem을 넣어줌 (원래 순서 상에서)
            ss.Pop(); //Top포인터 낮춰줌
            continue;
        }
        stack.Push(ss.Top());
        ss.Pop();
    }
}

int main(int argc, const char * argv[]) {
    StackType st;
    st.Push(8);
    st.Push(3);
    st.Push(9);
    st.Push(8);
    st.Push(3);
    st.Push(7);
    st.Push(5);
    st.Push(1);
//    //A.
//    ReplaceItem(st, 3, 5); //8 5 9 8 5 7 5 1
//    st.Print();
    //B.
    st.ReplaceItem(3, 5); //8 5 9 8 5 7 5 1
    st.Print();

 
    
    
}
