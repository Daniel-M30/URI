import math

lines1 = input().split(" ")
lines2 = input().split(" ")

y1 = float(lines1.pop())
x1 = float(lines1.pop())

y2 = float(lines2.pop())
x2 = float(lines2.pop())

dist = math.sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))

print(f"{dist:.4f}")