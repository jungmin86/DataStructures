#include "QueType.h"#include <iostream>QueType::QueType(int max)// Parameterized class constructor// Post: maxQue, front, and rear have been initialized.//       The array to hold the queue elements has been dynamically//       allocated.{    maxQue = max + 1;    front = maxQue - 1;    rear = maxQue - 1;    length = 0;    items = new ItemType[maxQue];}QueType::QueType()          // Default class constructor// Post: maxQue, front, and rear have been initialized.//       The array to hold the queue elements has been dynamically//       allocated.{  maxQue = 501;  front = maxQue - 1;  rear = maxQue - 1;    length = 0;  items = new ItemType[maxQue];}QueType::~QueType()         // Class destructor{  delete [] items;}void QueType::MakeEmpty()// Post: front and rear have been reset to the empty state.{  front = maxQue - 1;  rear = maxQue - 1;    length = 0;}bool QueType::IsEmpty() const// Returns true if the queue is empty; false otherwise.{  return (length == 0);}bool QueType::IsFull() const// Returns true if the queue is full; false otherwise.{  return (length == maxQue);}void QueType::Enqueue(ItemType newItem)// Post: If (queue is not full) newItem is at the rear of the queue;//       otherwise a FullQueue exception is thrown.  {  if (IsFull())    throw FullQueue();  else  {      length++;    rear = (rear +1) % maxQue;    items[rear] = newItem;  }}void QueType::Dequeue(ItemType& item){  if (IsEmpty())    throw EmptyQueue();  else  {      length--;    front = (front + 1) % maxQue;    item = items[front];  }}bool QueType::Identical (const QueType& qt) {    if (maxQue != qt.maxQue) return false;    for (int i = 0; i < maxQue; i++) {        if(this->items[i] != qt.items[i]) return false;    }    return true;}//B.int QueType::Length() {    if (this-> IsEmpty()) return 0;    else if (this -> IsFull()) return maxQue - 1;    else if (rear > front) return (rear - front);    else return (maxQue-(front - rear));}