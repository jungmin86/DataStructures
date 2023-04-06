import ItemType

class FullStack(Exception):
    def __init__(self):
        super().__init__("스택이 꽉 찼습니다.")

class EmptyStack(Exception):
    def __init__(self):
        super().__init__("스택이 비어있습니다.")

class StackType:
    def __init__(self):
        self.__top = -1
        self.__items = []
    
    def IsEmpty(self):
        return (self.__top == -1)

    def IsFull(self):
        return (self.__top == ItemType.MAX_ITEMS - 1)

    def Push(self, newItem):
        if(self.IsFull() == True):
            raise FullStack()
        else:
            self.__top += 1
            self.__items.append(newItem.getValue())
    
    def Pop(self):
        if(self.IsEmpty() == True):
            raise EmptyStack()
        else:
            self.__top -= 1
            return self.__items.pop()
    
    def Top(self):
        if(self.IsEmpty() == True):
            raise EmptyStack()
        else:
            return self.__items[self.__top]
    
    def __str__(self):
        return str(self.__items)

        

i = ItemType.ItemType()
i.Initialize(1)
ii = ItemType.ItemType()
ii.Initialize(3)
iii = ItemType.ItemType()
iii.Initialize(7)
iiii = ItemType.ItemType()
iiii.Initialize(5)

s = StackType()
print(s.IsEmpty())
print(s.IsFull())

s.Push(i)
s.Push(ii)
s.Push(iii)
s.Push(iiii)
s.Push(i)

print(s.IsEmpty())
print(s.IsFull())
print(s)
print(s.Top())

s.Pop()
print(s)
print(s.Top())
s.Pop()
print(s)
print(s.Top())

