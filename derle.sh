#!/bin/bash

# object files to be generated
objects=""

# compile each file
for file in $@; do
    # get the object file name by replacing .c with .o
    object=${file%.c}.o

    # compile the file and generate object file
    gcc -c $file -o $object

    # append object file name to the list of objects
    objects="$objects $object"
done

# print the list of generated object files
echo $objects
