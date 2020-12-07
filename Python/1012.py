lines = input().split(" ")

c = float(lines.pop())
b = float(lines.pop())
a = float(lines.pop())

triangulo = a * c / 2
circulo = pow(c, 2) * 3.14159
trapezio = (a + b) * c / 2
quadrado = pow(b, 2)
retangulo = a * b

print(f"TRIANGULO: {triangulo:.3f}\nCIRCULO: {circulo:.3f}\nTRAPEZIO: {trapezio:.3f}")
print(f"QUADRADO: {quadrado:.3f}\nRETANGULO: {retangulo:.3f}")