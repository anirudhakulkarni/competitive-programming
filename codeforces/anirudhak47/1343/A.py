def fast_power2(base, power):
 
    result = 1
    while power > 0:
        # If power is odd
        if power % 2 == 1:
            result = (result * base) 
 
        # Divide the power by 2
        power = power // 2
        # Multiply base to itself
        base = (base * base) 
 
    return result
def sigma(k):
    return fast_power2(2,k)-1
for _ in range(int(input())):
    n=int(input())
    k=1
    c=3
    while c<=n:
        if n%c==0:
            print(n//c)
            break
        else:
            k+=1
            c=sigma(k)