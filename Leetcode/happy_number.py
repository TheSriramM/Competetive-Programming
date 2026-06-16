n = int(input())
nums = []
total = 0
while total not in nums:
    total = 0
    for digit in str(n):
        total += int(digit)*int(digit)

    if total == 1:
        print("true")
        break
    nums.append(total)

if total != 1:
    print("false")