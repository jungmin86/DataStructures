#include "Student.h"
#include "HeapSort.h"


void Swap(int& item1, int& item2)
// Post: Contents of item1 and item2 have been swapped.
{
  int tempItem;

  tempItem = item1;
  item1 = item2;
  item2 = tempItem;
}
