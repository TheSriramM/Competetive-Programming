from collections import Counter

n = int(input())
names = [input() for name in range(n)]

totems = int(input())
tot_people = [input() for person in range(totems)]

while True:
    most = Counter(names).most_common(1)[0][0]
    if most not in tot_people:
        print(most + ", the group has spoken.")
        break
    
    else:
        new_names = [name for name in names if name != most]
        names = new_names