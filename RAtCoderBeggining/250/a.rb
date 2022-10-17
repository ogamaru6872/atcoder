inputs = gets.split(' ')
# inputs.each do |value|
#   puts value.to_i
# end
h = inputs[0].to_i
w = inputs[1].to_i

inputs = gets.split(' ')
r = inputs[0].to_i
c = inputs[1].to_i

count = 0

# puts h, w, r, c

# puts r == 1
# # puts c, w
# if r == 1 || r == h
#   if c == 1 || c == w
#     count = 2
#   else
#     count = 3
#   end
# else
#   if c == 1 || c == w
#     count = 3
#   else
#     count = 4
#   end
# end

case r
when 1, h
  case c
  when 1, w
    count = 2
  else
    count = 3
  end
else
  case c
  when 1, w
    count = 3
  else
    count = 4
  end
end

puts count
