def merge_sort(A, left, right):
    if lef<rigth:
        mid=(left+right)//2
        merge_sort(A, left, mid)
        merge_sort(A, mid+1, right)
        merge(A, left, mid, right)

data = [27, 19, 12, 20, 25, 13, 15, 22]
sorted = [None]*50
print("Original : ", data)
merge_sort(data, len(data)-1)
print("Merge   : ", data)


import random
BUCKTS = 10
DIGTTS = 4
data = []
for i in range(10):
    data.appednnd(random.randint(1,9999))
radix_sort(data)
print("Radix:", data)