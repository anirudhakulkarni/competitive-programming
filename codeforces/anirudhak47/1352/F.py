# cook your dish here
for t in range(int(input())):
    #n=input()
    n1,n3,n2=map(int,input().split())
    if n1==0 and n2==0 and n3!=0:
        if n3%2==1:
            for i in range(n3//2+1):
                print("01",end="")
            print()
        else:
            for i in range(n3//2):
                print("01",end="")
            print("0")
    if n1==0 and n2!=0 and n3!=0:
        for i in range(n2+1):
            print("1",end="")
        if n3%2==0:
            for i in range((n3)//2):
                print("01",end="")
            print()
        else:
            for i in range((n3)//2):
                print("01",end="")
            print("0")    

    if n3==0:
        if n2==0:
            for i in range(n1+1):
                print("0",end="")
        else:
            for i in range(n2+1):
                print("1",end="")
        print()
    if n1!=0 and n3!=0 and n2==0:
        for i in range(n1+1):
            print("0",end="")
        if n3%2==1:
            for i in range((n3+1)//2):
                print("01",end="")
        else:
            for i in range((n3+1)//2):
                print("01",end="")
            print("0")    
        print()
        
        
    if n3!=0 and n2!=0 and n1!=0:
        for i in range(n1+1):
            print("0",end="")
        for i in range(n2+1):
            print("1",end="")
        if n3%2==1:
            for i in range((n3-1)//2):
                print("01",end="")
        else:
            for i in range((n3-1)//2):
                print("01",end="")
            print("0")
        print()