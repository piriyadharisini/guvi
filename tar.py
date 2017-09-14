L = map(int,raw_input().split())
target = input()
flag = 0
for i in range(0,len(L)) :
    for j in range(i,len(L)) :
        if L[i]+L[j] == target :
            print L[i],L[j]
            flag = 1
            break
    if flag == 1 :
        break