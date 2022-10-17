require 'prime'

def prime_array(n)
  array = []
  Prime.each(n) do |prime|
    # p prime #=> 2, 3, 5, 7, 11, ..., 97
    break if prime * prime * prime > n
    array.push(prime)
  end
end
# puts q_array.join(" ")

inputs = gets.split(' ')

n = inputs[0].to_i
count = 00

p_array = []
q_array = prime_array(n)
q_array.each do |q_val|
  max_p = n / q_val / q_val / q_val
  break if max_p == 1
  p_array = prime_array(q_val)
  p_array.reverse.each do |p_val|
    # p p_val #=> 2, 3, 5, 7, 11, ..., 97
    # puts "p:#{p_val}, q:#{q_val}"
    break if p_val < max_p
    # break if p_val == q_val
    # result = q_val * q_val * q_val * p_val
    # break if result > n
    # # puts "result ok!!!"
    # puts "count up! #{p_val * q_val * q_val * q_val}"
    count = count + 1
  end
end

# puts "------"
puts count
# puts "------"