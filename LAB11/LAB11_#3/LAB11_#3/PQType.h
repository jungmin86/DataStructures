// Definition of class PQType, which represents the Priority Queue ADT
class FullPQ{};
class EmptyPQ{};
#include "Heap.h"
#include "SortedType.h"
template<class ItemType>
class PQType
{
public:
  PQType();          // parameterized class constructor
  ~PQType();            // class destructor
  
  void MakeEmpty();
  // Function: Initializes the queue to an empty state.
  // Post: Queue is empty.
  
  bool IsEmpty() const;
  // Function: Determines whether the queue is empty.
  // Post: Function value = (queue is empty)
  
  bool IsFull() const;
  // Function: Determines whether the queue is full.
  // Post: Function value = (queue is full)
  
  void Enqueue(ItemType newItem);
  // Function: Adds newItem to the rear of the queue.
  // Post: if (the priority queue is full) exception FullPQ is thrown;
  //       else newItem is in the queue.
  
  void Dequeue(ItemType& item);
  // Function: Removes element with highest priority from the queue
  // and returns it in item.
  // Post: If (the priority queue is empty) exception EmptyPQ is thrown;
  //       else highest priority element has been removed from queue.
  //       item is a copy of removed element.
    
    //A. sortedLL로 정의 변경
private:
  int length;
  SortedType<ItemType> linkedlist;
//  int maxItems;
};

template<class ItemType>
PQType<ItemType>::PQType()
{
    linkedlist.MakeEmpty();
    length = 0;
}

template<class ItemType>
void PQType<ItemType>::MakeEmpty()
{
  length = 0;
    linkedlist.MakeEmpty();
}

template<class ItemType>
PQType<ItemType>::~PQType()
{
  //아무 것도 안해도 됨
}

//C. 리스트의 맨앞에 있는 것이 제일 큰 수 (내림차순) -> 맨앞꺼 지워주면 됨
template<class ItemType>
void PQType<ItemType>::Dequeue(ItemType& item)
// Post: element with highest priority has been removed 
//       from the queue; a copy is returned in item.
{
  if (length == 0)
    throw EmptyPQ();
  else
  {
      linkedlist.ResetList();
      linkedlist.GetNextItem(item);
      linkedlist.DeleteItem(item);
      length--;
  }
}

//B. 어차피 InsertItem에서 내림차순으로 넣어줌 -> length만 관리
template<class ItemType>
void PQType<ItemType>::Enqueue(ItemType newItem)
// Post: newItem is in the queue.
{
  if (linkedlist.IsFull())
    throw FullPQ();
  else
  {
      length++;
      linkedlist.InsertItem(newItem);
  }
}
template<class ItemType>
bool PQType<ItemType>::IsFull() const
// Post: Returns true if the queue is full; false, otherwise.
{
    return linkedlist.IsFull();
    //return length == linkedlist.LengthIs();
}

template<class ItemType>
bool PQType<ItemType>::IsEmpty() const
// Post: Returns true if the queue is empty; false, otherwise.
{
  return length == 0;
}

