# Em Ruby, algumas constantes pré-definidas são definidas no módulo Math, como 
#Math::PI (o número pi), Math::E (a base dos logaritmos naturais), Float::MAX 
#(o valor máximo de um número real) e Float::MIN (o valor mínimo de um número real). 
#Para usar essas constantes, é preciso incluir o módulo Math no início do programa 
#com include Math.

include Math

# Exemplo de uso da constante Math::PI para calcular o volume de uma esfera com raio 5
raio = 5
volume = (4.0 / 3.0) * Math::PI * raio ** 3
puts "O volume da esfera é #{volume}"

# Exemplo de uso da constante Math::E para calcular o valor da função 
#exponencial e^x para x = 2
x = 2
exponencial = Math::E ** x
puts "O valor da função exponencial é #{exponencial}"

# Exemplo de uso das constantes Float::MAX e Float::MIN para verificar se um número 
#real está dentro dos limites
n = 1000.0
if n > Float::MAX
  puts "O número é maior que o limite máximo"
elsif n < Float::MIN
  puts "O número é menor que o limite mínimo"
else
  puts "O número está dentro dos limites"
end


