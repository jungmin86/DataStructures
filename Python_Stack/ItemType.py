MAX_ITEMS = 5;
class ItemType:
    def __init__(self):
        self.__value = 0

    def ComparedTo(self, otherItem):
        if (self.__value < otherItem.__value):
            return "LESS"
        elif (self.__value < otherItem.__value):
            return "GREATER"
        else:
            return "EQUAL"
        
    def Initialize(self, number):
        self.__value = number
    
    def __str__(self):
        return self.__value
    
    def getValue(self):
        return self.__value
    
