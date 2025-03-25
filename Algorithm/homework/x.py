'''
23101325 이정원
'''
class ArraySet:
    def __init__(self, capacity=100):
        self.capacity = capacity
        self.array = [None] * capacity
        self.size = 0

    def isEmpty(self):
        return self.size == 0

    def isFull(self):
        return self.size == self.capacity

    def __str__(self):
        return str(self.array[:self.size])

    def contains(self, e):
        for i in range(self.size):
            if self.array[i] == e:
                return True
        return False

    def insert(self, e):
        if self.contains(e) or self.isFull():
            return
        self.array[self.size] = e
        self.size += 1
        for i in range(self.size - 1, 0, -1):
            if self.array[i - 1] <= self.array[i]:
                break
            self.array[i - 1], self.array[i] = self.array[i], self.array[i - 1]

    def delete(self, e):
        for i in range(self.size):
            if self.array[i] == e:
                self.array[i] = self.array[self.size - 1]
                self.size -= 1
                for j in range(i, self.size - 1):
                    if self.array[j] > self.array[j + 1]:
                        self.array[j], self.array[j + 1] = self.array[j + 1], self.array[j]
                return

    def union(self, setB):
        setC = ArraySet(self.capacity + setB.capacity)
        i = j = 0
        while i < self.size and j < setB.size:
            if self.array[i] < setB.array[j]:
                setC.insert(self.array[i])
                i += 1
            elif self.array[i] > setB.array[j]:
                setC.insert(setB.array[j])
                j += 1
            else:
                setC.insert(self.array[i])
                i += 1
                j += 1

        while i < self.size:
            setC.insert(self.array[i])
            i += 1
        while j < setB.size:
            setC.insert(setB.array[j])
            j += 1

        return setC

    def intersect(self, setB):
        setC = ArraySet(min(self.capacity, setB.capacity))
        for i in range(self.size):
            if setB.contains(self.array[i]):
                setC.insert(self.array[i])
        return setC

    def difference(self, setB):
        setC = ArraySet(self.capacity)
        for i in range(self.size):
            if not setB.contains(self.array[i]):
                setC.insert(self.array[i])
        return setC

    def __eq__(self, setB):
        if self.size != setB.size:
            return False
        for i in range(self.size):
            if self.array[i] != setB.array[i]:
                return False
        return True

def test_ArraySet():
    setA = ArraySet()
    setA.insert(1)
    setA.insert(2)
    setA.insert(3)

    setB = ArraySet()
    setB.insert(3)
    setB.insert(4)
    setB.insert(5)

    print("Set A:", setA)  # [1, 2, 3]
    print("Set B:", setB)  # [3, 4, 5]

    setUnion = setA.union(setB)
    print("Union of A and B:", setUnion)  # [1, 2, 3, 4, 5]

    setIntersect = setA.intersect(setB)
    print("Intersection of A and B:", setIntersect)  # [3]

    setDifference = setA.difference(setB)
    print("Difference of A and B:", setDifference)  # [1, 2]

    setA.delete(2)
    print("Set A after deleting 2:", setA)  # [1, 3]

    setC = ArraySet()
    setC.insert(1)
    setC.insert(3)
    print("Set A equals Set C:", setA == setC)  # True
    print("Set A equals Set B:", setA == setB)  # False

test_ArraySet()

