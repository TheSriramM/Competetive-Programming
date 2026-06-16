n = int(input())
output = []

for _ in range(n):
    measurements = input().split()
    final = measurements

    if measurements.count("?") > 1:
        final = ["remeasure"]

    else:
        if measurements[0] == "?":
            final[0] = str(int(int(measurements[2]) / int(measurements[1])))

        elif measurements[1] == "?":
            final[1] = str(int(int(measurements[2]) / int(measurements[0])))

        elif measurements[2] == "?":
            final[2] = str(int(int(measurements[1]) * int(measurements[0])))
    
    output.append(final)

for item in output:
    print(" ".join(item))