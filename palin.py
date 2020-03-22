class permutation:
def palindromepermutation(a):
dic ={}
for i in  a:
    if i not in dic.keys():
        dic[i] = 0
    dic[i] = dic[i]+1
c=0
for i in dic:
    c += dic[i]%2

return c<=1

obj = permutation()
a = "aba"
obj.palindromepermutation(a)

