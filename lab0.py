lst = [1, 1, 1, 1, 1, 1, 1]
lst.sort()
addlst = []
for i in range(len(lst)-1):
    r = lst[i+1]-lst[i]
    if r > 1:
        for j in range(r-1):
            addlst.append(lst[i]+j+1)
print(addlst)
