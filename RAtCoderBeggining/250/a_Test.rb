inputs = gets.split(' ')

arr = Array.new(5, nil)
arr[0] = inputs[0].to_i
arr[1] = inputs[1].to_i

inputs = gets.split(' ')
array[2] = inputs[0].to_i
array[3] = inputs[1].to_i

arr[5] = 0

case array[2]
when 1, arr[0]
  case array[3]
  when 1, arr[1]
    arr[5] = 2
  else
    arr[5] = 3
  end
else
  case array[3]
  when 1, arr[1]
    arr[5] = 3
  else
    arr[5] = 4
  end
end

puts arr[5]
