'''
class LinkedStack:
    def __init__(self):
        self.top = None
    
    def isEmpty(self): return self.top == None

    def isFull(self): return False

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
        while node == None:
            node =node.link
            count += 1
        return count

    def __str__(self):
        arr = []
        node = self.top
        while not node == None:
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
print(ll.getEntry(0))10
print(ll.getEntry(1))
print(ll.getEntry(2))
ll.delete(1)
print(ll.getEntry(1))
'''
class LinkedStack:
    def __init__(self):
        self.top = None
    
    def isEmpty(self): 
        return self.top == None

    def isFull(self): 
        return False

    def push(self, e):
        # 수정: push할 때 새 노드를 생성하도록 수정
        self.top = Node(e, self.top)

    def pop(self):
        if not self.isEmpty():
            n = self.top
            self.top = n.link
            return n.data
        
    def peek(self):
        if not self.isEmpty():
            return self.top.data

    # 추가: size 메서드 추가
    def size(self):
        node = self.top
        count = 0
        while node != None:
            node = node.link
            count += 1
        return count

    # 추가: __str__ 메서드 추가
    def __str__(self):
        arr = []
        node = self.top
        while node != None:
            arr.append(node.data)
            node = node.link
        return str(arr)

# 예제 사용
s = LinkedStack()
s.push(1)
s.push(2)
s.push(3)
print(s.pop())  # 출력: 3
print(s.peek())  # 출력: 2
print(s.size())  # 출력: 2
print(s)         # 출력: [2, 1]

# LinkedList 예제 사용
ll = LinkedList()
ll.insert(0, 10)
ll.insert(1, 20)
ll.insert(2, 30)
print(ll.getEntry(0))  # 출력: 10
print(ll.getEntry(1))  # 출력: 20
print(ll.getEntry(2))  # 출력: 30
ll.delete(1)
print(ll.getEntry(1))  # 출력: 30
