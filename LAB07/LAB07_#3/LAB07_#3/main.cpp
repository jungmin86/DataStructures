//
//  main.cpp
//  LAB07_#3
//
//  Created by Jungmin Kim on 2023/04/20.
//

#include <iostream>
#include "TextEditor.hpp"

int main(int argc, const char * argv[]) {
    TextEditor t;
    t.InsertItem("KIM");
    t.InsertItem("MIN");
    t.InsertItem("JUNG");
    t.InsertItem("HELLO");
    
    t.GoToTop();
    t.GoToBottom();
    t.Print();
}
