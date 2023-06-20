//
//  HashTable.h
//  LAB14_#4
//
//  Created by Jungmin Kim on 2023/06/08.
//

#ifndef HashTable_h
#define HashTable_h
#include "Student.h"

const int MAX_ITEMS = 20000;

template<class ItemType>
class HashTable {
public:
    HashTable() {}
    HashTable(ItemType emptyKey);
    int Hash(char* key) const;
    void RetrieveItem(ItemType& item, bool& found);
    void RetrieveItem_A(ItemType& item, bool& found);
    void InsertItem(ItemType item);
private:
    ItemType info[MAX_ITEMS];
    ItemType emptyItem;
    int length;
};
template <class ItemType>
HashTable<ItemType>::HashTable(ItemType emptyKey) {
    emptyItem = emptyKey;
    length = 0;

    for (int i = 0; i < MAX_ITEMS; i++)
        info[i] = emptyKey;
}

int getIntFromString (char* key) {
    int sum = 0;
    int len = strlen(key);
    if (len % 2 == 1) len++;
    for (int j = 0; j < len; j+=2) {
        sum = (sum + 100 * key[j] + key[j+1]) % 19937;
    }
    return sum;
}
template<class ItemType>
int HashTable<ItemType>::Hash(char* key) const {
    return getIntFromString(key) % MAX_ITEMS;
}

template<class ItemType>
void HashTable<ItemType>::InsertItem(ItemType item) {
    int location;
    location = Hash(item.Key());
    while (info[location] != emptyItem)
        location = (location + 1) % MAX_ITEMS;
    info[location] = item;
    length++;
}

template <class ItemType>
void HashTable<ItemType>::RetrieveItem(ItemType& item, bool& found) {
    int location;
    int startLoc;
    bool moreToSearch = true;
    
    startLoc = Hash(item.Key());
    location = startLoc;
    do
    {
        if (info[location] == item || info[location] == emptyItem) //오버로딩
            moreToSearch = false;
        else
            location = (location + 1) % MAX_ITEMS;
    } while (location != startLoc && moreToSearch);
    found = (info[location] == item);
    if(found)
        item = info[location]; // copy item
}

template <class ItemType>
void HashTable<ItemType>::RetrieveItem_A(ItemType& item, bool& found) {
    int location;
    int startLoc;
    bool moreToSearch = true;
    
    startLoc = Hash(item.Key());
    location = startLoc;
    do
    {
        if (strcmp(info[location]->Key(), item->Key()) == 0 || (info[location] == NULL))
            moreToSearch = false;
        else
            location = (location + 1) % MAX_ITEMS; //linear probing
    } while (location != startLoc && moreToSearch);
    found = (info[location] == item);
    if(found)
        item = info[location]; // copy item
}


#endif /* HashTable_h */
