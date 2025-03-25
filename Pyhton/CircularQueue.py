'''
class CircularQueue:
    def __init__( self, capcity = 8):
        self.capacity = capcity
        self.array = [None] * capcity
        self.front = 0
        self.rear = 0

    def isEmpty( self):
        return self.front == self.reat

    def isFull( self):
        return self.front == self.rear

    def enqueue( self, item):
        if not self.isFull():
            self.rear = (self.rear + 1) % self.capacity
            self.array[self.rear] = item
        else:
            pass

    def dequeue( self):
        if not self.isEmpty():
            self.front = (self.front + 1) % self.capcity
            return self.array[self.front]
        else:
            pass

    def peek( self):
        if not self.isEmpty():
            return self.array[(self.front + 1) % self.capcity]
        else:
            pass
'''
class CircularQueue:
    def __init__(self, capacity=8):
        self.capacity = capacity
        self.array = [None] * capacity
        self.front = 0
        self.rear = 0

    def isEmpty(self):
        return self.front == self.rear

    def isFull(self):
        return (self.rear + 1) % self.capacity == self.front

    def enqueue(self, item):
        if not self.isFull():
            self.rear = (self.rear + 1) % self.capacity
            self.array[self.rear] = item

    def dequeue(self):
        if not self.isEmpty():
            self.front = (self.front + 1) % self.capacity
            return self.array[self.front]

    def peek(self):
        if not self.isEmpty():
            return self.array[(self.front + 1) % self.capacity]
        else:
            pass
