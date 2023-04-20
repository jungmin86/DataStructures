//
//  TextEditor.hpp
//  LAB07_#3
//
//  Created by Jungmin Kim on 2023/04/20.
//
#include <iostream>
#ifndef TextEditor_hpp
#define TextEditor_hpp
const int MAX_ITEMS = 80;

//A.
struct LineType {
    char info[MAX_ITEMS];
    LineType* next;
    LineType* back;
};

class TextEditor {
public:
    TextEditor();
    ~TextEditor();
    void GoToTop();
    void GoToBottom();
    void InsertItem(char newline[]);
    void Print();
private:
    LineType* currentLine;
    LineType* header;
    LineType* trailer;
};
#endif /* TextEditor_hpp */
