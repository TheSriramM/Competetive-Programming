# Two pointers method
# Co existing years => min(death1, death2) - max(birth1, birth2)
# Go through each mathematician and find a physicist that was born before the mathematician died and find their overlap
# For each mathematician we can obtain the maximum years of overlap with a physicist

m, p = map(int, input().split())
max_overlap = 0

mathematicians = [list(map(int, input().split())) for math in range(m)]

first_born_p = 1000000001
last_born_p = 0

for _ in range(p):
    phys = list(map(int, input().split()))
    first_born_p = min(phys[0], first_born_p)
    last_born_p = max(phys[1], last_born_p)