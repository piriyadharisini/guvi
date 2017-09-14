import itertools
k = raw_input()
com=[list(itertools.combinations(k,x)) for x in range(1,len(k)+1)]

L =  [''.join(e) for e in sum(com,[])]
L = L[::-1]

flag = 0

for i in L :
    if i != i[::-1]:
        print len(i)
        flag = 1
        break
if flag == 0:
    print "All the substrings are palindrome in this string :) -- >", k