'''
from CircularQueue import CircularQueue

class CircularDeque(CircularQueue):
    def addRear(self, item):
        self.enqueue(item)

    def deleteFront(self):
        return self.dequeue()
    
    def getFront(self):
        return self.peek()
    
    def addFront(self, item):
        if not self.isFull():
            self.front = (self.front - 1 + self.capacity) % self.capacity
            self.array[self.front] = item

    def deleteRear(self):
        if not self.isEmpty():
            item = self.array[self.rear]
            self.rear = (self.rear - 1 + self.capacity) % self.capacity
            return item
        
    def getRear(self):
        if not self.isEmpty():
            return self.array[self.rear]

if __name__ == "__main__":
    dq = CircularDeque(10)

    dq.addFront(4)
    dq.addRear(8)
    dq.addRear(9)
    dq.addFront(5)
    print(dq.getRear())         # getRear() => 9
    dq.deleteFront()            # deleteFront() => 5
    dq.deleteRear()             # deleteRear() => 9
    dq.addRear(7)
    print(dq.getRear())         # getRear() => 7
    dq.addRear(6)
    dq.deleteFront()            # deleteFront() => 4
    result = dq.deleteFront()   # deleteFront() => 8, 마지막으로 반환된 값

    print("마지막으로 반환된 값:", result)  # 4
'''

from CircularQueue import *

class CircularDeque(CircularQueue):
    def addRear(self, item):
        self.enqueue(item)

    def deleteFront(self):
        return self.dequeue()
    
    def getFront(self):
        return self.peek()
    
    def addFront(self, item):
        if not self.isFull():
            self.front = (self.front - 1 + self.capacity) % self.capacity
            self.array[self.front] = item

    def deleteRear(self):
        if not self.isEmpty():
            item = self.array[self.rear]
            self.rear = (self.rear - 1 + self.capacity) % self.capacity
            return item
        
    def getRear(self):
        if not self.isEmpty():
            return self.array[self.rear]

if __name__ == "__main__":
    dq = CircularDeque(10)

    dq.addFront(4)
    dq.addRear(8)
    dq.addRear(9)
    dq.addFront(5)
    print(dq.getRear())
    dq.deleteFront()
    dq.deleteRear()
    dq.addRear(7)
    print(dq.getRear())
    dq.addRear(6)
    dq.deleteFront()
    result = dq.deleteFront()

    print("마지막으로 반환된 값:", result)
