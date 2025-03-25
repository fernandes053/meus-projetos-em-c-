nome_strg=input("Digite seu nome: ")

if(len(nome_strg) < 3):
    print("ERRO, Nome de usuario deve conter mais de 3 caracteres, Digite novamente")
    nome_strg=input("Digite seu nome: ")

idade=int(input("Digite sua idade: "))

if(idade < 0 or idade > 150):
    print("ERRO, Idade invalida, Digite novamente")
    idade=int(input("Digite sua idade: "))

sex_strg=input("Digite seu sexo <M/F>: ").lower()

if(sex_strg !=  'm' and sex_strg !=  'f'): 
    print("ERRO, sexo invalido, Digite novamente")
    sex_strg=input("Digite seu sexo: ").lower()

estd_civil=input("Digite seu estado civil <S/C/V/D> ").lower()

while estd_civil not in ['s', 'c', 'v', 'd']:
    print("ERRO, estado civil invalido, Digite novamente")
    estd_civil=input("Digite seu estado civil <S/C/V/D> ").lower()

print("\nAqui estão suas informacoes: ")
print("Nome: ", nome_strg,"\nIdade: ", idade,"\nSexo: ", sex_strg,"\nEstado civil: ", estd_civil)