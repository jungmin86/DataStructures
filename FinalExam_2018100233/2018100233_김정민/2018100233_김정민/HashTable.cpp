#include "HashTable.h"


HashTable::HashTable(int max_num)
{
    emptyItem.InitValue(0, "empty", 0.0);
    max_items = max_num;
    table = new NodeType[max_items];
    for (int i = 0; i < max_num; i++) {
        table[i].stu = emptyItem;
        table[i].next = NULL;
    }
}



int HashTable::Hash(Student item) const
{
    int index, char_sum, _id;
    char _name[30];
    float _gpa;
    item.getValue(_id, _name, _gpa);
    char_sum = 0;
    for (int i = 0; i < sizeof(_name)/sizeof(char); i++) {
        if (_name[i] == '\0') break;
        char_sum += toascii(_name[i]);
    }
    index = (char_sum + _id) % max_items;
    return index;
}

void HashTable::RetrieveItem(Student& item, bool& found) {
    int index = Hash(item);
    NodeType* location = &table[index];
    found = false;
    
    while(location != NULL) {
        if(location->stu == item) {
            found = true;
            item = location->stu;
            break;
        }
        location = location->next;
    }
}


void HashTable::InsertItem(Student item)
{
    bool exist;
    int index = Hash(item);
    RetrieveItem(item, exist);
    if (exist == true)
        return;

    NodeType* newNode = new NodeType;
    newNode->stu = item;
    newNode->next = nullptr;

    if (table[index].stu == emptyItem) {
        table[index] = *newNode;
    } else {
        NodeType* location = &table[index];
        while (location->next != nullptr) {
            location = location->next;
        }
        location->next = newNode;
    }
}
    

void HashTable::DeleteItem(Student item)
{
    bool exist;

    RetrieveItem(item, exist);
    if (exist == false) {
        return;
    }
    int index = Hash(item);
     NodeType* location = &table[index];
     NodeType* prevNode = nullptr;
     
     while (location != nullptr) {
         if (location->stu == item) {
             if (prevNode == nullptr) {
                 // Deleting the first node in the list
                 if (location->next != nullptr) {
                     NodeType* nextNode = location->next;
                     location->stu = nextNode->stu;
                     location->next = nextNode->next;
                     delete nextNode;
                 } else {
                     // Deleting the only node in the list
                     location->stu = emptyItem;
                 }
             } else {
                 // Deleting a node in the middle or at the end of the list
                 prevNode->next = location->next;
                 delete location;
             }
             return;
         }
         prevNode = location;
         location = location->next;
     }
    
}


void HashTable::Print() {

    
    cout << "--------------------" << endl;
    cout << "[]:index, ():student" << endl;

    for(int i = 0; i < max_items; i++) {
        NodeType* location = &table[i];
        if (location->stu == emptyItem) {
            cout << "[" << i << "]: empty" << endl;
        }
        else {
            cout << "[" << i << "]: ";
            location->stu.Print(cout);
            while (location->next != NULL) {
                location = location->next;
                cout << "->";
                location->stu.Print(cout);
            }
            cout << endl;
        }
    }
    
    cout << "--------------------" << endl;
     
}

