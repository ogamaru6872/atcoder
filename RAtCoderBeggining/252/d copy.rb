require 'pp'

n = gets.to_i
arr_a =  gets.split(' ')
# count = 0
MAX = 2 * 100000 + 10
# u_arr = arr_a.uniq

cnt = [0]*MAX

arr_a.each {|val|
  cnt[val.to_i] += 1
}

ans = n * (n-1) * (n-2) / 6
cnt.each { |i|
  ans-=i*(i-1)/2*(n-i)
  ans-=i*(i-1)*(i-2)/6
}
# counting = u_arr.map { |val|
#   arr_a.count(val)
# }

# count = n * (n-1) * (n-2) / 6
 
# counting.each do |num|
#   if num == 2
#     count = count - (n - 2)
#   elsif num >= 3
#     count = count - (num * (num - 1) /2) * (n - num ) - (num * (num - 1) * (num - 2) / 6)
#   end
# end


puts ans
# pp counting

# puts count