try:
    ls = []
    while True:
        ls.append(int(input()))
except:
    for i in range(1, len(ls)):
        j = i - 1
        k = i
        while (ls[k] < ls[j]):
            ls[k], ls[j] = ls[j], ls[k]
            k -= 1
            j -= 1
    print(ls)    