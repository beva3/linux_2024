#!/bin/bash

echo "Compilation ..."

#File name
SOURCE="*.c"

#output
OUTPUT="linux_2024"

#compilation
gcc $SOURCE -o $OUTPUT

#verification
if [ $? -eq 0 ]; then
    echo "Successfull"
    sudo mv $OUTPUT "/usr/lib/cgi-bin/"
    else 
        echo "Error ... "
fi

