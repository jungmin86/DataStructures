//
//  TextEditor.cpp
//  LAB07_#3
//
//  Created by Jungmin Kim on 2023/04/20.
//
#include "TextEditor.hpp"
#include <string>
#include <cstring>

//B.
TextEditor::TextEditor()  // Class constructor
{
//    LineType* header;
//    LineType* trailer;
    header = new LineType;
    trailer = new LineType;
    std::strcpy(header->info, "---Top of file---");
    std::strcpy(trailer->info, "---Bottom of file---");
//    std::cout << header->info << " ";
//    std::cout << trailer->info << " ";
    
    header->next = NULL;
    header->back = trailer;
    trailer->next = header;
    trailer->back = NULL;

    currentLine = header;


}


TextEditor::~TextEditor() {}

//C.
void TextEditor::GoToTop() {
    if (currentLine == header) {
        currentLine = trailer;
    }
    else {
        while (currentLine->next != NULL && !(currentLine->next == header)) {
            currentLine = currentLine->next;
        }
    }
    std::cout << currentLine->info << std::endl;
}

void TextEditor::GoToBottom() {
    if (currentLine == header) {
        currentLine = header;
    }
    else {
        while (currentLine->back != NULL && !(currentLine->back == trailer)) {
            currentLine = currentLine->back;
        }
    }
    std::cout << currentLine->info << std::endl;
}


//E.

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
    while (location->back != NULL) {
        std::cout << location->info << " ";
        location = location->back;
    }
}
