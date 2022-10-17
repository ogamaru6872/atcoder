require 'pp'

n = gets.to_i

# pp n

arr_s = []
n.times {
  arr_s.push(gets.to_s.chomp)
}

# pp arr_s

target_num = []
10.times do |num|
  count = []
  arr_s.each do |arr|
    count.push arr.index(num.to_s)
  end
  target_num.push(count.sort)
end

# pp target_num

target_time = []
target_num.each do |target|
  if target.uniq == target
    target_time.push target.map{|m| m.to_i}.max
  else
    by = 0
    n = 0
    10.times do |num|
      if target.count(num) >= by
        by = target.count(num)
        n = num
      end
    end
    # by = target.max_by {|x| target.count(x)}
    # by
    t = (by - 1) * 10 + n
    target_time.push t
  end
end

# pp target_time + ["6"]
# target_time.map {|c| c.to_i}.min
puts target_time.map {|c| c.to_i}.min