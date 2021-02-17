def mergeSort(arr):
    if len(arr) > 1:
        m = len(arr) / 2
        L = []
        R = []
        L = arr[:m]
        R = arr[m:]
        mergeSort(L)
        mergeSort(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k+=1
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k+=1    
        
                
if __name__ == '__main__':
    try:
        ls = []
        while True:
            ls.append(int(input()))
    except:
        mergeSort(ls)
        print(ls)                