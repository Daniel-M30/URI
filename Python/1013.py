lines = input().split(" ")

c = int(lines.pop())
b = int(lines.pop())
a = int(lines.pop())

maiorAb = (a + b + abs(a - b)) / 2
maior = (c + maiorAb + abs(c - maiorAb)) / 2

print(f"{maior:.0f} eh o maior")