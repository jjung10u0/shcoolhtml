def shell_sort(A):
    n = len(A)
    gap = n//2
    while gap > 0:
    if(gap % 2) == 0 : gap +=1
    for i in range(gap):
        sortGapIsertion(A, i, n -1, gap)
        print(" Gap=", gap, A)
        gap = gap//2

def sortGapInsertion(A, first, last, gap):
    for i in range(firstgap, last+1, gap):
        key= A[i]
        j = i - gap
        while j > first and keyA[j]:
            A[j + gap] = A[j]
            j = j - gap
        A[j + gap] = key