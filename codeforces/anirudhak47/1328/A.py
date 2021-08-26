for _ in range(int(input())):
    A, B = map(int, input().split())
    if B > A:
        print(B-A)
    else:
        print((B - (A % B))%B)