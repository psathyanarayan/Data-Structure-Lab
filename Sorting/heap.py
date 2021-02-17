def heapify(ls, n, i):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2
    if l < n and ls[l] > ls[largest]:
        largest = l
    if r < n and ls[r] > ls[largest]:
        largest = r    
    if largest != i:
        ls[i], ls[largest] = ls[largest], ls[i]
        heapify(ls,n,largest)

def heapSort(ls, n):
    for i in range(int(n / 2 - 1), -1,-1):
        heapify(ls, n, i)
    for i in range(n - 1, 0,-1):
        ls[0], ls[i] = ls[i], ls[0]
        heapify(ls, i, 0)
    print(ls)     

if __name__ == '__main__':
    try:
        ls = []
        while True:
            ls.append(int(input()))
    except:
        heapSort(ls,len(ls))
         