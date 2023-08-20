# Declara uma variável do tipo Número chamada x e atribui a ela o valor decimal 10
x = Numero.new(10)
# Imprime na tela o valor da variável x na base decimal
puts "O valor de x na base decimal é #{x}"

# Declara uma variável do tipo Número chamada y e atribui a ela o valor binário 1010
y = Numero.new("1010", 2)
# Imprime na tela o valor da variável y na base binária
puts "O valor de y na base binária é #{y.to_s(2)}"

# Declara uma variável do tipo Número chamada z e atribui a ela o valor octal 12
z = Numero.new("12", 8)
# Imprime na tela o valor da variável z na base octal
puts "O valor de z na base octal é #{z.to_s(8)}"

# Declara uma variável do tipo Número chamada w e atribui a ela o valor hexadecimal A
w = Numero.new("A", 16)
# Imprime na tela o valor da variável w na base hexadecimal
puts "O valor de w na base hexadecimal é #{w.to_s(16)}"
