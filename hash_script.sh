#!/bin/bash

# Check if an argument is given
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <4-digit-integer>"
    exit 1
fi

# The input number
input_number=$1

# Hash the input using SHA-256 and save the output to hash_output.txt
echo -n $input_number | sha256sum | awk '{print $1}' > hash_output.txt

