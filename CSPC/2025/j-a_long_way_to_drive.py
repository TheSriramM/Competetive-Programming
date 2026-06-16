import itertools

n = int(input())
smallest = 100000000000
smallest_perm = []
data = []

for _ in range(n):
    data.append(input().split())


permutations = itertools.permutations(data)
for perm in permutations:
    total_dist = 0
    current_coords = [0, 0]
    for person in perm:

        distance = (((int(person[1])-current_coords[1])**2) + ((int(person[0])-current_coords[0])**2))**(1/2)
        current_coords = [int(person[0]), int(person[1])]
        total_dist += distance
    
    smallest = min(total_dist, smallest)
    if smallest == total_dist:
        smallest_perm = perm
    
output = ""
for i in range(len(smallest_perm)-1):
    output += smallest_perm[i][2] + ", "

output += smallest_perm[-1][2] + "."
print(output)