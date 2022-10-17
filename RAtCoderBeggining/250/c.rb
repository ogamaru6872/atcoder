inputs = gets.split(' ')

n = inputs[0].to_i
q = inputs[1].to_i

xi = []
arr = []

n.times do |num|
  arr.push num + 1
end

q.times {
  input = gets.to_i
  xi.push(input)
}

# require 'pp'
q.times do |num|
  index = arr.find_index(xi[num])
  if index
    if index == n - 1
      temp = arr[index]
      arr[index] = arr[index - 1]
      arr[index - 1] = temp
      # puts "end!!"
    else
      temp = arr[index]
      arr[index] = arr[index + 1]
      arr[index + 1] = temp
    end 
  else
    # puts "nothing!!"
  end
end

puts arr.join(" ")
