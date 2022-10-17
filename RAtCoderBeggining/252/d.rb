n = gets.to_i
arr_a =  gets.split(' ')
count = 0
arr_a.combination(3) { |a|
  count += 1 if a.uniq.length == 3
}
puts count