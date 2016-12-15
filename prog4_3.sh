

#!/bin/bash
 dOne="$1"
 dTwo="$2"

 echo "Assignment #4 Abdiqani Ainab ainab4072@gmail.com"

gcc prog4_1.c -llua -lm -ldl -L lua-5.3.3/src -I lua-5.3.3/src

./aout $dTwo > test.txt

if diff test.txt $dTwo > /dev/null ; then
	echo "Test passed"
else
	echo "Test Failed

fi

#rm a.out test.txt
