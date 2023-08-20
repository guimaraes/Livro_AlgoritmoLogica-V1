# Em Python, algumas constantes pré-definidas são definidas no módulo math, como math.pi 
# (o número pi), math.e (a base dos logaritmos naturais), sys.maxsize (o valor máximo de 
# um inteiro) e -sys.maxsize - 1 (o valor mínimo de um inteiro). Para usar essas 
# constantes, é preciso importar os módulos math e sys no início do programa com 
# import math e import sys.

import math
import sys

# Exemplo de uso da constante math.pi para calcular o comprimento de uma circunferência 
#com raio 5
raio = 5
comprimento = 2 * math.pi * raio
print(f"O comprimento da circunferência é {comprimento}")

# Exemplo de uso da constante math.e para calcular o valor da função logarítmica 
# ln(x) para x = 2
x = 2
logaritmo = math.log(x)
print(f"O valor da função logarítmica é {logaritmo}")

# Exemplo de uso das constantes sys.maxsize e -sys.maxsize - 1 para verificar se um 
# número inteiro está dentro dos limites
n = 1000
if n > sys.maxsize:
  print("O número é maior que o limite máximo")
elif n < -sys.maxsize - 1:
  print("O número é menor que o limite mínimo")
else:
  print("O número está dentro dos limites")
