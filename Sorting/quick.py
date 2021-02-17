def partition(num, low, heigh):
    pivot = num[heigh]
    i = low - 1
    for j in range(low, heigh):
        if num[j] <= pivot:
            i+=1
            num[i], num[j] = num[j], num[i]
    num[i+1],num[heigh] = num[heigh],num[i+1]
    return i+1        
    
def quick(num, low, heigh):
    if low < heigh:
        pi = partition(num, low, heigh)
        quick(num, low, pi - 1)
        quick(num,pi+1,heigh)
    

if __name__ == '__main__':
    try:
        ls = []
        while True:
            ls.append(int(input()))
    except:
        quick(ls, 0, len(ls)-1)
        print(ls)