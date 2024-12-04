qtd = int(input("Digite a quantidade de pessoas: "))

i=0
idades = []
somaIdades=0
nomes = []

for i in range(qtd):
    nomes.append(input(f"Digite o {i+1} nome: "))
    idades.append(int(input(f"\nDigite a idade de {nomes[i]}: ")))

somaIdades = sum(idades)
print(somaIdades)

media = somaIdades / qtd
i=0
print(f"Média de idades: {media}")

def maiorqueMedia():
    if idades[i] > media:
        print(f"\n{nomes[i]} possui a idade maior que a média.")


for i in range(qtd):
    maiorqueMedia()
