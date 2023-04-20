//
//  TextEditor.cpp
//  LAB07_#3
//
//  Created by Jungmin Kim on 2023/04/20.
//
#include "TextEditor.hpp"
#include <string>
#include <cstring>

//D.
TextEditor::TextEditor()  // Class constructor
{
    header = new LineType;
    trailer = new LineType;
    std::strcpy(header->info, "---Top of file---");
    std::strcpy(trailer->info, "---Bottom of file---");
//    std::cout << header->info << " ";
//    std::cout << trailer->info << " ";
    
    header->next = trailer;
    header->back = trailer;
    trailer->next = header;
    trailer->back = header;

    currentLine = header;


}


TextEditor::~TextEditor() {}


void TextEditor::GoToTop() {
    if (currentLine == header) { //라인이 없는 경우
        currentLine = trailer;
    }
    else {
            currentLine = trailer->back->back;
    }
    std::cout << currentLine->info << std::endl;
}

void TextEditor::GoToBottom() { //라인이 없는 경우
    if (currentLine == header) {
        currentLine = header;
    }
    else {
        currentLine = header->next->next;
    }
    std::cout << currentLine->info << std::endl;
}



void TextEditor::InsertItem(char newline[]) {
    LineType* newNode = new LineType;
    std::strcpy(newNode->info, newline);
    newNode->next = currentLine;
    newNode->back = currentLine->back;
    currentLine->back->next = newNode;
    currentLine->back = newNode;
    currentLine = newNode;
}

void TextEditor::Print() {
    LineType* location = new LineType;
    if (header->back == trailer) return ;
    location = header->back;
    while (location->back != NULL && !(location == header) && !(location == trailer)) {
        std::cout << location->info << " ";
        location = location->back;
    }
}
