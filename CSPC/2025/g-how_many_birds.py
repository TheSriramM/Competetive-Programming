info = input().split()
n = int(info[0])
target = info[1].lower()
counts = []

for day in range(n):
    day_count = 0
    while True:
        bird = input()
        if bird == "END":
            break
        if bird.lower() == target:
            day_count += 1
        
    counts.append(str(day_count))

print(" ".join(counts))