days, money, minimum = map(int, input().split())
worth = list(map(int, input().split()))
initial = money
bought = False
can_buy = False
index = -1

for num in worth:
    index += 1
    if bought == False:
        if num > minimum:
            print("WAIT")
        else:
            # Haven't bought ducks yet
            # Need to check if there is a higher price futher down the list

            # Be careful
            # Need to check if you have enough money to buy a duck
            if num <= money:
                if index == len(worth) - 1:
                    can_buy = False
                else:
                    for i in range(index+1, len(worth)):
                        if worth[i] > num:
                            can_buy = True
                            break

                if can_buy:
                    duck_no = money // num
                    rem = money - num * duck_no
                    money = rem
                    bought = True
                    bought_price = num
                    print(f"BUY {duck_no}")

                else:
                    print("WAIT")
                
                can_buy = False

            else:
                print("WAIT")

    else:
        if num <= bought_price:
            print("HOLD")
        else:
            print(f"SELL {duck_no}")
            money += duck_no * num
            bought = False

print(money - initial)

# Try future max strategy
# Start from the end of the list and slowly find the max number after each position