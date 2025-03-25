'''
23101325 이정원
'''


class Node:
    def __init__(self, elem, link=None):
        self.data = elem
        self.link = link

class LinkedList:
    def __init__(self):
        self.head = None

    def isEmpty(self): 
        return self.head == None

    def isFull(self): 
        return False

    def getNode(self, pos):
        if pos < 0: 
            return None
        node = self.head
        while pos > 0 and node != None: 
            node = node.link
            pos -= 1
        return node
    
    def getEntry(self, pos):
        node = self.getNode(pos)
        if node == None: 
            return None
        else: 
            return node.data

    def insert(self, pos, elem):
        before = self.getNode(pos-1)
        if before == None:
            self.head = Node(elem, self.head)
        else:
            node = Node(elem, before.link)
            before.link = node

    def delete(self, pos):
        before = self.getNode(pos-1)
        if before == None:
            if self.head is not None:
                self.head = self.head.link
        elif before.link != None:
            before.link = before.link.link

class LinkedStack:
    def __init__(self):
        self.top = None
    
    def isEmpty(self): 
        return self.top == None

    def isFull(self): 
        return False

    def push(self, e):
        self.top = Node(e, self.top)

    def pop(self):
        if not self.isEmpty():
            n = self.top
            self.top = n.link
            return n.data
        
    def peek(self):
        if not self.isEmpty():
            return self.top.data

    def size(self):
        node = self.top
        count = 0
        while node != None:
            node = node.link
            count += 1
        return count

    def __str__(self):
        arr = []
        node = self.top
        while node != None:
            arr.append(node.data)
            node = node.link
        return str(arr)


s = LinkedStack()
s.push(1)
s.push(2)
s.push(3)
print(s.pop())
print(s.peek())
print(s.size())
print(s)


ll = LinkedList()
ll.insert(0, 10)
ll.insert(1, 20)
ll.insert(2, 30)
print(ll.getEntry(0))
print(ll.getEntry(1))
print(ll.getEntry(2))
ll.delete(1)
print(ll.getEntry(1))
