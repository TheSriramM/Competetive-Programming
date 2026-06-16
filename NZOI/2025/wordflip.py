n = int(input())
word = input()
smallest = min(word)
word = list(word)
possible = []

for i in range(n):
    last = word.pop()
    if last == smallest:
        word.insert(0, last)
        possible.append("".join(word))

    else:
        word.insert(0, last)

possible.sort()
print(possible[0])