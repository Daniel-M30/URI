lines1 = input().split(" ")
lines2 = input().split(" ")

p1 = float(lines1.pop())
p2 = float(lines2.pop())

q1 = int(lines1.pop())
q2 = int(lines2.pop())

total = p1 * q1 + p2 * q2

print(f"VALOR A PAGAR = R$ {total:.2f}")