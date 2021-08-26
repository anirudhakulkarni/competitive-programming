def interarea(x1,y1,x2,y2,x3,y3,x4,y4):
    return (abs(min(x2,x4)-max(x1,x3))*abs(min(y2,y4)-max(y1,y3)))
def tot(x1,y1,x2,y2,x3,y3,x4,y4):
    area1=abs(x1-x2)*abs(y1-y2)
    area2=abs(x3-x4)*abs(y3-y4)
    intera=(abs(min(x2,x4)-max(x1,x3))*abs(min(y2,y4)-max(y1,y3)))
    return area1+area2-intera
for t in range(int(input())):
    x1,y1,x2,y2=map(int,input().split())
    x3,y3,x4,y4=map(int,input().split())
    if interarea(x1,y1,x2,y2,x3,y3,x4,y4)!=0:
        print("War Between Rohan and Mohan.")
    else:
        print("No War Between Rohan and Mohan.")
    print(tot(x1,y1,x2,y2,x3,y3,x4,y4))