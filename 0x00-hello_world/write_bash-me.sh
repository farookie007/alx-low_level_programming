#!/bin/bash

# A bash script for creating empty bash scripts

# Getting the filename from the command line
filename=$1
echo "#!/bin/bash" > $filename

# Making the file it executable
chmod +x $filename

# Opening the file with vi editor
vi $filename

