inputs = gets.split(' ')

n = inputs[0].to_i
a = inputs[1].to_i
b = inputs[2].to_i

@white = true

def output
  if @white
    "."
  else
    "#"
  end
end

def convert
  @white = !@white
end

n.times {
  a.times {
    str = ""
    n.times {
      b.times {
        str += output
      }
      convert unless n == 1
    }
    puts str
  }
  convert unless a == 1
}
