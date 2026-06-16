# n = int(input())
# start = n // 2
# current = n
# path = []
# path.append(start)
# path.append(current)
# n = list(range(1, n+1))
# n.remove(start)
# n.remove(current)

# while n:
#     if current > start:
#         current = n.pop(0)
#         path.append(current)

#     else:
#         if current < start:
#             current = n.pop(-1)
#             path.append(current)

# print(*(path))

# Will try two pointers

n = int(input())
start = n//2
a, b = n - start, n
path = []

while len(path) < n:
    if a > 0:
        path.append(a)
        a -= 1

    if b > n - start:
        path.append(b)
        b -= 1
        

print(*(path))