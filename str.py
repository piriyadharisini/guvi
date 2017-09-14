L = []
k = list(raw_input())
for i in k:
    if i not in L:
        L.append(i)
print ''.join(L)