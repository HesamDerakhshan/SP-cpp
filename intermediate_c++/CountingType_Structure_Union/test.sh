#!/bin/bash

clear
g++ -o test.out test.cpp  -std=c++17 -O2 #compile
echo "test.out"

./test.out

echo "
end of runing."
