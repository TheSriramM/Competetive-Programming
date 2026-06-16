n, k = map(int, input().split())
hosts = {}
requirements = {
    0: 0,
    1: 0,
    2: 0,
    3: 0,
    4: 0,
    5: 0,
}
stock = {}

for _ in range(n):
    fav = input().split()
    """
    GCEPLS
    012345
    """
    letter = fav[1]
    if letter == "G":
        requirements[0]+=1; 
    
    if letter == "C":
        requirements[1]+=1; 
    
    if letter == "E":
        requirements[2]+=1; 

    if letter == "P":
        requirements[3]+=1; 
    
    if letter == "L":
        requirements[4]+=1; 

    if letter == "S":
        requirements[5]+=1; 

for _ in range(n):
    person_stock = input().split()
    name = person_stock[0]
    person_stock.pop(0)
    stock[name] = person_stock

for _ in range(k):
    host = input()
    available = stock[host]
    annoyed = 0
    for i in range(6):
        if(requirements[i] > int(available[i])):
            annoyed += requirements[i] - int(available[i])
    if annoyed > 2:
        print(f"{host} Disaster ({annoyed})")
    elif annoyed > 0:
        print(f"{host} Mildly Successful ({annoyed})")
    else:
        print(f"{host} Successful")