
continuar_usando = "SIM"

while continuar_usando == "SIM":
  #Criando um menu de opções
  print("SELECIONE A OPERAÇÃO DESEJADA")
  print("+ para Adição")
  print("- para Subtração")
  print("* para Multiplicação")
  print("/ para Divisão")

  # Interação com o usuário
  operacao = input("\nQual operação você deseja realizar? ")

  #Criando as operações e as apresentações de respostas

  #Adição
  if operacao == "+":
    a1 = float(input("\nDigite o primeiro valor: "))
    a2 = float(input("Digite o segundo valor: "))
    adicao = a1 + a2
    print("\nA soma entre",a1,"e",a2,"é:",adicao,"\n")
    print("*"*33,"\n")
    continuar_usando = input("Gostaria de fazer outra operação? ").upper()
    print("*"*33,"\n")

  #Subtração
  if operacao == "-":
    b1 = float(input("\nDigite o primeiro valor: "))
    b2 = float(input("Digite o segundo valor: "))
    subtracao = b1 - b2
    print("\nA subtração entre",b1,"e",b2,"é:",subtracao,"\n")
    print("*"*33,"\n")
    continuar_usando = input("Gostaria de fazer outra operação? ").upper()
    print("*"*33,"\n")

  #Multiplicação
  if operacao == "*":
    c1 = float(input("\nDigite o primeiro valor: "))
    c2 = float(input("Digite o segundo valor: "))
    multiplicacao = c1 * c2
    print("\nA multiplicação entre",c1,"e",c2,"é:",multiplicacao,"\n")
    print("*"*33,"\n")
    continuar_usando = input("Gostaria de fazer outra operação? ").upper()
    print("*"*33,"\n")

  #Divisão
  if operacao == "/":
    d1 = float(input("\nDigite o primeiro valor: "))
    d2 = float(input("Digite o segundo valor: "))
    while d2 == 0:                  #Garantindo que d2 não seja zero!!
      print("O segundo valor não pode ser zero!")
      d2 = float(input("\nDigite o segundo valor (diferente de zero): "))
    divisao = d1 / d2
    print("\nA divisão entre",d1,"e",d2,"é:",divisao,"\n")
    print("*"*33,"\n")
    continuar_usando = input("Gostaria de fazer outra operação? ").upper()
    print("*"*33,"\n")
