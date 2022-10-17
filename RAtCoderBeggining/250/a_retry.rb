inputs = gets.split(' ')

h = inputs[0].to_i
w = inputs[1].to_i

inputs = gets.split(' ')
r = inputs[0].to_i
c = inputs[1].to_i

count = 0

count += 1 if c != 1
count += 1 if c != w
count += 1 if r != 1
count += 1 if r != h

puts count
