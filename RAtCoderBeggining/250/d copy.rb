require 'prime'
require 'time'
# Prime.each(100) do |prime|
#   p prime #=> 2, 3, 5, 7, 11, ..., 97
#   break if prime > 50
# end

# inputs = gets.split(' ')

# n = inputs[0].to_i

def test(n)

  old = Time.new
  count = 0

  hash = {}
  q_array = []
  Prime.each(n) do |prime|
    # p prime #=> 2, 3, 5, 7, 11, ..., 97
    break if prime * prime * prime > n
    q_array.push(prime)
    count += 1
    hash[prime] = count
  end

  count = 0
  # puts q_array.join(" ")
  
  q_array.each do |q_val|
    max_p = n / q_val / q_val / q_val
    break if max_p == 1
    # before_val = 0
    Prime.each(max_p) do |p_val|
      # p p_val #=> 2, 3, 5, 7, 11, ..., 97
      if p_val >= q_val
        count += hash[p_val] - 1
        break
      end
      # puts "p:#{p_val}, q:#{q_val}"
      # if p_val > max_p
      #   before_val = 
      #   break
      # end
      # break if p_val == q_val
      # result = q_val * q_val * q_val * p_val
      # break if result > n
      # # puts "result ok!!!"
      # puts "count up! #{p_val * q_val * q_val * q_val}"
      # count = count + 1
    end
  end

  puts "------"
  puts n
  puts t = Time.new - old
  puts count
  system('pause') if t > 2
  puts "------"
end

# 1000000000000000000.times do |num|
num = 1000000000000000000
num = 823759238856329872
test(num)
# end