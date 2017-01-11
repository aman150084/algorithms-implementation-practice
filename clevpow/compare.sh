#!/bin/bash
echo "Enter the numbers: base , exponent separated by a space"
read base
read exponent
echo "Results from Exponentiation by sqaure method"
gcc cleverpow.c -o cleverpow
echo $base $exponent | ./cleverpow
echo "Results from Recursive Exponentiation"
gcc iterpow.c -o iterpow
echo $base $exponent | ./iterpow
