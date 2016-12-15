

for l = 1, 100 do
     local fizz = 0 == l % 3
     local buzz = 0 == l % 5

     if fizz and buzz then
         print "FizzBuzz”
 
    elseif fizz then
         print "Fizz"

     elseif buzz then
         print "Buzz"

     else
         print(l)
     end
     end


