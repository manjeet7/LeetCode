class solution:
    def unique(a):
    b ={}
    for i in a:
        if i not in b.keys():
            b[i] =0
        b[i] = b[i]+1
    for i in range(len(a)):
        if b[a[i]]==1:
            return i
    return -1

doc = solution()
a = "leetcode"
print(doc.unique
