# Código em Ruby
# Ruby não possui os operadores ++ e --
# Em vez disso, usa-se os métodos succ e pred

# Declara uma variável x com valor 5
# Em Ruby, não é necessário usar ponto-e-vírgula no final das linhas
# Em Ruby, não é necessário usar parênteses para imprimir valores com puts
# Em Ruby, as variáveis locais começam com letras minúsculas ou sublinhados (_)

x = 5 
puts "x = #{x}" # Imprime o valor de x
puts "!x = #{!x}" # Imprime o valor de !x (negação lógica)
puts "x.succ = #{x.succ}" # Imprime o valor de x.succ (sucessor de x)
puts "x = #{x}" # Imprime o valor de x (não alterado pelo método succ)
x = x.succ # Atribui o valor de x.succ a x
puts "x = #{x}" # Imprime o novo valor de x
puts "x.pred = #{x.pred}" # Imprime o valor de x.pred (antecessor de x)
puts "x = #{x}" # Imprime o valor de x (não alterado pelo método pred)
x = x.pred # Atribui o valor de x.pred a x
puts "x = #{x}" # Imprime o novo valor de x
puts "+x = #{+x}" # Imprime o valor de +x (sinal positivo)
puts "-x = #{-x}" # Imprime o valor de -x (sinal negativo)

