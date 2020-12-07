nome = input()
salario = float(input())
vendas = float(input())

comissao = salario + (vendas * 0.15)

print(f"TOTAL = R$ {comissao:.2f}")