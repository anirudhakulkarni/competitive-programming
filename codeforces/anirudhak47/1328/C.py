# cook your dish here
from sys import stdin, stdout
for t in range(int(input())):
    n=int(input())
    num=stdin.readline()
    ans1="1"
    ans2="1"
    seen=False
    for i in range(1,n) :
        if num[i] == "2" and seen==False:
            ans1 = ans1+"1"
            ans2 = ans2+"1"
        elif num[i] == "2" and seen==True:
            ans1 = ans1+"0"
            ans2 = ans2+"2"
        elif num[i] == "1" and seen==False:
            ans1 = ans1+"1"
            ans2 = ans2+"0"
            seen = True
        elif num[i] == "1" and seen==True:
            ans1 = ans1+"0"
            ans2 = ans2+"1"
        else:
            ans1 = ans1+"0"
            ans2 = ans2+"0"
 
    stdout.write(ans1+"\n"+ans2+"\n")