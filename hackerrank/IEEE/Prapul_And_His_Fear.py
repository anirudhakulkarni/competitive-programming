if True:
    me=110
    pw=[0 for i in range(110)]
    pr=[0 for i in range(110)]
    for i in range(11):
        pw[i]=1
    for i in range(11,110):
        pw[i]=pw[i//10]*10
    pr[1]=1
    for i in range(2,me):
        if !pr[i]:
            for j in range(i+1,me,i):
                pr[j]=i
    for i in range(10,me):
        if !pr[i] and (pr[i % pw[i]] or (i % pw[i] < pw[i / 10])):
            pr[i]=1
    for i in range(me):
        pr[i]=!pr[i]+pr[i-1]
for t in range(int(input())):

    n=int(input())
    print(pr[n])