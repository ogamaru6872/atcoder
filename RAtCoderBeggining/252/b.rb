inputs = gets.split(' ')

n = inputs[0].to_i
k = inputs[1].to_i

# puts n, k
arr_a = gets.split(' ').map {|m| m.to_i}
# puts arr_a

arr_b = gets.split(' ').map {|m| m.to_i}
# puts arr_b

indexes = []
m = arr_a.max
arr_a.each_with_index { |arr, i|
  indexes.push(i + 1) if arr == m
}

# require 'pp'
# pp indexes
# pp arr_b
n_a = indexes - arr_b

# pp indexes
# pp arr_b
if indexes.size > n_a.size
  puts "Yes"
else
  puts "No"
end