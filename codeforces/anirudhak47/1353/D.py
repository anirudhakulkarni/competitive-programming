from heapq import *

for _ in range(int(input())):
	n = int(input())

	A = [0] * n
	Q = [(-n, 0)]
	num = 1

	def push(l, start):
		if l <= 0: return
		heappush(Q, (-l, start))

	while Q:
		l, i = heappop(Q)
		l = -l
		mid = i + (l-1) // 2
		A[mid] = num
		h = l // 2
		num += 1

		push(mid - i, i)
		push(i + l - mid - 1, mid+1)


	print(*A)