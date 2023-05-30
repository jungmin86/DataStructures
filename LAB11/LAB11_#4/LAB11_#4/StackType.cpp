// Implementation file for StackType.h

#include <cstddef>
#include <new>
#include <ctime>
#include "StackType.h"
void StackType::Push(ItemType newItem, int time)
// Adds newItem to the top of the stack.
// Pre:  Stack has been initialized.
// Post: If stack is full, FullStack exception is thrown;
//       else newItem is at the top of the stack.

{
  if (IsFull())
    throw FullStack();
  else
  {
    NodeType* location;
    location = new NodeType;
    location->info = newItem;
      location->timestamp = time;
    location->next = topPtr;
    topPtr = location;
  }
}
void StackType::Pop()
// Removes top item from Stack and returns it in item.
// Pre:  Stack has been initialized.
// Post: If stack is empty, EmptyStack exception is thrown;
//       else top element has been removed.
{
  if (IsEmpty())
    throw EmptyStack();
  else
  {  
    NodeType* tempPtr, *maxPtr;
      tempPtr = topPtr;
      maxPtr = topPtr;
      
      while (tempPtr != NULL) { //maxPtr 골라내기
          if (tempPtr->timestamp > maxPtr->timestamp)
              maxPtr = tempPtr;
          tempPtr = tempPtr->next;
      }
      if(maxPtr == topPtr) //첫번째 요소 지울 땐 tempPtr->next 못씀
          topPtr = topPtr->next;
      else {
          tempPtr = topPtr;
          while (tempPtr->next != maxPtr) { //maxPtr 전 요소까지 접근
              tempPtr = tempPtr->next;
          }
          tempPtr->next = tempPtr->next->next; //maxPtr 건너뛰기
      }
      delete maxPtr;
  }
}
ItemType StackType::Top()
// Returns a copy of the top item in the stack.
// Pre:  Stack has been initialized.
// Post: If stack is empty, EmptyStack exception is thrown;
//       else a copy of the top element is returned.
{
  if (IsEmpty())
    throw EmptyStack();
  else {
      NodeType* tempPtr, *maxPtr;
        tempPtr = topPtr;
        maxPtr = topPtr;
      while (tempPtr != NULL) {
          if (maxPtr->timestamp < tempPtr->timestamp)
              maxPtr = tempPtr;
          tempPtr = tempPtr->next;
      }
      return maxPtr->info;
  }
}
bool StackType::IsEmpty() const
// Returns true if there are no elements on the stack; false otherwise.
{
    return (topPtr == NULL);
}
bool StackType::IsFull() const
// Returns true if there is no room for another ItemType 
//  on the free store; false otherwise.
{
  NodeType* location;
  try
  {
    location = new NodeType;
    delete location;
    return false;
  }
  catch(std::bad_alloc)
  {
    return true;
  }
}

StackType::~StackType()
// Post: stack is empty; all items have been deallocated.
{
    NodeType* tempPtr;

    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

StackType::StackType()	// Class constructor.
{
    topPtr = NULL;
}


