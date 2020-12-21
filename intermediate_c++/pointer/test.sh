#!/bin/bash

clear
g++ -o test.out test.cpp #compile
# -std=c++1z -Ofast #for fast compile
echo "test.out"

./test.out

echo "
end of runing."
